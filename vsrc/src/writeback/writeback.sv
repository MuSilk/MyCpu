`ifndef WRITEBACK_SV
`define WRITEBACK_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "src/writeback/RegFile.sv"
`include "src/writeback/CSRs.sv"
`endif

module writeback import common::*;(
    input logic clk,
    input logic rst,
    input exe_t exe_st,
    input logic[2:0] fun3,
    input wri_t wri_now,
    input func_addr_t wri_pc,
    input logic wri_nop,
    input logic update,

    output data_data_t q1,
    output data_data_t q2,
    output func_addr_t wri_finishedpc,
    output logic csr_fet_clear,
    output func_addr_t csr_pc_nxt,
    output logic[63:0] OutRegs[31:0],
    output csr_regs_t CSRs_now,
    output csr_regs_t OutCSRs,
    output u2 mode_now,
    output u2 Outmode
);
    logic en;
    always_comb begin
        if(wri_nop||wri_now.st_rd==STRD_DISABLED||!update)en=0;
        else en=1;
    end

    logic csr_en;
    always_comb begin
        if(wri_nop||wri_now.st_csr==STCSR_DISABLED||!update)csr_en=0;
        else csr_en=1;
    end

    always_comb begin
        if(!wri_nop&&wri_now.st_csr!=STCSR_DISABLED)csr_fet_clear=1;
        else csr_fet_clear=0;

        if(wri_now.st_csr==STCSR_MRET)csr_pc_nxt=OutCSRs.mepc;
        else if(wri_now.st_csr==STCSR_ERROR)csr_pc_nxt=OutCSRs.mtvec;
        else csr_pc_nxt=wri_pc+4;
    end

    data_data_t csr_value;
    data_data_t write_data;
    assign write_data=wri_now.st_rd==STRD_CSR?csr_value:wri_now.write_data;


    RegFile RegFile(
        .en         (en),
        .clk        (clk),
        .in         (write_data),
        .rs1        (exe_st.rs1),
        .rs2        (exe_st.rs2),
        .rd         (wri_now.rd),
        .q1         (q1),
        .q2         (q2),
        .OutRegs    (OutRegs)
    );

    CSRs CSRs(
        .clk        (clk),
        .rst        (rst),
        .en         (csr_en),
        .st_csr     (wri_now.st_csr),
        .pc         (wri_pc),
        .code       (wri_now.code),
        .csr        (wri_now.csr_rd),
        .write_data (wri_now.csr_write_date),
        .fun3       (fun3),

        .csr_value  (csr_value),
        .CSRs_now   (CSRs_now),
        .CSRs_next  (OutCSRs),
        .mode_now   (mode_now),
        .mode_next  (Outmode)
    );

    always@(posedge clk)begin
        if(!wri_nop&&update)wri_finishedpc<=wri_pc;
    end
endmodule

`endif 