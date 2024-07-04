`ifndef REGFILE_SV
`define REGFILE_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

module RegFile import common::*;(
    input logic en,clk,
    input data_data_t in,
    input creg_addr_t rs1,rs2,rd,
    output data_data_t q1,q2,
    output logic [63:0] OutRegs[31:0]
);
    logic [63:0] Regs[31:0];
    assign q1=Regs[rs1];
    assign q2=Regs[rs2];

    always@(posedge clk)begin
        if(en&&rd!=5'b0)Regs[rd]<=in;
    end
    
    always_comb begin
        OutRegs=Regs;
        if(en&&rd!=5'b0)OutRegs[rd]=in;
    end
    
endmodule

`endif 