`ifndef MUX2_SV
`define MUX2_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

module Mux2 import common::*;(
    input en,
    input data_data_t a,b,
    output data_data_t out
);
    assign out=en?a:b;
endmodule

`endif 