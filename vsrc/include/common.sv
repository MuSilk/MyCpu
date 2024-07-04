`ifndef COMMON_SV
`define COMMON_SV
`ifdef VERILATOR
`include "include/config.sv"
`endif

import config_pkg::*;
package common;
	// parameters
	import config_pkg::*;
	parameter XLEN = 64;
	parameter MXLEN = XLEN;
	parameter LINK_REG_ID = 1;
	parameter logic[63:0] PCINIT = 64'h00000000_80000000;

	// typedefs
	typedef logic[127:0] u128;
	typedef logic[63:0] u64;
	typedef logic[43:0] u44;
	typedef logic[31:0] u32;
    typedef logic[25:0] u26;
	typedef logic[19:0] u20;
	typedef logic[15:0] u16;
	typedef logic[14:0] u15;
	typedef logic[13:0] u14;
	typedef logic[12:0] u13;
	typedef logic[11:0] u12;
	typedef logic[10:0] u11;
	typedef logic[9:0]  u10;
	typedef logic[8:0]  u9;
	typedef logic[7:0]  u8;
	typedef logic[6:0]  u7;
	typedef logic[5:0]  u6;
	typedef logic[4:0]  u5;
	typedef logic[3:0]  u4;
	typedef logic[2:0]  u3;
	typedef logic[1:0]  u2;
	typedef logic 	    u1;

	typedef u5 creg_addr_t;
	// typedef u64 word_t;
	typedef u8 strobe_t;
	typedef u12 csr_addr_t;

/**
 * this file contains basic definitions and typedefs for general designs.
 */

// Vivado does not support string parameters.
`ifdef VERILATOR
`define STRING string
`else
`define STRING /* f**k vivado */
`endif

/**
 * Vivado does not support that members of a packed union
 * have different sizes. Therefore, we have to use struct
 * instead of union in Vivado.
 */
`ifdef VERILATOR
`define PACKED_UNION union packed
`else
`define PACKED_UNION struct packed
`endif

// simple compile-time assertion
`define ASSERTS(expr, message) \
    if (!(expr)) $error(message);
`define ASSERT(expr) `ASSERTS(expr, "Assertion failed.");
 
// to ignore some signals
`define UNUSED_OK(list) \
    logic _unused_ok = &{1'b0, {list}, 1'b0};

// basic data types
`define BITS(x) logic[(x)-1:0]

typedef int unsigned uint;

typedef logic     i1;
typedef `BITS(2)  i2;
typedef `BITS(3)  i3;
typedef `BITS(4)  i4;
typedef `BITS(5)  i5;
typedef `BITS(6)  i6;
typedef `BITS(7)  i7;
typedef `BITS(8)  i8;
typedef `BITS(9)  i9;
typedef `BITS(16) i16;
typedef `BITS(19) i19;
typedef `BITS(26) i26;
typedef `BITS(32) i32;
typedef `BITS(33) i33;
typedef `BITS(34) i34;
typedef `BITS(35) i35;
typedef `BITS(36) i36;
typedef `BITS(37) i37;
typedef `BITS(38) i38;
typedef `BITS(39) i39;
typedef `BITS(40) i40;
typedef `BITS(41) i41;
typedef `BITS(42) i42;
typedef `BITS(64) i64;
typedef `BITS(65) i65;
typedef `BITS(66) i66;
typedef `BITS(67) i67;
typedef `BITS(68) i68;

// for arithmetic overflow detection
typedef i65 arith_t;

// all addresses and words are 64-bit
typedef i64 addr_t;
typedef i64 word_t;

// number of bytes transferred in one memory r/w
typedef enum i3 {
    MSIZE1 = 3'b000,
    MSIZE2 = 3'b001,
    MSIZE4 = 3'b010,
    MSIZE8 = 3'b011
} msize_t;

// length of a burst transaction
// NOTE: WRAP mode in AXI3 only supports power-of-2 length.
typedef enum i8 {
    MLEN1  = 8'h00,
    MLEN2  = 8'h01,
    MLEN4  = 8'h03,
    MLEN8  = 8'h07,
    MLEN16 = 8'h0f,
    MLEN32 = 8'h1f,
    MLEN64 = 8'h3f,
    MLEN128 = 8'h7f,
    MLEN256 = 8'hff
} mlen_t;

parameter mlen_t AXI_BURST_LEN =AXI_BURST_NUM == 16 ? MLEN16 :
 							    AXI_BURST_NUM == 32 ? MLEN32 :
							    AXI_BURST_NUM == 64 ? MLEN64 :
							    AXI_BURST_NUM == 128 ? MLEN128 :
							    AXI_BURST_NUM == 256 ? MLEN256 : MLEN1;

/**
 * SOME NOTES ON BUSES
 *
 * bus naming convention:
 *  * CPU -> cache: xxx_req_t
 *  * cache -> CPU: xxx_resp_t
 *
 * in other words, caches are masters and CPU is the worker,
 * and CPU must wait for caches to complete memory transactions.
 * handshake signals are synchronized at positive edge of the clock.
 *
 * we guarantee that IBus is a subset of DBus, so that data cache can
 * be used as a instruction cache.
 * powerful students are free to design their own bus interfaces to
 * enable superscalar pipelines and other advanced techniques.
 *
 * a request on cache bus can bypass a cache instance if the address
 * is in uncached memory regions.
 */

/**
 * NOTE on strobe:
 *
 * strobe is used to mask out unused bytes in data, and
 * data are always assumed be placed at addresses aligned to
 * 4 bytes, no matter the lowest 2 bits of addr says.
 * for example, if you want to write one byte "0xcd" at 0x1f2,
 * the addr is "0x000001f2", but the data should be "0x00cd0000"
 * and the strobe should be "0b0100", rather than "0x000000cd"
 * and "0b0001".
 */

/**
 * data cache bus
 */
typedef struct packed {
    logic    valid;     // in request?
    addr_t   addr;      // target address
    msize_t  size;      // number of bytes
    strobe_t strobe;    // which bytes are enabled? set to zeros for read request
    word_t   data;      // the data to write
} dbus_req_t;

typedef struct packed {
    logic  addr_ok;     // is the address accepted by cache?
    logic  data_ok;     // is the field "data" valid?
    word_t data;        // the data read from cache
} dbus_resp_t;

/**
 * instruction cache bus
 * addr must be aligned to 4 bytes.
 *
 * basically, ibus_resp_t is the same as dbus_resp_t.
 */
typedef struct packed {
    logic  valid;       // in request?
    addr_t addr;        // target address
} ibus_req_t;

typedef struct packed {
    logic  addr_ok;     // is the address accepted by cache?
    logic  data_ok;     // is the field "data" valid?
    u32 data;           // the data read from cache
} ibus_resp_t;

`define IREQ_TO_DREQ(ireq) \
    {ireq, MSIZE4, 8'b0, 64'b0}

`define DRESP_TO_IRESP(dresp, ireq) \
    {dresp.addr_ok, dresp.data_ok, ireq.addr[2] ? dresp.data[63:32] : dresp.data[31:0]}

/**
 * cache bus: simplified burst AXI transaction interface
 */
typedef enum i2 {
    AXI_BURST_FIXED = '0,
    AXI_BURST_INCR,
    AXI_BURST_WRAP,
    AXI_BURST_RESERVED
} axi_burst_type_t;

typedef struct packed {
    logic    valid;     // in request?
    logic    is_write;  // is it a write transaction?
    msize_t  size;      // number of bytes in one burst
    addr_t   addr;      // start address
    strobe_t strobe;    // which bytes are enabled?
    word_t   data;      // the data to write
    mlen_t   len;       // number of bursts
    axi_burst_type_t burst;
} cbus_req_t;

typedef struct packed {
    logic  ready;       // is data arrived in this cycle?
    logic  last;        // is it the last word?
    word_t data;        // the data from AXI bus
} cbus_resp_t;

typedef enum logic[2:0] {
    STRD_DISABLED,
    STRD_IMM,
    STRD_IMM_PC,
    STRD_DATA_OUT,
    STRD_PC_4,
    STRD_MEM,
    STRD_CSR
} state_rd;
typedef enum logic[2:0] {
    STCSR_DISABLED,
    STCSR_IMM,
    STCSR_RS1,
    STCSR_MRET,
    STCSR_ERROR,
    STCSR_SFENCE
} state_csr;
typedef enum logic[1:0] {STPC_4,STPC_WAIT,STPC_DATAOUT,STPC_IMM} state_pc;

typedef i64 func_addr_t;
typedef i32 func_data_t;
typedef i64 data_addr_t;
typedef i64 data_data_t;

typedef struct packed {
    state_pc st_pc;
    func_addr_t pc_nxt;
} fet_t;

typedef struct packed {
    logic [9:0] fun10;
    logic width;
    creg_addr_t rs1,rs2;
    logic pc_calc;
    logic imm_calc;
} exe_t;

typedef struct packed {
    logic mem_read;
    logic mem_write;
    data_addr_t data_addr;
    data_data_t write_data;
} mem_t;

typedef struct packed {
    creg_addr_t rd;
    state_rd st_rd;
    data_data_t write_data;

    csr_addr_t csr_rd;
    data_data_t csr_write_date;
    state_csr st_csr;
    data_data_t code;

    func_data_t instr;
} wri_t;


parameter u12 CSR_MHARTID = 12'hf14;
parameter u12 CSR_MIE = 12'h304;
parameter u12 CSR_MIP = 12'h344;
parameter u12 CSR_MTVEC = 12'h305;
parameter u12 CSR_MSTATUS = 12'h300;
parameter u12 CSR_MSCRATCH = 12'h340;
parameter u12 CSR_MEPC = 12'h341;
parameter u12 CSR_SATP = 12'h180;
parameter u12 CSR_MCAUSE = 12'h342;
parameter u12 CSR_MCYCLE = 12'hb00;
parameter u12 CSR_MTVAL = 12'h343;


typedef struct packed {
    u1 sd;
    logic [MXLEN-2-36:0] wpri1;
    u2 sxl;
    u2 uxl;
    u9 wpri2;
    u1 tsr;
    u1 tw;
    u1 tvm;
    u1 mxr;
    u1 sum;
    u1 mprv;
    u2 xs;
    u2 fs;
    u2 mpp;
    u2 wpri3;
    u1 spp;
    u1 mpie;
    u1 wpri4;
    u1 spie;
    u1 upie;
    u1 mie;
    u1 wpri5;
    u1 sie;
    u1 uie;
} mstatus_t;

typedef struct packed {
    u4 mode;
    u16 asid;
    u44 ppn;
} satp_t;


typedef struct packed {
    u64         mhartid, // Hardware thread Id, read-only as 0 in this work
                mie,	 // Machine interrupt-enable register
                mip,	 // Machine interrupt pending
                mtvec;	 // Machine trap-handler base address
    mstatus_t   mstatus; // Machine status register
    u64         mscratch,// Scratch register for machine trap handlers
                mepc;	 // Machine exception program counter
    satp_t      satp;	 // Supervisor address translation and protection
    u64         mcause,  // Machine trap cause
                mcycle,  // Counter
                mtval;
} csr_regs_t;

typedef struct packed {
    u10 Reserved;
    u44 ppn;
    u2  RSW;
    u1  D,
        A,
        G,
        U,//user
        X,//excutable
        W,//write
        R,//read
        V;//valid
} pte_t;

typedef struct packed {
    logic[24:0] ext;
    u9  L2;
    u9  L1;
    u9  L0;
    u12 offset;
} virt_addr_t;

endpackage
`endif
