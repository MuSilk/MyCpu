`ifndef MEMORY_SV
`define MEMORY_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "src/memory/memsetdata.sv"
`endif

module memory import common::*;(
    input clk,
    input mem_t mem_now,
    input wri_t wri_now,
    input logic[2:0] fun3,
    input func_addr_t mem_pc,
    input logic mem_nop,
    input logic update,

    input dbus_resp_t dresp,
    input logic daddr_trans_finished,

    output dbus_req_t dreq,
    output mem_t mem_nxt,
    output wri_t wri_nxt,
    output logic[2:0] wri_fun3,
    output logic finished,
    output func_addr_t wri_pc
);
    data_data_t mem_data;
    data_data_t raw_data;
    
    MemSetData MemSetData(
        .mem_read   (mem_now.mem_read),
        .mem_write  (mem_now.mem_write),
        .raw_data   (raw_data),
        .data_addr  (mem_now.data_addr),
        .write_data (mem_now.write_data),
        .fun3       (fun3),
        .dreq       (dreq),
        .mem_data   (mem_data)
    );

    logic mem_op;
    assign mem_op=mem_now.mem_read||mem_now.mem_write;

    logic mem_fetched;
    assign finished=mem_fetched||mem_nop||!mem_op;

    assign dreq.valid=!mem_fetched&&!mem_nop&&mem_op;

    always@(posedge clk)begin
        if(dresp.data_ok&&!update&&daddr_trans_finished)begin
            raw_data<=dresp.data;
            mem_fetched<=1;
        end

        if(update)begin
            mem_fetched<=0;
            wri_fun3=fun3;

            if(!mem_nop)begin
                mem_nxt<=mem_now;
                wri_pc<=mem_pc;
                wri_nxt         <=wri_now;

                if(mem_now.mem_read)wri_nxt.write_data<=mem_data;
            end
        end
    end

endmodule

`endif 