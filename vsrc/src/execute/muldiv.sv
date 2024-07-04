`ifndef MULDIV_SV
`define MULDIV_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif


module muldiv import common::*;(
    input data_data_t A,B,
    input logic sign,
    input logic mul_div,//0:1
    input logic width,
    output data_data_t out,r,

    input logic clk,
    output logic finished,

    input logic[6:0] cnt,
    input logic reseted

);
    logic outsign;
    data_data_t absA,absB;

    assign outsign=sign?A[63]^B[63]:0;
    assign absA=sign&A[63]?-A:A;
    assign absB=sign&B[63]?-B:B;

    logic[128:0] R;
    logic[64:0] D;

    logic muldivfinished;
    assign muldivfinished=width?cnt[5]:cnt[6];

    always @(posedge clk) begin
        if(!reseted)begin
            if(mul_div)begin
                R={65'b0,absA}<<1;
                D=width?{33'b0,absB[63:32]}:{1'b0,absB};
            end
            else begin
                R={65'b0,A}<<1;
                D=(width?{1'b0,{32{B[63]}},B[63:32]}:{1'b0,B})-64'b1;
            end
        end
        else if(!muldivfinished)begin
            if(mul_div) begin
                R[128:64]=R[128:64]-D;
                if(R[128])begin
                    R[128:64]=R[128:64]+D;
                    R=R<<1;
                end  
                else R=(R<<1)|1;
            end
            else begin
                if(R[64])R[128:64]=R[128:64]+D;
                R=R<<1;
            end
        end
    end

    always_comb begin
        if(mul_div) begin
            if(B==64'b0)begin 
                out={64{1'b1}};
                r=width?{{32{A[63]}},A[63:32]}:A;
                finished=1; 
            end
            else if(absA<absB)begin 
                out={64{1'b0}}; 
                r=width?{{32{A[63]}},A[63:32]}:A;
                finished=1; 
            end
            else begin 
                out=outsign?-R[63:0]:R[63:0]; 
                r=A[63]&&sign?-R[128:65]:R[128:65];
                finished=muldivfinished; 
            end;
        end
        else begin
            if(A==64'b0||B==64'b0)begin
                out=64'b0;
                r=64'b0;
                finished=1;
            end
            else begin
                out=R[128:65];
                r=64'b0;
                finished=muldivfinished;
            end
        end
    end
endmodule

`endif