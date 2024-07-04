`ifndef __CORE_SV
`define __CORE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "src/fetch/fetch.sv"
`include "src/decode/decode.sv"
`include "src/execute/execute.sv"
`include "src/memory/memory.sv"
`include "src/writeback/writeback.sv"
`include "src/HazardDetectior.sv"
`endif

module core import common::*;(
	input  logic       clk, reset,
	output ibus_req_t  ireq,
	input  ibus_resp_t iresp,
	output dbus_req_t  dreq,
	input  dbus_resp_t dresp,
	input  logic       trint, swint, exint
);

	logic dec_nop,exe_nop,mem_nop,wri_nop;

    data_data_t dec_imm;

    func_data_t func;
	logic fet_finished;
    func_addr_t dec_pc;
	ibus_req_t ireq_in;
	fet_t fet_fet_st;
	logic update;
	logic fet_block;
	logic fet_clear;
	
	logic csr_fet_clear;
	func_addr_t csr_pc_nxt;
	logic iaddr_trans_finished,daddr_trans_finished;
	
	fetch fetch(
		.clk			(clk),
		.rst			(reset),
		.fet_now		(fet_fet_st),
		.iaddr_trans_finished(iaddr_trans_finished),
		.iresp			(iresp),
		.update			(update),
		.fet_block		(fet_block),
		.fet_clear		(fet_clear),
		.csr_fet_clear	(csr_fet_clear),
		.csr_pc_nxt		(csr_pc_nxt),

		.ireq			(ireq_in),
		.func			(func),
		.dec_pc			(dec_pc),
		.finished		(fet_finished)
	);

    func_addr_t wri_finishedpc;

	exe_t dec_exe_st;
    exe_t exe_exe_st;
    mem_t exe_mem_st;
    wri_t exe_wri_st;
	fet_t exe_fet_st;

    logic[2:0] exe_fun3;
    func_addr_t exe_pc;
    
    func_addr_t pc_prev0,pc_prev1;
	creg_addr_t rd_prev0,rd_prev1;
	logic need_wait0,need_wait1;
    
    u2 mode_now;

	decode decode(
		.clk			(clk),
		.in				(func),
		.dec_pc			(dec_pc),
		.update			(update),
		.fet_dec_nop	(dec_nop),
		.fet_clear		(fet_clear|csr_fet_clear),
		.fet_block		(fet_block),
		.mode			(mode_now),

		.exe_now		(dec_exe_st),
		.fet_nxt		(exe_fet_st),
		.exe_nxt		(exe_exe_st),
		.mem_nxt		(exe_mem_st),
		.wri_nxt		(exe_wri_st),
		.fun3			(exe_fun3),
		.imm			(dec_imm),
		.exe_pc 		(exe_pc),
		.rd_prev0		(rd_prev0),
		.pc_prev0		(pc_prev0),
		.need_wait0		(need_wait0),
		.rd_prev1		(rd_prev1),
		.pc_prev1		(pc_prev1),
		.need_wait1		(need_wait1)
	);

   	mem_t mem_mem_st;
	wri_t mem_wri_st;
	func_addr_t mem_pc;
	logic[2:0] mem_fun3;
	data_data_t valA,valB;
	logic exe_finished;

	execute execute(
		.clk			(clk),
		.exe_now		(exe_exe_st),
		.mem_now		(exe_mem_st),
		.wri_now		(exe_wri_st),
		.fet_now		(exe_fet_st),
		.valA			(valA),
		.valB			(valB),
		.valC			(dec_imm),
		.exe_nop		(exe_nop|csr_fet_clear),
		.exe_pc			(exe_pc),
		.fun3			(exe_fun3),
		.update			(update),

		.mem_nxt 		(mem_mem_st),
		.wri_nxt		(mem_wri_st),
		.fet_nxt		(fet_fet_st),
		.fet_clear		(fet_clear),
		.mem_fun3		(mem_fun3),
		.finished		(exe_finished),
		.mem_pc			(mem_pc)
	);


    wri_t wri_wri_st;
	mem_t wri_mem_st;
    func_addr_t wri_pc;
	dbus_req_t dreq_in;
	logic mem_finished;
	logic [2:0] wri_fun3;
	memory memory(
		.clk			(clk),
		.mem_now		(mem_mem_st),
		.wri_now		(mem_wri_st),
		.fun3			(mem_fun3),
		.mem_pc			(mem_pc),
		.mem_nop		(mem_nop|csr_fet_clear),
		.daddr_trans_finished(daddr_trans_finished),
		.dresp			(dresp),
		.update			(update),
		
		.dreq			(dreq_in),
		.mem_nxt		(wri_mem_st),
		.wri_nxt		(wri_wri_st),
		.wri_fun3		(wri_fun3),
		.finished		(mem_finished),
		.wri_pc			(wri_pc)
	);

	logic [63:0] Regs[31:0];
	csr_regs_t CSRs_now;
	csr_regs_t CSRs;
	u2 mode;

	writeback writeback(
		.clk			(clk),
		.rst			(reset),
		.exe_st			(exe_exe_st),
		.wri_now		(wri_wri_st),
		.fun3			(wri_fun3),
		.wri_pc			(wri_pc),
		.wri_nop		(wri_nop),
		.update			(update),

		.q1				(valA),
		.q2				(valB),
		.wri_finishedpc	(wri_finishedpc),
		.csr_fet_clear	(csr_fet_clear),
		.csr_pc_nxt		(csr_pc_nxt),
		.OutRegs		(Regs),
		.CSRs_now		(CSRs_now),
		.OutCSRs		(CSRs),
		.mode_now		(mode_now),
		.Outmode		(mode)
	);

	HazardDetectior HazardDetectior(
		.clk			(clk),
		.rst			(reset),
		.update			(update),
		.wri_finishedpc	(wri_finishedpc),
		.exe_finishedpc	(mem_pc),

		.pc_prev0		(pc_prev0),
		.rd_prev0		(rd_prev0),
		.need_wait0		(need_wait0),
		.pc_prev1		(pc_prev1),
		.rd_prev1		(rd_prev1),
		.need_wait1		(need_wait1),
		.exe_st			(dec_exe_st),
		.fet_clear		(fet_clear),
		.csr_fet_clear	(csr_fet_clear),

		.fet_block		(fet_block),
		.dec_nop		(dec_nop),
		.exe_nop		(exe_nop),
		.mem_nop		(mem_nop),
		.wri_nop		(wri_nop),
		
		.satp	(CSRs_now.satp),
		.mode	(mode_now),
		.ireq_in(ireq_in),
		.dreq_in(dreq_in),
		.dresp	(dresp),
		
		.iaddr_trans_finished(iaddr_trans_finished),
		.daddr_trans_finished(daddr_trans_finished),

		.ireq(ireq),
		.dreq(dreq)
	);

	assign update=fet_finished&&exe_finished&&mem_finished;


`ifdef VERILATOR
	DifftestInstrCommit DifftestInstrCommit(
		.clock              (clk),
		.coreid             (0),
		.index              (0),
		.valid              (update&&!wri_nop),
		.pc                 (wri_pc),
		.instr              (wri_wri_st.instr),
		.skip               ((wri_mem_st.mem_read||wri_mem_st.mem_write)&&!wri_mem_st.data_addr[31]),
		.isRVC              (0),
		.scFailed           (0),
		.wen                (wri_wri_st.st_rd!=STRD_DISABLED),
		.wdest              ({3'b0,wri_wri_st.rd}),
		.wdata              (wri_wri_st.write_data)
	);

	DifftestArchIntRegState DifftestArchIntRegState (
		.clock              (clk),
		.coreid             (0),
		.gpr_0              (Regs[0]),
		.gpr_1              (Regs[1]),
		.gpr_2              (Regs[2]),
		.gpr_3              (Regs[3]),
		.gpr_4              (Regs[4]),
		.gpr_5              (Regs[5]),
		.gpr_6              (Regs[6]),
		.gpr_7              (Regs[7]),
		.gpr_8              (Regs[8]),
		.gpr_9              (Regs[9]),
		.gpr_10             (Regs[10]),
		.gpr_11             (Regs[11]),
		.gpr_12             (Regs[12]),
		.gpr_13             (Regs[13]),
		.gpr_14             (Regs[14]),
		.gpr_15             (Regs[15]),
		.gpr_16             (Regs[16]),
		.gpr_17             (Regs[17]),
		.gpr_18             (Regs[18]),
		.gpr_19             (Regs[19]),
		.gpr_20             (Regs[20]),
		.gpr_21             (Regs[21]),
		.gpr_22             (Regs[22]),
		.gpr_23             (Regs[23]),
		.gpr_24             (Regs[24]),
		.gpr_25             (Regs[25]),
		.gpr_26             (Regs[26]),
		.gpr_27             (Regs[27]),
		.gpr_28             (Regs[28]),
		.gpr_29             (Regs[29]),
		.gpr_30             (Regs[30]),
		.gpr_31             (Regs[31])
	);

    DifftestTrapEvent DifftestTrapEvent(
		.clock              (clk),
		.coreid             (0),
		.valid              (0),
		.code               (0),
		.pc                 (0),
		.cycleCnt           (0),
		.instrCnt           (0)
	);

	DifftestCSRState DifftestCSRState(
		.clock              (clk),
		.coreid             (0),
		.priviledgeMode     (mode),
		.mstatus            (CSRs.mstatus),
		.sstatus            (CSRs.mstatus & 64'h800000030001e000),
		.mepc               (CSRs.mepc),
		.sepc               (0),
		.mtval              (CSRs.mtval),
		.stval              (0),
		.mtvec              (CSRs.mtvec),
		.stvec              (0),
		.mcause             (CSRs.mcause),
		.scause             (0),
		.satp               (CSRs.satp),
		.mip                (CSRs.mip),
		.mie                (CSRs.mie),
		.mscratch           (CSRs.mscratch),
		.sscratch           (0),
		.mideleg            (0),
		.medeleg            (0)
	);
`endif
endmodule
`endif