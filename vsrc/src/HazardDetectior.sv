`ifndef HAZARDDETECTIOR_SV
`define HAZARDDETECTIOR_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

module HazardDetectior import common::*;(
    input logic clk,rst,
    input logic update,
    input func_addr_t wri_finishedpc,
    input func_addr_t exe_finishedpc,

    input func_addr_t pc_prev0,pc_prev1,
    input creg_addr_t rd_prev0,rd_prev1,
    input logic       need_wait0,need_wait1,
    input exe_t exe_st,
    input logic fet_clear,
    input logic csr_fet_clear,

    output logic fet_block,
    output logic dec_nop,
    output logic exe_nop,
    output logic mem_nop,
    output logic wri_nop,

    input u2 mode,
    input satp_t satp,
    input ibus_req_t ireq_in,
    input dbus_req_t dreq_in,
    input dbus_resp_t dresp,

    output logic iaddr_trans_finished,
    output logic daddr_trans_finished,
    output ibus_req_t  ireq,
	output dbus_req_t  dreq
);

    logic wait_wri0,wait_wri1;
    assign wait_wri0=need_wait0&&(rd_prev0==exe_st.rs1||rd_prev0==exe_st.rs2);
    assign wait_wri1=need_wait1&&(rd_prev1==exe_st.rs1||rd_prev1==exe_st.rs2);

    always_comb begin
        if(fet_clear|csr_fet_clear)fet_block=0;
        else if(wait_wri0)begin
            if(wri_finishedpc!=pc_prev0)fet_block=1;
            else fet_block=0;
        end
        else if(wait_wri1)begin
            if(wri_finishedpc!=pc_prev1)fet_block=1;
            else fet_block=0;
        end
        else fet_block=0;
    end

    always@(posedge clk)begin
        if(rst) begin
			dec_nop<=1;
			exe_nop<=1;
			mem_nop<=1;
			wri_nop<=1;
	    end
        else begin
            if(update)begin
                mem_nop<=exe_nop;
                wri_nop<=mem_nop;
                if(csr_fet_clear)begin
                    dec_nop<=1;
                    exe_nop<=1;
                    mem_nop<=1;
                    wri_nop<=1;
                end
                else if(fet_clear)begin
                    dec_nop<=1;
                    exe_nop<=1;
                end
                else if(wait_wri0)begin
                    if(wri_finishedpc!=pc_prev0)begin
                        dec_nop<=1;
                        exe_nop<=1;
                    end
                    else begin
                        dec_nop<=0;
                        exe_nop<=0;
                    end
                end
                else if(wait_wri1)begin
                    if(wri_finishedpc!=pc_prev1)begin
                        dec_nop<=1;
                        exe_nop<=1;
                    end
                    else begin
                        dec_nop<=0;
                        exe_nop<=0;
                    end
                end
                else begin
                    dec_nop<=fet_block;
                    exe_nop<=dec_nop;
                end
            end
        end        
    end

    u2 iaddr_trans_st,daddr_trans_st;
    func_addr_t iphys_addr,dphys_addr;
    pte_t pte;

    always@(posedge clk)begin
        if(update)begin
            iaddr_trans_st=2'b00;
            daddr_trans_st=2'b00;
        end
        else if(dreq_in.valid&&daddr_trans_st!=2'b11)begin
            if(dresp.data_ok)begin
                pte=dresp.data;
                daddr_trans_st+=1;
            end
        end
        else if(ireq_in.valid&&iaddr_trans_st!=2'b11)begin
            if(dresp.data_ok)begin
                pte=dresp.data;
                iaddr_trans_st+=1;
            end
        end
    end

    always_comb begin
        case(daddr_trans_st)
            2'b00:dphys_addr={8'b0,satp.ppn,dreq_in.addr[38:30],3'b0};
            2'b01:dphys_addr={8'b0,pte.ppn, dreq_in.addr[29:21],3'b0};
            2'b10:dphys_addr={8'b0,pte.ppn, dreq_in.addr[20:12],3'b0};
            2'b11:dphys_addr={8'b0,pte.ppn, dreq_in.addr[11:0]};
        endcase
        case(iaddr_trans_st)
            2'b00:iphys_addr={8'b0,satp.ppn,ireq_in.addr[38:30],3'b0};
            2'b01:iphys_addr={8'b0,pte.ppn, ireq_in.addr[29:21],3'b0};
            2'b10:iphys_addr={8'b0,pte.ppn, ireq_in.addr[20:12],3'b0};
            2'b11:iphys_addr={8'b0,pte.ppn, ireq_in.addr[11:0]};
        endcase
    end

    always_comb begin
        // if(satp.mode==4'b0000)begin
        if(satp.mode==4'b0000||mode==2'b11)begin
            ireq=ireq_in;
            dreq=dreq_in;
            if(dreq_in.valid) begin
                ireq.valid=0;
            end
            iaddr_trans_finished=1;
            daddr_trans_finished=1;
        end
        else begin
            ireq=ireq_in;ireq.valid=0;
            dreq=dreq_in;dreq.valid=0;
            iaddr_trans_finished=0;
            daddr_trans_finished=0;
            if(dreq_in.valid)begin
                if(daddr_trans_st==2'b11)begin
                    dreq.addr=dphys_addr;
                    dreq.valid=1;
                    daddr_trans_finished=1;
                end
                else begin
                    dreq.addr=dphys_addr;
                    dreq.valid=1;
                    dreq.strobe=8'b0;
                    dreq.size=MSIZE8;
                end
            end
            else if(ireq_in.valid)begin
                if(iaddr_trans_st==2'b11)begin
                    ireq.addr=iphys_addr;
                    ireq.valid=1;
                    iaddr_trans_finished=1;
                end
                else begin
                    dreq.addr=iphys_addr;
                    dreq.valid=1;
                    dreq.strobe=8'b0;
                    dreq.size=MSIZE8;
                end
            end
        end
    end
endmodule

`endif 