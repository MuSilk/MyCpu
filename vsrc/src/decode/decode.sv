`ifndef DECODE_SV
`define DECODE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "src/decode/Controller.sv"
`endif

module decode import common::*;(
    input logic clk,
    input func_data_t in,
    input func_addr_t dec_pc,
    input logic update,
    input logic fet_dec_nop,
    input logic fet_block,
    input logic fet_clear,
    input u2 mode,

    output exe_t exe_now,
    output fet_t fet_nxt,
    output exe_t exe_nxt,
    output mem_t mem_nxt,
    output wri_t wri_nxt,

    output logic[2:0] fun3,
    output data_data_t imm,
    output func_addr_t exe_pc,
    output creg_addr_t rd_prev0,rd_prev1,
    output func_addr_t pc_prev0,pc_prev1,
    output logic need_wait0,need_wait1
);
    mem_t mem_now;
    wri_t wri_now;
    state_pc st_pc;
    logic[2:0] fun3_now;
    data_data_t imm_now;
    Controller Controller(
        .in             (in),
        .mode           (mode),
        .fun3           (fun3_now),
        .fun10          (exe_now.fun10),
        .width          (exe_now.width),
        .rs1            (exe_now.rs1),
        .rs2            (exe_now.rs2),
        .rd             (wri_now.rd),
        .csr_rd         (wri_now.csr_rd),
        .imm            (imm_now),
        .imm_calc       (exe_now.imm_calc),
        .mem_read       (mem_now.mem_read),
        .mem_write      (mem_now.mem_write),
        .st_rd          (wri_now.st_rd),
        .st_csr         (wri_now.st_csr),
        .code           (wri_now.code),
        .st_pc          (st_pc)
    );

    logic dec_nop;
    assign dec_nop=fet_dec_nop|fet_clear;

    always@(posedge clk)begin

        if(update)begin   

            if(!fet_block)begin
                if(fet_clear)begin
                    rd_prev0  <=0; rd_prev1  <=0;
                    need_wait0<=0; need_wait1<=0;
                    pc_prev0  <=0; pc_prev1  <=0;
                end
                else begin
                    rd_prev0      <=wri_now.rd;   rd_prev1      <=rd_prev0;
                    pc_prev0      <=dec_pc;       pc_prev1      <=pc_prev0;
                    need_wait0   <=wri_now.st_rd!=STRD_DISABLED&&wri_now.rd!=5'b0;
                    need_wait1   <=need_wait0;
                end
            end

            if(!dec_nop)begin
                fet_nxt.st_pc<=st_pc;
                fet_nxt.pc_nxt<=dec_pc+imm_now;

                exe_pc<=dec_pc;
                exe_nxt<=exe_now;
                mem_nxt<=mem_now;

                wri_nxt<=wri_now;
                wri_nxt.instr<=in;
                wri_nxt.csr_write_date<=imm_now;

                imm<=imm_now;
                fun3<=fun3_now;
            
                case(wri_now.st_rd)
                    STRD_IMM:wri_nxt.write_data<=imm_now;
                    STRD_IMM_PC:wri_nxt.write_data<=imm_now+dec_pc;
                    STRD_PC_4:wri_nxt.write_data<=dec_pc+4;
                    default: wri_nxt.write_data<=wri_now.write_data;
                endcase
                
            end
        end
    end
    
endmodule

`endif