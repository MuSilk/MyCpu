// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSIMTOP_H_
#define _VSIMTOP_H_  // guard

#include "verilated_heavy.h"
#include "VSimTop__Dpi.h"

//==========

class VSimTop__Syms;
class VSimTop_VerilatedFst;
class VSimTop___024unit;


//----------

VL_MODULE(VSimTop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VSimTop___024unit* __PVT____024unit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_perfInfo_clean,0,0);
    VL_IN8(io_perfInfo_dump,0,0);
    VL_OUT8(io_uart_out_valid,0,0);
    VL_OUT8(io_uart_out_ch,7,0);
    VL_OUT8(io_uart_in_valid,0,0);
    VL_IN8(io_uart_in_ch,7,0);
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SimTop__DOT__trint;
        CData/*0:0*/ SimTop__DOT__swint;
        CData/*0:0*/ SimTop__DOT__exint;
        CData/*0:0*/ SimTop__DOT__core__DOT__dec_nop;
        CData/*0:0*/ SimTop__DOT__core__DOT__exe_nop;
        CData/*0:0*/ SimTop__DOT__core__DOT__mem_nop;
        CData/*0:0*/ SimTop__DOT__core__DOT__wri_nop;
        CData/*0:0*/ SimTop__DOT__core__DOT__update;
        CData/*2:0*/ SimTop__DOT__core__DOT__exe_fun3;
        CData/*0:0*/ SimTop__DOT__core__DOT__fet_block;
        CData/*0:0*/ SimTop__DOT__core__DOT__fet_clear;
        CData/*2:0*/ SimTop__DOT__core__DOT__mem_fun3;
        CData/*0:0*/ SimTop__DOT__core__DOT__exe_finished;
        CData/*2:0*/ SimTop__DOT__core__DOT__wri_fun3;
        CData/*1:0*/ SimTop__DOT__core__DOT__mode;
        CData/*0:0*/ SimTop__DOT__core__DOT__csr_fet_clear;
        CData/*4:0*/ SimTop__DOT__core__DOT__rd_prev0;
        CData/*4:0*/ SimTop__DOT__core__DOT__rd_prev1;
        CData/*0:0*/ SimTop__DOT__core__DOT__need_wait0;
        CData/*0:0*/ SimTop__DOT__core__DOT__need_wait1;
        CData/*0:0*/ SimTop__DOT__core__DOT__iaddr_trans_finished;
        CData/*0:0*/ SimTop__DOT__core__DOT__daddr_trans_finished;
        CData/*0:0*/ SimTop__DOT__core__DOT__fetch__DOT__func_fetched;
        CData/*1:0*/ SimTop__DOT__core__DOT__decode__DOT__st_pc;
        CData/*0:0*/ SimTop__DOT__core__DOT__decode__DOT__dec_nop;
        CData/*6:0*/ SimTop__DOT__core__DOT__execute__DOT__cnt;
        CData/*0:0*/ SimTop__DOT__core__DOT__execute__DOT__reseted;
        CData/*1:0*/ SimTop__DOT__core__DOT__execute__DOT__st_pc;
        CData/*0:0*/ SimTop__DOT__core__DOT__execute__DOT__data_calculated;
        CData/*5:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB;
        CData/*0:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish;
        CData/*0:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__muldivfinished;
        CData/*0:0*/ SimTop__DOT__core__DOT__memory__DOT__mem_op;
        CData/*0:0*/ SimTop__DOT__core__DOT__memory__DOT__mem_fetched;
        CData/*0:0*/ SimTop__DOT__core__DOT__writeback__DOT__en;
        CData/*0:0*/ SimTop__DOT__core__DOT__writeback__DOT__csr_en;
        CData/*1:0*/ SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode;
        CData/*0:0*/ SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri0;
        CData/*0:0*/ SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri1;
        CData/*1:0*/ SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st;
        CData/*1:0*/ SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st;
        CData/*0:0*/ SimTop__DOT__icvt__DOT__inst__DOT__okay;
        CData/*0:0*/ SimTop__DOT__dcvt__DOT__okay;
        CData/*0:0*/ SimTop__DOT__mux__DOT__busy;
        CData/*1:0*/ SimTop__DOT__ram__DOT__state;
        CData/*7:0*/ SimTop__DOT__ram__DOT__count_down;
        CData/*3:0*/ SimTop__DOT__ram__DOT__size;
        CData/*0:0*/ SimTop__DOT__ram__DOT__msip;
        IData/*31:0*/ SimTop__DOT__core__DOT__func;
        IData/*22:0*/ SimTop__DOT__core__DOT__dec_exe_st;
        IData/*22:0*/ SimTop__DOT__core__DOT__exe_exe_st;
        IData/*31:0*/ SimTop__DOT__core__DOT__fetch__DOT__func_tmp;
        WData/*128:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[5];
        WData/*64:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__D[3];
        IData/*31:0*/ SimTop__DOT__mux__DOT__index;
        IData/*31:0*/ SimTop__DOT__mux__DOT__select;
        IData/*31:0*/ SimTop__DOT__mux__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ SimTop__DOT__mux__DOT__unnamedblk2__DOT__i;
        WData/*150:0*/ SimTop__DOT__oreq[5];
        WData/*65:0*/ SimTop__DOT__oresp[3];
        WData/*64:0*/ SimTop__DOT__ireq[3];
        QData/*33:0*/ SimTop__DOT__iresp;
        WData/*139:0*/ SimTop__DOT__dreq[5];
        WData/*65:0*/ SimTop__DOT__dresp[3];
    };
    struct {
        WData/*150:0*/ SimTop__DOT__icreq[5];
        WData/*150:0*/ SimTop__DOT__dcreq[5];
        QData/*63:0*/ SimTop__DOT__core__DOT__dec_imm;
        QData/*63:0*/ SimTop__DOT__core__DOT__dec_pc;
        WData/*64:0*/ SimTop__DOT__core__DOT__ireq_in[3];
        WData/*65:0*/ SimTop__DOT__core__DOT__fet_fet_st[3];
        QData/*63:0*/ SimTop__DOT__core__DOT__wri_finishedpc;
        WData/*129:0*/ SimTop__DOT__core__DOT__exe_mem_st[5];
        WData/*246:0*/ SimTop__DOT__core__DOT__exe_wri_st[8];
        WData/*65:0*/ SimTop__DOT__core__DOT__exe_fet_st[3];
        QData/*63:0*/ SimTop__DOT__core__DOT__exe_pc;
        WData/*129:0*/ SimTop__DOT__core__DOT__mem_mem_st[5];
        WData/*246:0*/ SimTop__DOT__core__DOT__mem_wri_st[8];
        QData/*63:0*/ SimTop__DOT__core__DOT__mem_pc;
        QData/*63:0*/ SimTop__DOT__core__DOT__valA;
        QData/*63:0*/ SimTop__DOT__core__DOT__valB;
        WData/*246:0*/ SimTop__DOT__core__DOT__wri_wri_st[8];
        WData/*129:0*/ SimTop__DOT__core__DOT__wri_mem_st[5];
        QData/*63:0*/ SimTop__DOT__core__DOT__wri_pc;
        WData/*139:0*/ SimTop__DOT__core__DOT__dreq_in[5];
        WData/*703:0*/ SimTop__DOT__core__DOT__CSRs[22];
        QData/*63:0*/ SimTop__DOT__core__DOT__pc_prev0;
        QData/*63:0*/ SimTop__DOT__core__DOT__pc_prev1;
        QData/*63:0*/ SimTop__DOT__core__DOT__fetch__DOT__pc_now;
        WData/*129:0*/ SimTop__DOT__core__DOT__decode__DOT__mem_now[5];
        WData/*246:0*/ SimTop__DOT__core__DOT__decode__DOT__wri_now[8];
        QData/*63:0*/ SimTop__DOT__core__DOT__decode__DOT__imm_now;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__out;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__B;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realBl;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA;
        QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB;
        QData/*63:0*/ SimTop__DOT__core__DOT__memory__DOT__mem_data;
        QData/*63:0*/ SimTop__DOT__core__DOT__memory__DOT__raw_data;
        QData/*63:0*/ SimTop__DOT__core__DOT__writeback__DOT__csr_value;
        QData/*63:0*/ SimTop__DOT__core__DOT__writeback__DOT__write_data;
        WData/*703:0*/ SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[22];
        QData/*63:0*/ SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data;
        QData/*63:0*/ SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr;
        QData/*63:0*/ SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr;
        QData/*63:0*/ SimTop__DOT__core__DOT__HazardDetectior__DOT__pte;
        WData/*65:0*/ SimTop__DOT__icvt__DOT__dresp[3];
        WData/*150:0*/ SimTop__DOT__mux__DOT__saved_req[5];
        WData/*150:0*/ SimTop__DOT__mux__DOT__selected_req[5];
        WData/*150:0*/ SimTop__DOT__ram__DOT__saved_oreq[5];
        QData/*63:0*/ SimTop__DOT__ram__DOT__addr;
        QData/*63:0*/ SimTop__DOT__ram__DOT__idx;
        QData/*63:0*/ SimTop__DOT__ram__DOT__wrap1;
        QData/*63:0*/ SimTop__DOT__ram__DOT__wrap2;
        QData/*63:0*/ SimTop__DOT__ram__DOT__cyc_cnt;
        QData/*63:0*/ SimTop__DOT__ram__DOT__ms_cnt;
        QData/*63:0*/ SimTop__DOT__ram__DOT__wmask;
        QData/*63:0*/ SimTop__DOT__ram__DOT__mtime;
        QData/*63:0*/ SimTop__DOT__ram__DOT__mtimecmp;
        QData/*63:0*/ SimTop__DOT__core__DOT__Regs[32];
        QData/*63:0*/ SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ SimTop__DOT__core__DOT____Vcellinp__decode__fet_clear;
    CData/*0:0*/ SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop;
    CData/*0:0*/ SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop;
    CData/*2:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr;
    CData/*2:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_rd;
    CData/*0:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write;
    CData/*0:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read;
    CData/*0:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__imm_calc;
    CData/*0:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width;
    CData/*0:0*/ SimTop__DOT__mux__DOT____Vxrand3;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*11:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__csr_rd;
    SData/*9:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10;
    WData/*150:0*/ SimTop__DOT__mux__DOT____Vxrand2[5];
    WData/*150:0*/ SimTop__DOT__mux__DOT____Vxrand1[5];
    IData/*31:0*/ __Vfunc_get_switch__5__Vfuncout;
    WData/*131:0*/ SimTop__DOT____Vcellout__mux__iresps[5];
    WData/*301:0*/ SimTop__DOT____Vcellinp__mux__ireqs[10];
    QData/*63:0*/ SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code;
    WData/*65:0*/ SimTop__DOT__mux__DOT____Vlvbound4[3];
    QData/*63:0*/ __Vfunc_ram_read_helper__6__Vfuncout;
    QData/*63:0*/ SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[32];
    QData/*63:0*/ SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[32];
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSimTop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimTop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSimTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSimTop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSimTop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
  private:
    static QData _change_request(VSimTop__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSimTop__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSimTop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSimTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSimTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VSimTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VSimTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSimTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedFst* tracep);
    static void traceChgTop0(void* userp, VerilatedFst* tracep);
    static void traceCleanup(void* userp, VerilatedFst* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
