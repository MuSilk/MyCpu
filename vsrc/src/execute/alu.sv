`ifndef ALU_SV
`define ALU_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "src/execute/muldiv.sv"
`endif

module ALU import common::*;(
    input logic clk,

    input data_data_t A,B,
    input logic[9:0] fun10,
    input logic width,
    output data_data_t out,
    output logic finished,

    input logic[6:0] cnt,
    input logic reseted
);
    data_data_t realA,realB,ans,realBl;
    logic[5:0] shiftB;
    assign realA=width?{A[31:0],32'b0}:A;
    assign realB=width?{B[31:0],32'b0}:B;
    assign shiftB=width?{1'b0,B[4:0]}:B[5:0];

    data_data_t md_out,rem;
    logic md_finish,div_sign,mul_div;
    assign div_sign=!fun10[0];
    assign mul_div=fun10[2:0]!=3'b0;
    muldiv muldiv(
        .A(realA),
        .B(realB),
        .sign(div_sign),
        .mul_div(mul_div),
        .width(width),
        .out(md_out),
        .r(rem),
        .clk(clk),
        .finished(md_finish),
        .cnt(cnt),
        .reseted(reseted)
    );

    always_comb begin 
        case(fun10)
            10'b0000000000:begin
                ans=realA+realB;
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0100000000:begin
                ans=realA-realB;
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000000100:begin
                ans=realA^realB;
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000000110:begin
                ans=realA|realB;
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000000111:begin
                ans=realA&realB;
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000000001:begin
                ans=realA<<shiftB;
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000000101:begin
                ans=$unsigned(realA)>>shiftB; 
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0100000101:begin 
                ans=$signed(realA)>>>shiftB;  
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000000010:begin
                ans={63'b0,$signed(realA)<$signed(realB)};  
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000000011:begin
                ans={63'b0,$unsigned(realA)<$unsigned(realB)};
                finished=1;
                out=width?{{32{ans[63]}},ans[63:32]}:ans;
            end
            10'b0000001000:begin
                ans=md_out;
                finished=md_finish;
                out=width?{{32{ans[31]}},ans[31:0]}:ans;
            end
            10'b0000001100:begin
                ans=md_out;
                finished=md_finish;
                out=width?{{32{ans[31]}},ans[31:0]}:ans;
            end
            10'b0000001110:begin
                ans=rem;
                finished=md_finish;
                out=width?{{32{ans[31]}},ans[31:0]}:ans;
            end
            10'b0000001111:begin
                ans=rem;
                finished=md_finish;
                out=width?{{32{ans[31]}},ans[31:0]}:ans;
            end
            10'b0000001101:begin
                ans=md_out;
                finished=md_finish;
                out=width?{{32{ans[31]}},ans[31:0]}:ans;
            end
            default:begin
                ans=64'b0;
                finished=1;
                out=64'b0;
            end
        endcase
    end
endmodule

`endif