`ifndef EXECUTE_SV
`define EXECUTE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "src/execute/Mux2.sv"
`include "src/execute/alu.sv"
`endif

module execute import common::*;(
    input logic clk,

    input exe_t exe_now,
    input mem_t mem_now,
    input wri_t wri_now,
    input fet_t fet_now,
    input data_data_t valA,valB,valC,
    input logic exe_nop,
    input func_addr_t exe_pc,
    input logic[2:0] fun3,
    input logic update,
    
    output mem_t mem_nxt,
    output wri_t wri_nxt,
    output fet_t fet_nxt,
    output logic fet_clear,
    output logic[2:0] mem_fun3,
    
    output logic finished,
    output func_addr_t mem_pc
);
    data_data_t out;
    logic[6:0] cnt;
    logic reseted;

    data_data_t A,B;
    assign A=valA;
    Mux2 Mux2(
        .en(exe_now.imm_calc),
        .a(valC),
        .b(valB),
        .out(B)
    );

    logic alu_finished;

    ALU ALU(
        .clk(clk),
        .A(A),
        .B(B),
        .fun10(exe_now.fun10),
        .width(exe_now.width),
        .out(out),
        .finished(alu_finished),

        .cnt(cnt),
        .reseted(reseted)
    );

    logic ZF;
    assign ZF=(out==64'b0);

    state_pc st_pc;
    always_comb begin
        case(fun3)//fun3
            3'b000: st_pc=ZF?STPC_IMM:STPC_4; 
            3'b001: st_pc=ZF?STPC_4:STPC_IMM;
            3'b100: st_pc=out[0]?STPC_IMM:STPC_4;
            3'b101: st_pc=out[0]?STPC_4:STPC_IMM;
            3'b110: st_pc=out[0]?STPC_IMM:STPC_4;
            3'b111: st_pc=out[0]?STPC_4:STPC_IMM;
            default:st_pc=STPC_4;
        endcase
    end

    always_comb begin
        if(!exe_nop)begin
            if(fet_now.st_pc==STPC_WAIT&&st_pc==STPC_IMM)fet_clear=1;
            else begin
                case(fet_now.st_pc)
                    STPC_4:         fet_clear=0;
                    STPC_WAIT:      fet_clear=0;
                    STPC_DATAOUT:   fet_clear=1;
                    STPC_IMM:       fet_clear=1;
                endcase
            end
        end
        else fet_clear=0;
    end

    always_comb begin
        if(!exe_nop)begin
            if(fet_now.st_pc==STPC_WAIT)begin
                fet_nxt.pc_nxt=fet_now.pc_nxt;
                fet_nxt.st_pc=st_pc;
            end
            else begin
                fet_nxt.st_pc=fet_now.st_pc;
                if(fet_now.st_pc==STPC_DATAOUT)fet_nxt.pc_nxt=out&(~64'b1);
                else fet_nxt.pc_nxt=fet_now.pc_nxt;
            end
        end
        else begin
            fet_nxt.pc_nxt=64'b0;
            fet_nxt.st_pc=STPC_4;
        end
    end

    logic data_calculated;
    assign finished=data_calculated||exe_nop;

    always@(posedge clk)begin
        if(alu_finished)begin
            data_calculated<=1;
        end

        if(!finished)begin
            if(!reseted)reseted<=1;
            else cnt<=cnt+1;
        end


        if(update)begin
            data_calculated<=0;
            reseted<=0;
            cnt<=7'b0;

            if(!exe_nop)begin
                mem_pc<=exe_pc;

                mem_nxt.mem_read    <=mem_now.mem_read;
                mem_nxt.mem_write   <=mem_now.mem_write;
                mem_fun3            <=fun3;
                mem_nxt.write_data  <=valB;
                mem_nxt.data_addr   <=out;

                wri_nxt         <=wri_now;
                if(wri_now.st_rd==STRD_DATA_OUT)wri_nxt.write_data<=out;
                if(wri_now.st_csr==STCSR_RS1)wri_nxt.csr_write_date<=valA;

                mem_fun3<=fun3;
            end
            
        end
    end
endmodule

`endif