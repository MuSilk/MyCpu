`ifndef CONTROLLER_SV
`define CONTROLLER_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

module Controller import common::*;(
    input func_data_t in,
    input u2 mode,
    output logic[2:0] fun3,//toCbusController
    output logic[9:0] fun10,//toALU
    output logic width,
    output creg_addr_t rs1,rs2,rd,
    output u12 csr_rd,
    output data_data_t code,
    output data_data_t imm,

    output logic imm_calc,mem_read,mem_write,
    output state_rd st_rd,
    output state_csr st_csr,
    output state_pc st_pc
);

    assign rs2=in[24:20];
    assign rs1=in[19:15];
    assign rd=in[11:7];

    assign fun3=in[14:12];
    
    always_comb begin
        st_csr=STCSR_DISABLED;
        st_pc=STPC_4;
        mem_read=0;
        mem_write=0;
        fun10=0;
        width=1'b0;
        csr_rd=12'b0;
        code=64'b0;

        case(in[6:0])
            //R:
            //add,sub,xor,or,and,sll,slt,sltu,srl,sra,mul,div,divu,rem,remu
            7'b0110011:begin
                imm_calc=0;
                st_rd=STRD_DATA_OUT;
                
                fun10={in[31:25],in[14:12]};
                imm=0;
            end
            //addw,subw,sllw,srlw,sraw,mulw,divw,divuw,remw,remuw
            7'b0111011:begin
                imm_calc=0;
                st_rd=STRD_DATA_OUT;
                
                fun10={in[31:25],in[14:12]};
                width=1'b1;
                imm=0;
            end

            //I:
            //addi,xori,ori,andi,slti,sltiu,slli,srli,srai,
            7'b0010011:begin
                imm_calc=1;
                st_rd=STRD_DATA_OUT;
                
                imm={{(64-12){in[31]}},in[31:20]};
                fun10={(in[14:12]==3'b101)?{in[31:26],1'b0}:7'b0,in[14:12]};
            end
            //addiw,slliw,srliw,sraiw
            7'b0011011:begin
                imm_calc=1;
                st_rd=STRD_DATA_OUT;
                
                imm={{(64-12){in[31]}},in[31:20]};
                fun10={(in[14:12]==3'b101)?{in[31:26],1'b0}:7'b0,in[14:12]};
                width=1'b1;
            end
            //ld,lb,lh,lw,lbu,lhu,lwu
            7'b0000011:begin
                mem_read=1;
                mem_write=0;
                imm_calc=1;
                st_rd=STRD_MEM;

                imm={{(64-12){in[31]}},in[31:20]};
            end

            //jalr
            7'b1100111:begin
                imm_calc=1;
                st_rd=STRD_PC_4;
                st_pc=STPC_DATAOUT;

                imm={{(64-12){in[31]}},in[31:20]};
            end

            //S:
            //sd,sb,sh,sw
            7'b0100011:begin
                mem_read=0;
                mem_write=1;
                imm_calc=1;
                st_rd=STRD_DISABLED;

                imm={{(64-12){in[31]}},in[31:25],in[11:7]};
            end

            //B:
            //beq,bne,blt,bge,bltu,bgeu
            7'b1100011:begin
                imm_calc=0;
                st_rd=STRD_DISABLED;
                st_pc=STPC_WAIT;
                
                case(in[14:13])
                    2'b00:fun10=10'b0100000000;
                    2'b10:fun10=10'b0000000010;
                    2'b11:fun10=10'b0000000011;
                    default:fun10=10'b010000000;
                endcase
                imm={{(64-13){in[31]}},in[31],in[7],in[30:25],in[11:8],1'b0};
            end

            //U:
            //lui
            7'b0110111:begin
                imm_calc=1;
                st_rd=STRD_IMM;

                imm={{(64-32){in[31]}},in[31:12],12'b0};
            end
            //auipc
            7'b0010111:begin
                imm_calc=1;
                st_rd=STRD_IMM_PC;
                imm={{(64-32){in[31]}},in[31:12],12'b0};
            end

            //J:
            //jal
            7'b1101111:begin
                imm_calc=1;
                st_rd=STRD_PC_4;
                st_pc=STPC_IMM;

                imm={{(64-21){in[31]}},in[31],in[19:12],in[20],in[30:21],1'b0};
            end

            //csrrw,csrrs,csrrc,csrrwi,csrrsi,csrrci,mret,ecall
            7'b1110011:begin
                if(in[14:12]==3'b0)begin
                    case(in)
                        32'b0000000_00000_00000_000_00000_1110011://ecall
                        begin
                            imm_calc=0;
                            imm=0;
                            st_rd=STRD_DISABLED;
                            st_csr=STCSR_ERROR;
                            case(mode)
                                2'b00: code=64'b1000;
                                2'b01: code=64'b1001;
                                2'b11: code=64'b1011;
                                2'b10: code=64'b1010;//default
                            endcase
                        end
                        32'b0011000_00010_00000_000_00000_1110011://mret
                        begin
                            imm_calc=0;
                            imm=0;
                            st_rd=STRD_DISABLED;
                            st_csr=STCSR_MRET;
                        end
                        default://sfence.vma?
                        begin
                            imm_calc=0;
                            imm=0;
                            st_rd=STRD_DISABLED;
                            st_csr=STCSR_SFENCE;
                            code=0;
                        end
                    endcase
                end
                else begin
                    imm_calc=0;
                    st_rd=STRD_CSR;
                    csr_rd=in[31:20];
                    case(in[14])
                        1'b0:st_csr=STCSR_RS1;
                        1'b1:st_csr=STCSR_IMM;
                    endcase
                    
                    imm={{(64-5){1'b0}},in[19:15]};
                end
            end

            default:begin
                imm_calc=0;
                st_rd=STRD_DISABLED;
                st_csr=STCSR_ERROR;
                code=64'b0010;
                imm=0;
            end
        endcase
    end
endmodule

`endif 