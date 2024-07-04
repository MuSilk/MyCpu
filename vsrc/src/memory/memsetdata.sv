`ifndef MEMSETDATA_SV
`define MEMSETDATA_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

module MemSetData import common::*;(
    input logic mem_read,mem_write,
    input data_data_t raw_data,

    input data_addr_t data_addr,
    input data_data_t write_data,

    input logic[2:0] fun3,

	output dbus_req_t  dreq,

    output data_data_t mem_data
);

    assign dreq.addr=data_addr;

    always_comb begin
        case(fun3)
            3'b000:begin//b
                dreq.size=MSIZE1; 
                case(data_addr[2:0])
                    3'b000:begin 
                        dreq.strobe=mem_write?8'b00000001:8'b0; 
                        dreq.data={56'b0,write_data[7:0]};
                        mem_data={{56{raw_data[7]}},raw_data[7:0]}; 
                    end     
                    3'b001:begin
                        dreq.strobe=mem_write?8'b00000010:8'b0; 
                        dreq.data={48'b0,write_data[7:0],8'b0};
                        mem_data={{56{raw_data[15]}},raw_data[15:8]}; 
                    end     
                    3'b010:begin
                        dreq.strobe=mem_write?8'b00000100:8'b0; 
                        dreq.data={40'b0,write_data[7:0],16'b0};
                        mem_data={{56{raw_data[23]}},raw_data[23:16]}; 
                    end 
                    3'b011:begin
                        dreq.strobe=mem_write?8'b00001000:8'b0; 
                        dreq.data={32'b0,write_data[7:0],24'b0};
                        mem_data={{56{raw_data[31]}},raw_data[31:24]}; 
                    end 
                    3'b100:begin
                        dreq.strobe=mem_write?8'b00010000:8'b0; 
                        dreq.data={24'b0,write_data[7:0],32'b0};
                        mem_data={{56{raw_data[39]}},raw_data[39:32]}; 
                    end 
                    3'b101:begin
                        dreq.strobe=mem_write?8'b00100000:8'b0; 
                        dreq.data={16'b0,write_data[7:0],40'b0};
                        mem_data={{56{raw_data[47]}},raw_data[47:40]}; 
                    end   
                    3'b110:begin
                        dreq.strobe=mem_write?8'b01000000:8'b0; 
                        dreq.data={8'b0,write_data[7:0],48'b0};
                        mem_data={{56{raw_data[55]}},raw_data[55:48]}; 
                    end  
                    3'b111:begin
                        dreq.strobe=mem_write?8'b10000000:8'b0; 
                        dreq.data={write_data[7:0],56'b0};
                        mem_data={{56{raw_data[63]}},raw_data[63:56]}; 
                    end 
                endcase
                end
            3'b001:begin//h
                dreq.size=MSIZE2;
                case(data_addr[2:1])
                    2'b00:begin 
                        dreq.strobe=mem_write?8'b00000011:8'b0; 
                        dreq.data={48'b0,write_data[15:0]};
                        mem_data={{48{raw_data[15]}},raw_data[15:0]}; 
                    end       
                    2'b01:begin
                        dreq.strobe=mem_write?8'b00001100:8'b0; 
                        dreq.data={32'b0,write_data[15:0],16'b0};
                        mem_data={{48{raw_data[31]}},raw_data[31:16]}; 
                    end 
                    2'b10:begin
                        dreq.strobe=mem_write?8'b00110000:8'b0; 
                        dreq.data={16'b0,write_data[15:0],32'b0};
                        mem_data={{48{raw_data[47]}},raw_data[47:32]}; 
                    end 
                    2'b11:begin
                        dreq.strobe=mem_write?8'b11000000:8'b0; 
                        dreq.data={write_data[15:0],48'b0};
                        mem_data={{48{raw_data[63]}},raw_data[63:48]}; 
                    end  
                endcase
                end
            3'b010:begin//w
                dreq.size=MSIZE4;
                case(data_addr[2])
                    1'b0:begin 
                        dreq.strobe=mem_write?8'b00001111:8'b0; 
                        dreq.data={32'b0,write_data[31:0]};
                        mem_data={{32{raw_data[31]}},raw_data[31:0]}; 
                    end       
                    1'b1:begin
                        dreq.strobe=mem_write?8'b11110000:8'b0; 
                        dreq.data={write_data[31:0],32'b0};
                        mem_data={{32{raw_data[63]}},raw_data[63:32]}; 
                    end 
                endcase
                end
            3'b011:begin //d
                dreq.size=MSIZE8; 
                dreq.data=write_data;
                dreq.strobe=mem_write?8'b11111111:8'b0;
                mem_data=raw_data;   
                end
            3'b100:begin//lbu
                dreq.size=MSIZE1;
                case(data_addr[2:0])
                    3'b000:begin 
                        dreq.strobe=mem_write?8'b00000001:8'b0; 
                        dreq.data={56'b0,write_data[7:0]};
                        mem_data={56'b0,raw_data[7:0]}; 
                    end     
                    3'b001:begin
                        dreq.strobe=mem_write?8'b00000010:8'b0; 
                        dreq.data={48'b0,write_data[7:0],8'b0};
                        mem_data={56'b0,raw_data[15:8]}; 
                    end     
                    3'b010:begin
                        dreq.strobe=mem_write?8'b00000100:8'b0; 
                        dreq.data={40'b0,write_data[7:0],16'b0};
                        mem_data={56'b0,raw_data[23:16]}; 
                    end 
                    3'b011:begin
                        dreq.strobe=mem_write?8'b00001000:8'b0; 
                        dreq.data={32'b0,write_data[7:0],24'b0};
                        mem_data={56'b0,raw_data[31:24]}; 
                    end 
                    3'b100:begin
                        dreq.strobe=mem_write?8'b00010000:8'b0; 
                        dreq.data={24'b0,write_data[7:0],32'b0};
                        mem_data={56'b0,raw_data[39:32]}; 
                    end 
                    3'b101:begin
                        dreq.strobe=mem_write?8'b00100000:8'b0; 
                        dreq.data={16'b0,write_data[7:0],40'b0};
                        mem_data={56'b0,raw_data[47:40]}; 
                    end   
                    3'b110:begin
                        dreq.strobe=mem_write?8'b01000000:8'b0; 
                        dreq.data={8'b0,write_data[7:0],48'b0};
                        mem_data={56'b0,raw_data[55:48]}; 
                    end  
                    3'b111:begin
                        dreq.strobe=mem_write?8'b10000000:8'b0; 
                        dreq.data={write_data[7:0],56'b0};
                        mem_data={56'b0,raw_data[63:56]}; 
                    end 
                endcase
                end
            3'b101:begin//lhu
                dreq.size=MSIZE2;
                case(data_addr[2:1])
                    2'b00:begin 
                        dreq.strobe=mem_write?8'b00000011:8'b0; 
                        dreq.data={48'b0,write_data[15:0]};
                        mem_data={48'b0,raw_data[15:0]}; 
                    end       
                    2'b01:begin
                        dreq.strobe=mem_write?8'b00001100:8'b0; 
                        dreq.data={32'b0,write_data[15:0],16'b0};
                        mem_data={48'b0,raw_data[31:16]}; 
                    end 
                    2'b10:begin
                        dreq.strobe=mem_write?8'b00110000:8'b0; 
                        dreq.data={16'b0,write_data[15:0],32'b0};
                        mem_data={48'b0,raw_data[47:32]}; 
                    end 
                    2'b11:begin
                        dreq.strobe=mem_write?8'b11000000:8'b0; 
                        dreq.data={write_data[15:0],48'b0};
                        mem_data={48'b0,raw_data[63:48]}; 
                    end  
                endcase
                end
            3'b110:begin//lwu
                dreq.size=MSIZE4;
                case(data_addr[2])
                    1'b0:begin 
                        dreq.strobe=mem_write?8'b00001111:8'b0; 
                        dreq.data={32'b0,write_data[31:0]};
                        mem_data={32'b0,raw_data[31:0]}; 
                    end       
                    1'b1:begin
                        dreq.strobe=mem_write?8'b11110000:8'b0; 
                        dreq.data={write_data[31:0],32'b0};
                        mem_data={32'b0,raw_data[63:32]}; 
                    end 
                endcase
                end
            default:begin
                dreq.size=MSIZE8;
                dreq.data=64'b0;
                dreq.strobe=8'b0;
                mem_data=64'b0;  
                end
        endcase
    end

endmodule

`endif 