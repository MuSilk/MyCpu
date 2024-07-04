`ifndef CSRS_SV
`define CSRS_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

module CSRs import common::*;(
    input logic clk,rst,
    input logic en,

    input state_csr st_csr,
    input csr_addr_t csr,
    input func_addr_t pc,
    input data_data_t code,
    input logic[2:0] fun3,
    input data_data_t write_data,
    output data_data_t csr_value,

    output csr_regs_t CSRs_now,
    output csr_regs_t CSRs_next,
    output u2 mode_now,
    output u2 mode_next
);
    csr_regs_t CSRs;
    u2 mode;

    assign mode_now=mode;
    assign CSRs_now=CSRs;

    always@(posedge clk)begin
        if(rst)begin
            CSRs.mie<=0;
            CSRs.mip<=0;
            CSRs.mtvec<=0;
            CSRs.mstatus<=0;
            CSRs.mscratch<=0;
            CSRs.mepc<=0;
            CSRs.mcause<=0;
            CSRs.mcycle<=0;
            CSRs.mtval<=0;
            CSRs.satp<=0;
            CSRs.mcause[1]<=1'b1;
            CSRs.mepc[31]<=1'b1;
            mode<=2'b11;
        end
        else if(en)begin
            CSRs<=CSRs_next;
            mode<=mode_next;
        end
    end

    data_data_t real_write_data;

    always_comb begin
        case(fun3[1:0])
            2'b01:real_write_data=write_data;
            2'b10:real_write_data=write_data|csr_value;
            2'b11:real_write_data=~write_data&csr_value;
            default:real_write_data=write_data;
        endcase
    end


    always_comb begin
        case(csr)
            CSR_MIE:        csr_value=CSRs.mie;
            CSR_MIP:        csr_value=CSRs.mip;
            CSR_MTVEC:      csr_value=CSRs.mtvec;
            CSR_MSTATUS:    csr_value=CSRs.mstatus;
            CSR_MSCRATCH:   csr_value=CSRs.mscratch;
            CSR_MEPC:       csr_value=CSRs.mepc;
            CSR_MCAUSE:     csr_value=CSRs.mcause;
            CSR_MCYCLE:     csr_value=CSRs.mcycle;
            CSR_MTVAL:      csr_value=CSRs.mtval;
            CSR_SATP:       csr_value=CSRs.satp;
            default:        csr_value=0; 
        endcase
    end

    always_comb begin
        CSRs_next=CSRs;
        mode_next=mode;
        if(st_csr==STCSR_MRET)begin
            CSRs_next.mstatus.mie   =CSRs.mstatus.mpie;
            CSRs_next.mstatus.mpie  =1'b1;
            CSRs_next.mstatus.mpp   =2'b0;
            mode_next               =CSRs.mstatus.mpp;
        end
        else if(st_csr==STCSR_ERROR)begin
            CSRs_next.mepc          =pc;
            CSRs_next.mcause        ={1'b0,code[62:0]};
            CSRs_next.mstatus.mpie  =CSRs.mstatus.mie;
            CSRs_next.mstatus.mie   =0;
            CSRs_next.mstatus.mpp   =mode;
            mode_next               =2'b11;
        end
        else begin
            case(csr)
                CSR_MIE:        CSRs_next.mie       =real_write_data;
                CSR_MIP:        CSRs_next.mip       =real_write_data;
                CSR_MTVEC:      CSRs_next.mtvec     =real_write_data;
                CSR_MSTATUS:    CSRs_next.mstatus   =real_write_data;
                CSR_MSCRATCH:   CSRs_next.mscratch  =real_write_data;
                CSR_MEPC:       CSRs_next.mepc      =real_write_data;
                CSR_MCAUSE:     CSRs_next.mcause    =real_write_data;
                CSR_MCYCLE:     CSRs_next.mcycle    =real_write_data;
                CSR_MTVAL:      CSRs_next.mtval     =real_write_data;
                CSR_SATP:       CSRs_next.satp      =real_write_data;
                default:;
            endcase
        end 
    end   
endmodule

`endif 