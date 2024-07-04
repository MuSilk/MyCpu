`ifndef FETCH_SV
`define FETCH_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

module fetch import common::*;(
    input logic clk,rst,
    input fet_t fet_now,
    input logic iaddr_trans_finished,
    input ibus_resp_t iresp,
    input logic update,
    input logic fet_block,
    input logic fet_clear,
    input logic csr_fet_clear,
    input func_addr_t csr_pc_nxt,

    output ibus_req_t ireq,
    output func_data_t func,
    output func_addr_t dec_pc,
    output logic finished
);

    func_addr_t pc_now;

    logic func_fetched;
    assign finished=func_fetched||fet_block;

    assign ireq.addr=pc_now;
    assign ireq.valid=!func_fetched&&!fet_block;

    func_data_t func_tmp;

    always@(posedge clk)begin
        if(iresp.data_ok&&!update&&iaddr_trans_finished) begin
            func_tmp<=iresp.data;
            func_fetched<=1;
        end

        if(rst)pc_now<=PCINIT;

        if(update)begin
            
            func_fetched<=0; 
            if(csr_fet_clear)begin
                dec_pc<=64'b0;
                pc_now<=csr_pc_nxt;
                func<=32'b0;
            end
            else if(fet_clear)begin
                dec_pc<=64'b0;
                pc_now<=fet_now.pc_nxt;
                func<=32'b0;
            end
            else begin
                if(!fet_block)begin
                    dec_pc<=pc_now;
                    pc_now<=pc_now+4;
                    func<=func_tmp;
                end
            end
        end
    end
endmodule

`endif 