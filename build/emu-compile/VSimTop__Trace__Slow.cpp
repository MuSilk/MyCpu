// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


//======================

void VSimTop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSimTop::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSimTop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSimTop::traceInitTop(void* userp, VerilatedFst* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSimTop::traceInitSub0(void* userp, VerilatedFst* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+814,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+816,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+818,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+820,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+822,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+823,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+824,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+825,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+826,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+827,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+814,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+816,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+818,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+820,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+822,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+823,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+824,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+825,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+826,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+827,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1,"SimTop oreq valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+2,"SimTop oreq is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MSIZE1", "MSIZE2", "MSIZE4", "MSIZE8"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "common::msize_t", 4, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+3,"SimTop oreq size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop oreq addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop oreq strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop oreq data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MLEN1", "MLEN2", "MLEN4", "MLEN8", 
                                                "MLEN16", 
                                                "MLEN32", 
                                                "MLEN64", 
                                                "MLEN128", 
                                                "MLEN256"};
            const char* __VenumItemValues[]
            = {"0", "1", "11", "111", "1111", "11111", 
                                                "111111", 
                                                "1111111", 
                                                "11111111"};
            tracep->declDTypeEnum(2, "common::mlen_t", 9, 8, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+9,"SimTop oreq len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {
            const char* __VenumItemNames[]
            = {"AXI_BURST_FIXED", "AXI_BURST_INCR", 
                                                "AXI_BURST_WRAP", 
                                                "AXI_BURST_RESERVED"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(3, "common::axi_burst_type_t", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+10,"SimTop oreq burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop oresp ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+12,"SimTop oresp last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+13,"SimTop oresp data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop trint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+16,"SimTop swint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+17,"SimTop exint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"SimTop ireq valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+19,"SimTop ireq addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop iresp addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+22,"SimTop iresp data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+23,"SimTop iresp data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+24,"SimTop dreq valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+25,"SimTop dreq addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop dreq size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop dreq strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop dreq data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop dresp addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+32,"SimTop dresp data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+33,"SimTop dresp data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+35,"SimTop icreq valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+36,"SimTop icreq is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+37,"SimTop icreq size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+38,"SimTop icreq addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+40,"SimTop icreq strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+41,"SimTop icreq data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+43,"SimTop icreq len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+44,"SimTop icreq burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+45,"SimTop dcreq valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+46,"SimTop dcreq is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+47,"SimTop dcreq size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+48,"SimTop dcreq addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+50,"SimTop dcreq strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+51,"SimTop dcreq data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+53,"SimTop dcreq len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+54,"SimTop dcreq burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop icresp ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+56,"SimTop icresp last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+57,"SimTop icresp data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+59,"SimTop dcresp ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+60,"SimTop dcresp last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+61,"SimTop dcresp data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop core ireq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop core ireq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop core iresp addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop core iresp data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop core iresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+24,"SimTop core dreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop core dreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop core dreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop core dreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop core dreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop core dresp addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop core dresp data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"SimTop core dresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop core trint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"SimTop core swint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop core exint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"SimTop core dec_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+64,"SimTop core exe_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+65,"SimTop core mem_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+66,"SimTop core wri_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+67,"SimTop core dec_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+69,"SimTop core func",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+70,"SimTop core fet_finished",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+71,"SimTop core dec_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+73,"SimTop core ireq_in valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+74,"SimTop core ireq_in addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"STPC_4", "STPC_WAIT", "STPC_DATAOUT", 
                                                "STPC_IMM"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(4, "common::state_pc", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+76,"SimTop core fet_fet_st st_pc",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declQuad(c+77,"SimTop core fet_fet_st pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+80,"SimTop core wri_finishedpc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+82,"SimTop core dec_exe_st fun10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
        tracep->declBit(c+83,"SimTop core dec_exe_st width",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+84,"SimTop core dec_exe_st rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+85,"SimTop core dec_exe_st rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+86,"SimTop core dec_exe_st pc_calc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+87,"SimTop core dec_exe_st imm_calc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+88,"SimTop core exe_exe_st fun10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
        tracep->declBit(c+89,"SimTop core exe_exe_st width",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+90,"SimTop core exe_exe_st rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+91,"SimTop core exe_exe_st rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+92,"SimTop core exe_exe_st pc_calc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+93,"SimTop core exe_exe_st imm_calc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+94,"SimTop core exe_mem_st mem_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+95,"SimTop core exe_mem_st mem_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+96,"SimTop core exe_mem_st data_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+98,"SimTop core exe_mem_st write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+100,"SimTop core exe_wri_st rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        {
            const char* __VenumItemNames[]
            = {"STRD_DISABLED", "STRD_IMM", "STRD_IMM_PC", 
                                                "STRD_DATA_OUT", 
                                                "STRD_PC_4", 
                                                "STRD_MEM", 
                                                "STRD_CSR"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110"};
            tracep->declDTypeEnum(5, "common::state_rd", 7, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+101,"SimTop core exe_wri_st st_rd",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+102,"SimTop core exe_wri_st write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+104,"SimTop core exe_wri_st csr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+105,"SimTop core exe_wri_st csr_write_date",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"STCSR_DISABLED", "STCSR_IMM", "STCSR_RS1", 
                                                "STCSR_MRET", 
                                                "STCSR_ERROR", 
                                                "STCSR_SFENCE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101"};
            tracep->declDTypeEnum(6, "common::state_csr", 6, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+107,"SimTop core exe_wri_st st_csr",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+108,"SimTop core exe_wri_st code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+110,"SimTop core exe_wri_st instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+111,"SimTop core exe_fet_st st_pc",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declQuad(c+112,"SimTop core exe_fet_st pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+114,"SimTop core exe_fun3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+115,"SimTop core exe_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+117,"SimTop core fet_block",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+118,"SimTop core fet_clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+119,"SimTop core mem_mem_st mem_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+120,"SimTop core mem_mem_st mem_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+121,"SimTop core mem_mem_st data_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core mem_mem_st write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+125,"SimTop core mem_wri_st rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+126,"SimTop core mem_wri_st st_rd",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+127,"SimTop core mem_wri_st write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+129,"SimTop core mem_wri_st csr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+130,"SimTop core mem_wri_st csr_write_date",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+132,"SimTop core mem_wri_st st_csr",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+133,"SimTop core mem_wri_st code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+135,"SimTop core mem_wri_st instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+136,"SimTop core mem_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+138,"SimTop core mem_fun3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+139,"SimTop core valA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core valB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+143,"SimTop core exe_finished",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+144,"SimTop core wri_wri_st rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+145,"SimTop core wri_wri_st st_rd",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+146,"SimTop core wri_wri_st write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+148,"SimTop core wri_wri_st csr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+149,"SimTop core wri_wri_st csr_write_date",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+151,"SimTop core wri_wri_st st_csr",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+152,"SimTop core wri_wri_st code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+154,"SimTop core wri_wri_st instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+155,"SimTop core wri_mem_st mem_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+156,"SimTop core wri_mem_st mem_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+157,"SimTop core wri_mem_st data_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+159,"SimTop core wri_mem_st write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+161,"SimTop core wri_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+163,"SimTop core dreq_in valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+164,"SimTop core dreq_in addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+166,"SimTop core dreq_in size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+167,"SimTop core dreq_in strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+168,"SimTop core dreq_in data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+170,"SimTop core mem_finished",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+171,"SimTop core wri_fun3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+172+i*2,"SimTop core Regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        tracep->declQuad(c+236,"SimTop core CSRs_now mhartid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop core CSRs_now mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core CSRs_now mip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop core CSRs_now mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+244,"SimTop core CSRs_now mstatus sd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+245,"SimTop core CSRs_now mstatus wpri1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 26,0);
        tracep->declBus(c+246,"SimTop core CSRs_now mstatus sxl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+247,"SimTop core CSRs_now mstatus uxl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+248,"SimTop core CSRs_now mstatus wpri2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
        tracep->declBit(c+249,"SimTop core CSRs_now mstatus tsr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+250,"SimTop core CSRs_now mstatus tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+251,"SimTop core CSRs_now mstatus tvm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+252,"SimTop core CSRs_now mstatus mxr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+253,"SimTop core CSRs_now mstatus sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+254,"SimTop core CSRs_now mstatus mprv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+255,"SimTop core CSRs_now mstatus xs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+256,"SimTop core CSRs_now mstatus fs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+257,"SimTop core CSRs_now mstatus mpp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+258,"SimTop core CSRs_now mstatus wpri3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+259,"SimTop core CSRs_now mstatus spp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+260,"SimTop core CSRs_now mstatus mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+261,"SimTop core CSRs_now mstatus wpri4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+262,"SimTop core CSRs_now mstatus spie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+263,"SimTop core CSRs_now mstatus upie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+264,"SimTop core CSRs_now mstatus mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+265,"SimTop core CSRs_now mstatus wpri5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+266,"SimTop core CSRs_now mstatus sie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+267,"SimTop core CSRs_now mstatus uie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+268,"SimTop core CSRs_now mscratch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+270,"SimTop core CSRs_now mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+272,"SimTop core CSRs_now satp mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+273,"SimTop core CSRs_now satp asid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declQuad(c+274,"SimTop core CSRs_now satp ppn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 43,0);
        tracep->declQuad(c+276,"SimTop core CSRs_now mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+278,"SimTop core CSRs_now mcycle",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+280,"SimTop core CSRs_now mtval",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+282,"SimTop core CSRs mhartid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop core CSRs mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+286,"SimTop core CSRs mip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+288,"SimTop core CSRs mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+290,"SimTop core CSRs mstatus sd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+291,"SimTop core CSRs mstatus wpri1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 26,0);
        tracep->declBus(c+292,"SimTop core CSRs mstatus sxl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+293,"SimTop core CSRs mstatus uxl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+294,"SimTop core CSRs mstatus wpri2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
        tracep->declBit(c+295,"SimTop core CSRs mstatus tsr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+296,"SimTop core CSRs mstatus tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+297,"SimTop core CSRs mstatus tvm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+298,"SimTop core CSRs mstatus mxr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+299,"SimTop core CSRs mstatus sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+300,"SimTop core CSRs mstatus mprv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+301,"SimTop core CSRs mstatus xs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+302,"SimTop core CSRs mstatus fs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+303,"SimTop core CSRs mstatus mpp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+304,"SimTop core CSRs mstatus wpri3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+305,"SimTop core CSRs mstatus spp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+306,"SimTop core CSRs mstatus mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+307,"SimTop core CSRs mstatus wpri4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+308,"SimTop core CSRs mstatus spie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+309,"SimTop core CSRs mstatus upie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+310,"SimTop core CSRs mstatus mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+311,"SimTop core CSRs mstatus wpri5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+312,"SimTop core CSRs mstatus sie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+313,"SimTop core CSRs mstatus uie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+314,"SimTop core CSRs mscratch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop core CSRs mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+318,"SimTop core CSRs satp mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+319,"SimTop core CSRs satp asid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declQuad(c+320,"SimTop core CSRs satp ppn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 43,0);
        tracep->declQuad(c+322,"SimTop core CSRs mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+324,"SimTop core CSRs mcycle",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+326,"SimTop core CSRs mtval",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+328,"SimTop core mode_now",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+329,"SimTop core mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+330,"SimTop core csr_fet_clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+331,"SimTop core csr_pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+333,"SimTop core pc_prev0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+335,"SimTop core pc_prev1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+337,"SimTop core rd_prev0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+338,"SimTop core rd_prev1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+339,"SimTop core need_wait0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+340,"SimTop core need_wait1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+341,"SimTop core iaddr_trans_finished",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+342,"SimTop core daddr_trans_finished",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+814,"SimTop core fetch clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop core fetch rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"SimTop core fetch fet_now st_pc",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+77,"SimTop core fetch fet_now pc_nxt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+341,"SimTop core fetch iaddr_trans_finished",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"SimTop core fetch iresp addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop core fetch iresp data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop core fetch iresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+79,"SimTop core fetch update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+117,"SimTop core fetch fet_block",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+118,"SimTop core fetch fet_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+330,"SimTop core fetch csr_fet_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+331,"SimTop core fetch csr_pc_nxt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+73,"SimTop core fetch ireq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+74,"SimTop core fetch ireq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+69,"SimTop core fetch func",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+71,"SimTop core fetch dec_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+70,"SimTop core fetch finished",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+343,"SimTop core fetch pc_now",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+345,"SimTop core fetch func_fetched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+346,"SimTop core fetch func_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+814,"SimTop core decode clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+69,"SimTop core decode in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+71,"SimTop core decode dec_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core decode update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"SimTop core decode fet_dec_nop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+117,"SimTop core decode fet_block",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+347,"SimTop core decode fet_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+328,"SimTop core decode mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+82,"SimTop core decode exe_now fun10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+83,"SimTop core decode exe_now width",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+84,"SimTop core decode exe_now rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+85,"SimTop core decode exe_now rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+86,"SimTop core decode exe_now pc_calc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"SimTop core decode exe_now imm_calc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+111,"SimTop core decode fet_nxt st_pc",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+112,"SimTop core decode fet_nxt pc_nxt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+88,"SimTop core decode exe_nxt fun10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+89,"SimTop core decode exe_nxt width",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+90,"SimTop core decode exe_nxt rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+91,"SimTop core decode exe_nxt rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+92,"SimTop core decode exe_nxt pc_calc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"SimTop core decode exe_nxt imm_calc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+94,"SimTop core decode mem_nxt mem_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"SimTop core decode mem_nxt mem_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+96,"SimTop core decode mem_nxt data_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+98,"SimTop core decode mem_nxt write_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+100,"SimTop core decode wri_nxt rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+101,"SimTop core decode wri_nxt st_rd",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+102,"SimTop core decode wri_nxt write_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+104,"SimTop core decode wri_nxt csr_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+105,"SimTop core decode wri_nxt csr_write_date",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+107,"SimTop core decode wri_nxt st_csr",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+108,"SimTop core decode wri_nxt code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+110,"SimTop core decode wri_nxt instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+114,"SimTop core decode fun3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+67,"SimTop core decode imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core decode exe_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+337,"SimTop core decode rd_prev0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+338,"SimTop core decode rd_prev1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+333,"SimTop core decode pc_prev0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+335,"SimTop core decode pc_prev1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+339,"SimTop core decode need_wait0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+340,"SimTop core decode need_wait1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+348,"SimTop core decode mem_now mem_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+349,"SimTop core decode mem_now mem_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+350,"SimTop core decode mem_now data_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+352,"SimTop core decode mem_now write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+354,"SimTop core decode wri_now rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+355,"SimTop core decode wri_now st_rd",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+356,"SimTop core decode wri_now write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+358,"SimTop core decode wri_now csr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+359,"SimTop core decode wri_now csr_write_date",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+361,"SimTop core decode wri_now st_csr",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+362,"SimTop core decode wri_now code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+364,"SimTop core decode wri_now instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+365,"SimTop core decode st_pc",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+366,"SimTop core decode fun3_now",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+367,"SimTop core decode imm_now",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+369,"SimTop core decode dec_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+69,"SimTop core decode Controller in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+328,"SimTop core decode Controller mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+366,"SimTop core decode Controller fun3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+370,"SimTop core decode Controller fun10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+371,"SimTop core decode Controller width",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+372,"SimTop core decode Controller rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+373,"SimTop core decode Controller rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+374,"SimTop core decode Controller rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+375,"SimTop core decode Controller csr_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+376,"SimTop core decode Controller code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop core decode Controller imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+378,"SimTop core decode Controller imm_calc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+379,"SimTop core decode Controller mem_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+380,"SimTop core decode Controller mem_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+381,"SimTop core decode Controller st_rd",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+382,"SimTop core decode Controller st_csr",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+365,"SimTop core decode Controller st_pc",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+814,"SimTop core execute clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+88,"SimTop core execute exe_now fun10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+89,"SimTop core execute exe_now width",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+90,"SimTop core execute exe_now rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+91,"SimTop core execute exe_now rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+92,"SimTop core execute exe_now pc_calc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"SimTop core execute exe_now imm_calc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+94,"SimTop core execute mem_now mem_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"SimTop core execute mem_now mem_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+96,"SimTop core execute mem_now data_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+98,"SimTop core execute mem_now write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+100,"SimTop core execute wri_now rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+101,"SimTop core execute wri_now st_rd",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+102,"SimTop core execute wri_now write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+104,"SimTop core execute wri_now csr_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+105,"SimTop core execute wri_now csr_write_date",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+107,"SimTop core execute wri_now st_csr",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+108,"SimTop core execute wri_now code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+110,"SimTop core execute wri_now instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+111,"SimTop core execute fet_now st_pc",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+112,"SimTop core execute fet_now pc_nxt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+139,"SimTop core execute valA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core execute valB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+67,"SimTop core execute valC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+383,"SimTop core execute exe_nop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+115,"SimTop core execute exe_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+114,"SimTop core execute fun3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+79,"SimTop core execute update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+119,"SimTop core execute mem_nxt mem_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+120,"SimTop core execute mem_nxt mem_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+121,"SimTop core execute mem_nxt data_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core execute mem_nxt write_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+125,"SimTop core execute wri_nxt rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+126,"SimTop core execute wri_nxt st_rd",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+127,"SimTop core execute wri_nxt write_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+129,"SimTop core execute wri_nxt csr_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+130,"SimTop core execute wri_nxt csr_write_date",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+132,"SimTop core execute wri_nxt st_csr",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+133,"SimTop core execute wri_nxt code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+135,"SimTop core execute wri_nxt instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+76,"SimTop core execute fet_nxt st_pc",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+77,"SimTop core execute fet_nxt pc_nxt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+118,"SimTop core execute fet_clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+138,"SimTop core execute mem_fun3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+143,"SimTop core execute finished",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+136,"SimTop core execute mem_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+384,"SimTop core execute out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+386,"SimTop core execute cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+387,"SimTop core execute reseted",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+139,"SimTop core execute A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop core execute B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+390,"SimTop core execute alu_finished",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+391,"SimTop core execute ZF",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+392,"SimTop core execute st_pc",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+393,"SimTop core execute data_calculated",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+394,"SimTop core execute Mux2 en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+67,"SimTop core execute Mux2 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core execute Mux2 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop core execute Mux2 out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core execute ALU clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+139,"SimTop core execute ALU A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop core execute ALU B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+395,"SimTop core execute ALU fun10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+396,"SimTop core execute ALU width",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+384,"SimTop core execute ALU out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+390,"SimTop core execute ALU finished",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+386,"SimTop core execute ALU cnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+387,"SimTop core execute ALU reseted",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+397,"SimTop core execute ALU realA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+399,"SimTop core execute ALU realB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+401,"SimTop core execute ALU ans",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+828,"SimTop core execute ALU realBl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+403,"SimTop core execute ALU shiftB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declQuad(c+404,"SimTop core execute ALU md_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+406,"SimTop core execute ALU rem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+408,"SimTop core execute ALU md_finish",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+409,"SimTop core execute ALU div_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+410,"SimTop core execute ALU mul_div",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+397,"SimTop core execute ALU muldiv A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+399,"SimTop core execute ALU muldiv B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+409,"SimTop core execute ALU muldiv sign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+410,"SimTop core execute ALU muldiv mul_div",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+396,"SimTop core execute ALU muldiv width",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+404,"SimTop core execute ALU muldiv out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+406,"SimTop core execute ALU muldiv r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core execute ALU muldiv clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+408,"SimTop core execute ALU muldiv finished",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+386,"SimTop core execute ALU muldiv cnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+387,"SimTop core execute ALU muldiv reseted",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+411,"SimTop core execute ALU muldiv outsign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+412,"SimTop core execute ALU muldiv absA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+414,"SimTop core execute ALU muldiv absB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declArray(c+416,"SimTop core execute ALU muldiv R",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 128,0);
        tracep->declArray(c+421,"SimTop core execute ALU muldiv D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 64,0);
        tracep->declBit(c+424,"SimTop core execute ALU muldiv muldivfinished",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+814,"SimTop core memory clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+119,"SimTop core memory mem_now mem_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+120,"SimTop core memory mem_now mem_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+121,"SimTop core memory mem_now data_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core memory mem_now write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+125,"SimTop core memory wri_now rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+126,"SimTop core memory wri_now st_rd",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+127,"SimTop core memory wri_now write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+129,"SimTop core memory wri_now csr_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+130,"SimTop core memory wri_now csr_write_date",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+132,"SimTop core memory wri_now st_csr",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+133,"SimTop core memory wri_now code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+135,"SimTop core memory wri_now instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+138,"SimTop core memory fun3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+136,"SimTop core memory mem_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+425,"SimTop core memory mem_nop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"SimTop core memory update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"SimTop core memory dresp addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop core memory dresp data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"SimTop core memory dresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+342,"SimTop core memory daddr_trans_finished",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop core memory dreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+164,"SimTop core memory dreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+166,"SimTop core memory dreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+167,"SimTop core memory dreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+168,"SimTop core memory dreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+155,"SimTop core memory mem_nxt mem_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+156,"SimTop core memory mem_nxt mem_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+157,"SimTop core memory mem_nxt data_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+159,"SimTop core memory mem_nxt write_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+144,"SimTop core memory wri_nxt rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+145,"SimTop core memory wri_nxt st_rd",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+146,"SimTop core memory wri_nxt write_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+148,"SimTop core memory wri_nxt csr_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+149,"SimTop core memory wri_nxt csr_write_date",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+151,"SimTop core memory wri_nxt st_csr",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+152,"SimTop core memory wri_nxt code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+154,"SimTop core memory wri_nxt instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+171,"SimTop core memory wri_fun3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+170,"SimTop core memory finished",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+161,"SimTop core memory wri_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+426,"SimTop core memory mem_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+428,"SimTop core memory mem_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+429,"SimTop core memory mem_fetched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+430,"SimTop core memory raw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+432,"SimTop core memory MemSetData mem_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+433,"SimTop core memory MemSetData mem_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+430,"SimTop core memory MemSetData raw_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core memory MemSetData data_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core memory MemSetData write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+138,"SimTop core memory MemSetData fun3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+163,"SimTop core memory MemSetData dreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+164,"SimTop core memory MemSetData dreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+166,"SimTop core memory MemSetData dreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+167,"SimTop core memory MemSetData dreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+168,"SimTop core memory MemSetData dreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+426,"SimTop core memory MemSetData mem_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core writeback clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop core writeback rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+88,"SimTop core writeback exe_st fun10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+89,"SimTop core writeback exe_st width",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+90,"SimTop core writeback exe_st rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+91,"SimTop core writeback exe_st rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+92,"SimTop core writeback exe_st pc_calc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"SimTop core writeback exe_st imm_calc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+171,"SimTop core writeback fun3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+144,"SimTop core writeback wri_now rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+145,"SimTop core writeback wri_now st_rd",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+146,"SimTop core writeback wri_now write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+148,"SimTop core writeback wri_now csr_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+149,"SimTop core writeback wri_now csr_write_date",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+151,"SimTop core writeback wri_now st_csr",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+152,"SimTop core writeback wri_now code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+154,"SimTop core writeback wri_now instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+161,"SimTop core writeback wri_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+66,"SimTop core writeback wri_nop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"SimTop core writeback update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+139,"SimTop core writeback q1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core writeback q2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+80,"SimTop core writeback wri_finishedpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+330,"SimTop core writeback csr_fet_clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+331,"SimTop core writeback csr_pc_nxt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+434+i*2,"SimTop core writeback OutRegs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 63,0);}}
        tracep->declQuad(c+236,"SimTop core writeback CSRs_now mhartid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop core writeback CSRs_now mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core writeback CSRs_now mip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop core writeback CSRs_now mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+244,"SimTop core writeback CSRs_now mstatus sd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+245,"SimTop core writeback CSRs_now mstatus wpri1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 26,0);
        tracep->declBus(c+246,"SimTop core writeback CSRs_now mstatus sxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+247,"SimTop core writeback CSRs_now mstatus uxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+248,"SimTop core writeback CSRs_now mstatus wpri2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
        tracep->declBit(c+249,"SimTop core writeback CSRs_now mstatus tsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+250,"SimTop core writeback CSRs_now mstatus tw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+251,"SimTop core writeback CSRs_now mstatus tvm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+252,"SimTop core writeback CSRs_now mstatus mxr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+253,"SimTop core writeback CSRs_now mstatus sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+254,"SimTop core writeback CSRs_now mstatus mprv",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+255,"SimTop core writeback CSRs_now mstatus xs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+256,"SimTop core writeback CSRs_now mstatus fs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+257,"SimTop core writeback CSRs_now mstatus mpp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+258,"SimTop core writeback CSRs_now mstatus wpri3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+259,"SimTop core writeback CSRs_now mstatus spp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+260,"SimTop core writeback CSRs_now mstatus mpie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+261,"SimTop core writeback CSRs_now mstatus wpri4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+262,"SimTop core writeback CSRs_now mstatus spie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+263,"SimTop core writeback CSRs_now mstatus upie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+264,"SimTop core writeback CSRs_now mstatus mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+265,"SimTop core writeback CSRs_now mstatus wpri5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+266,"SimTop core writeback CSRs_now mstatus sie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+267,"SimTop core writeback CSRs_now mstatus uie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+268,"SimTop core writeback CSRs_now mscratch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+270,"SimTop core writeback CSRs_now mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+272,"SimTop core writeback CSRs_now satp mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+273,"SimTop core writeback CSRs_now satp asid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declQuad(c+274,"SimTop core writeback CSRs_now satp ppn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 43,0);
        tracep->declQuad(c+276,"SimTop core writeback CSRs_now mcause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+278,"SimTop core writeback CSRs_now mcycle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+280,"SimTop core writeback CSRs_now mtval",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+282,"SimTop core writeback OutCSRs mhartid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop core writeback OutCSRs mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+286,"SimTop core writeback OutCSRs mip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+288,"SimTop core writeback OutCSRs mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+290,"SimTop core writeback OutCSRs mstatus sd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+291,"SimTop core writeback OutCSRs mstatus wpri1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 26,0);
        tracep->declBus(c+292,"SimTop core writeback OutCSRs mstatus sxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+293,"SimTop core writeback OutCSRs mstatus uxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+294,"SimTop core writeback OutCSRs mstatus wpri2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
        tracep->declBit(c+295,"SimTop core writeback OutCSRs mstatus tsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+296,"SimTop core writeback OutCSRs mstatus tw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+297,"SimTop core writeback OutCSRs mstatus tvm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+298,"SimTop core writeback OutCSRs mstatus mxr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+299,"SimTop core writeback OutCSRs mstatus sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+300,"SimTop core writeback OutCSRs mstatus mprv",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+301,"SimTop core writeback OutCSRs mstatus xs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+302,"SimTop core writeback OutCSRs mstatus fs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+303,"SimTop core writeback OutCSRs mstatus mpp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+304,"SimTop core writeback OutCSRs mstatus wpri3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+305,"SimTop core writeback OutCSRs mstatus spp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+306,"SimTop core writeback OutCSRs mstatus mpie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"SimTop core writeback OutCSRs mstatus wpri4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+308,"SimTop core writeback OutCSRs mstatus spie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+309,"SimTop core writeback OutCSRs mstatus upie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+310,"SimTop core writeback OutCSRs mstatus mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+311,"SimTop core writeback OutCSRs mstatus wpri5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+312,"SimTop core writeback OutCSRs mstatus sie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+313,"SimTop core writeback OutCSRs mstatus uie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+314,"SimTop core writeback OutCSRs mscratch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop core writeback OutCSRs mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+318,"SimTop core writeback OutCSRs satp mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+319,"SimTop core writeback OutCSRs satp asid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declQuad(c+320,"SimTop core writeback OutCSRs satp ppn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 43,0);
        tracep->declQuad(c+322,"SimTop core writeback OutCSRs mcause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+324,"SimTop core writeback OutCSRs mcycle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+326,"SimTop core writeback OutCSRs mtval",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+328,"SimTop core writeback mode_now",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+329,"SimTop core writeback Outmode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+498,"SimTop core writeback en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+499,"SimTop core writeback csr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+500,"SimTop core writeback csr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+502,"SimTop core writeback write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+498,"SimTop core writeback RegFile en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+814,"SimTop core writeback RegFile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+502,"SimTop core writeback RegFile in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+90,"SimTop core writeback RegFile rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+91,"SimTop core writeback RegFile rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+144,"SimTop core writeback RegFile rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop core writeback RegFile q1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core writeback RegFile q2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+504+i*2,"SimTop core writeback RegFile OutRegs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+568+i*2,"SimTop core writeback RegFile Regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        tracep->declBit(c+814,"SimTop core writeback CSRs clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop core writeback CSRs rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+499,"SimTop core writeback CSRs en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+151,"SimTop core writeback CSRs st_csr",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+148,"SimTop core writeback CSRs csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+161,"SimTop core writeback CSRs pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop core writeback CSRs code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+171,"SimTop core writeback CSRs fun3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+149,"SimTop core writeback CSRs write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+500,"SimTop core writeback CSRs csr_value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+236,"SimTop core writeback CSRs CSRs_now mhartid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop core writeback CSRs CSRs_now mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core writeback CSRs CSRs_now mip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop core writeback CSRs CSRs_now mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+244,"SimTop core writeback CSRs CSRs_now mstatus sd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+245,"SimTop core writeback CSRs CSRs_now mstatus wpri1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 26,0);
        tracep->declBus(c+246,"SimTop core writeback CSRs CSRs_now mstatus sxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+247,"SimTop core writeback CSRs CSRs_now mstatus uxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+248,"SimTop core writeback CSRs CSRs_now mstatus wpri2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
        tracep->declBit(c+249,"SimTop core writeback CSRs CSRs_now mstatus tsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+250,"SimTop core writeback CSRs CSRs_now mstatus tw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+251,"SimTop core writeback CSRs CSRs_now mstatus tvm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+252,"SimTop core writeback CSRs CSRs_now mstatus mxr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+253,"SimTop core writeback CSRs CSRs_now mstatus sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+254,"SimTop core writeback CSRs CSRs_now mstatus mprv",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+255,"SimTop core writeback CSRs CSRs_now mstatus xs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+256,"SimTop core writeback CSRs CSRs_now mstatus fs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+257,"SimTop core writeback CSRs CSRs_now mstatus mpp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+258,"SimTop core writeback CSRs CSRs_now mstatus wpri3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+259,"SimTop core writeback CSRs CSRs_now mstatus spp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+260,"SimTop core writeback CSRs CSRs_now mstatus mpie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+261,"SimTop core writeback CSRs CSRs_now mstatus wpri4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+262,"SimTop core writeback CSRs CSRs_now mstatus spie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+263,"SimTop core writeback CSRs CSRs_now mstatus upie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+264,"SimTop core writeback CSRs CSRs_now mstatus mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+265,"SimTop core writeback CSRs CSRs_now mstatus wpri5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+266,"SimTop core writeback CSRs CSRs_now mstatus sie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+267,"SimTop core writeback CSRs CSRs_now mstatus uie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+268,"SimTop core writeback CSRs CSRs_now mscratch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+270,"SimTop core writeback CSRs CSRs_now mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+272,"SimTop core writeback CSRs CSRs_now satp mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+273,"SimTop core writeback CSRs CSRs_now satp asid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declQuad(c+274,"SimTop core writeback CSRs CSRs_now satp ppn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 43,0);
        tracep->declQuad(c+276,"SimTop core writeback CSRs CSRs_now mcause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+278,"SimTop core writeback CSRs CSRs_now mcycle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+280,"SimTop core writeback CSRs CSRs_now mtval",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+282,"SimTop core writeback CSRs CSRs_next mhartid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop core writeback CSRs CSRs_next mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+286,"SimTop core writeback CSRs CSRs_next mip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+288,"SimTop core writeback CSRs CSRs_next mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+290,"SimTop core writeback CSRs CSRs_next mstatus sd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+291,"SimTop core writeback CSRs CSRs_next mstatus wpri1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 26,0);
        tracep->declBus(c+292,"SimTop core writeback CSRs CSRs_next mstatus sxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+293,"SimTop core writeback CSRs CSRs_next mstatus uxl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+294,"SimTop core writeback CSRs CSRs_next mstatus wpri2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
        tracep->declBit(c+295,"SimTop core writeback CSRs CSRs_next mstatus tsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+296,"SimTop core writeback CSRs CSRs_next mstatus tw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+297,"SimTop core writeback CSRs CSRs_next mstatus tvm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+298,"SimTop core writeback CSRs CSRs_next mstatus mxr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+299,"SimTop core writeback CSRs CSRs_next mstatus sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+300,"SimTop core writeback CSRs CSRs_next mstatus mprv",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+301,"SimTop core writeback CSRs CSRs_next mstatus xs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+302,"SimTop core writeback CSRs CSRs_next mstatus fs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+303,"SimTop core writeback CSRs CSRs_next mstatus mpp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+304,"SimTop core writeback CSRs CSRs_next mstatus wpri3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+305,"SimTop core writeback CSRs CSRs_next mstatus spp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+306,"SimTop core writeback CSRs CSRs_next mstatus mpie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"SimTop core writeback CSRs CSRs_next mstatus wpri4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+308,"SimTop core writeback CSRs CSRs_next mstatus spie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+309,"SimTop core writeback CSRs CSRs_next mstatus upie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+310,"SimTop core writeback CSRs CSRs_next mstatus mie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+311,"SimTop core writeback CSRs CSRs_next mstatus wpri5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+312,"SimTop core writeback CSRs CSRs_next mstatus sie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+313,"SimTop core writeback CSRs CSRs_next mstatus uie",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+314,"SimTop core writeback CSRs CSRs_next mscratch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop core writeback CSRs CSRs_next mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+318,"SimTop core writeback CSRs CSRs_next satp mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+319,"SimTop core writeback CSRs CSRs_next satp asid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declQuad(c+320,"SimTop core writeback CSRs CSRs_next satp ppn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 43,0);
        tracep->declQuad(c+322,"SimTop core writeback CSRs CSRs_next mcause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+324,"SimTop core writeback CSRs CSRs_next mcycle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+326,"SimTop core writeback CSRs CSRs_next mtval",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+328,"SimTop core writeback CSRs mode_now",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+329,"SimTop core writeback CSRs mode_next",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+236,"SimTop core writeback CSRs CSRs mhartid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop core writeback CSRs CSRs mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core writeback CSRs CSRs mip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop core writeback CSRs CSRs mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+244,"SimTop core writeback CSRs CSRs mstatus sd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+245,"SimTop core writeback CSRs CSRs mstatus wpri1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 26,0);
        tracep->declBus(c+246,"SimTop core writeback CSRs CSRs mstatus sxl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+247,"SimTop core writeback CSRs CSRs mstatus uxl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+248,"SimTop core writeback CSRs CSRs mstatus wpri2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
        tracep->declBit(c+249,"SimTop core writeback CSRs CSRs mstatus tsr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+250,"SimTop core writeback CSRs CSRs mstatus tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+251,"SimTop core writeback CSRs CSRs mstatus tvm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+252,"SimTop core writeback CSRs CSRs mstatus mxr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+253,"SimTop core writeback CSRs CSRs mstatus sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+254,"SimTop core writeback CSRs CSRs mstatus mprv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+255,"SimTop core writeback CSRs CSRs mstatus xs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+256,"SimTop core writeback CSRs CSRs mstatus fs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+257,"SimTop core writeback CSRs CSRs mstatus mpp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+258,"SimTop core writeback CSRs CSRs mstatus wpri3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+259,"SimTop core writeback CSRs CSRs mstatus spp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+260,"SimTop core writeback CSRs CSRs mstatus mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+261,"SimTop core writeback CSRs CSRs mstatus wpri4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+262,"SimTop core writeback CSRs CSRs mstatus spie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+263,"SimTop core writeback CSRs CSRs mstatus upie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+264,"SimTop core writeback CSRs CSRs mstatus mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+265,"SimTop core writeback CSRs CSRs mstatus wpri5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+266,"SimTop core writeback CSRs CSRs mstatus sie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+267,"SimTop core writeback CSRs CSRs mstatus uie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+268,"SimTop core writeback CSRs CSRs mscratch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+270,"SimTop core writeback CSRs CSRs mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+272,"SimTop core writeback CSRs CSRs satp mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+273,"SimTop core writeback CSRs CSRs satp asid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declQuad(c+274,"SimTop core writeback CSRs CSRs satp ppn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 43,0);
        tracep->declQuad(c+276,"SimTop core writeback CSRs CSRs mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+278,"SimTop core writeback CSRs CSRs mcycle",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+280,"SimTop core writeback CSRs CSRs mtval",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+328,"SimTop core writeback CSRs mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declQuad(c+632,"SimTop core writeback CSRs real_write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core HazardDetectior clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop core HazardDetectior rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"SimTop core HazardDetectior update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+80,"SimTop core HazardDetectior wri_finishedpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+136,"SimTop core HazardDetectior exe_finishedpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+333,"SimTop core HazardDetectior pc_prev0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+335,"SimTop core HazardDetectior pc_prev1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+337,"SimTop core HazardDetectior rd_prev0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+338,"SimTop core HazardDetectior rd_prev1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+339,"SimTop core HazardDetectior need_wait0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+340,"SimTop core HazardDetectior need_wait1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+82,"SimTop core HazardDetectior exe_st fun10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+83,"SimTop core HazardDetectior exe_st width",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+84,"SimTop core HazardDetectior exe_st rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+85,"SimTop core HazardDetectior exe_st rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+86,"SimTop core HazardDetectior exe_st pc_calc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"SimTop core HazardDetectior exe_st imm_calc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+118,"SimTop core HazardDetectior fet_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+330,"SimTop core HazardDetectior csr_fet_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+117,"SimTop core HazardDetectior fet_block",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"SimTop core HazardDetectior dec_nop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+64,"SimTop core HazardDetectior exe_nop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"SimTop core HazardDetectior mem_nop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"SimTop core HazardDetectior wri_nop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+328,"SimTop core HazardDetectior mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+272,"SimTop core HazardDetectior satp mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+273,"SimTop core HazardDetectior satp asid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declQuad(c+274,"SimTop core HazardDetectior satp ppn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 43,0);
        tracep->declBit(c+73,"SimTop core HazardDetectior ireq_in valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+74,"SimTop core HazardDetectior ireq_in addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+163,"SimTop core HazardDetectior dreq_in valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+164,"SimTop core HazardDetectior dreq_in addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+166,"SimTop core HazardDetectior dreq_in size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+167,"SimTop core HazardDetectior dreq_in strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+168,"SimTop core HazardDetectior dreq_in data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop core HazardDetectior dresp addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop core HazardDetectior dresp data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"SimTop core HazardDetectior dresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+341,"SimTop core HazardDetectior iaddr_trans_finished",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+342,"SimTop core HazardDetectior daddr_trans_finished",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop core HazardDetectior ireq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop core HazardDetectior ireq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+24,"SimTop core HazardDetectior dreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop core HazardDetectior dreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop core HazardDetectior dreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop core HazardDetectior dreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop core HazardDetectior dreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+634,"SimTop core HazardDetectior wait_wri0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+635,"SimTop core HazardDetectior wait_wri1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+636,"SimTop core HazardDetectior iaddr_trans_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+637,"SimTop core HazardDetectior daddr_trans_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declQuad(c+638,"SimTop core HazardDetectior iphys_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+640,"SimTop core HazardDetectior dphys_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+642,"SimTop core HazardDetectior pte Reserved",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
        tracep->declQuad(c+643,"SimTop core HazardDetectior pte ppn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 43,0);
        tracep->declBus(c+645,"SimTop core HazardDetectior pte RSW",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+646,"SimTop core HazardDetectior pte D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+647,"SimTop core HazardDetectior pte A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+648,"SimTop core HazardDetectior pte G",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+649,"SimTop core HazardDetectior pte U",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+650,"SimTop core HazardDetectior pte X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+651,"SimTop core HazardDetectior pte W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+652,"SimTop core HazardDetectior pte R",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+653,"SimTop core HazardDetectior pte V",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+814,"SimTop core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+830,"SimTop core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+830,"SimTop core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+654,"SimTop core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+161,"SimTop core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+154,"SimTop core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+655,"SimTop core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+831,"SimTop core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+831,"SimTop core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+656,"SimTop core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+657,"SimTop core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+146,"SimTop core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+830,"SimTop core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+658,"SimTop core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+660,"SimTop core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+662,"SimTop core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+664,"SimTop core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+666,"SimTop core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+668,"SimTop core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+670,"SimTop core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+672,"SimTop core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+674,"SimTop core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+676,"SimTop core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+678,"SimTop core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+680,"SimTop core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+682,"SimTop core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+684,"SimTop core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+686,"SimTop core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+688,"SimTop core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+690,"SimTop core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+692,"SimTop core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+694,"SimTop core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+696,"SimTop core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+698,"SimTop core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+700,"SimTop core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+702,"SimTop core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+704,"SimTop core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+706,"SimTop core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+708,"SimTop core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+710,"SimTop core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+712,"SimTop core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+714,"SimTop core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+716,"SimTop core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+718,"SimTop core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+720,"SimTop core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+830,"SimTop core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+831,"SimTop core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+832,"SimTop core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+833,"SimTop core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+814,"SimTop core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+830,"SimTop core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+329,"SimTop core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+722,"SimTop core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+724,"SimTop core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+326,"SimTop core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+288,"SimTop core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+322,"SimTop core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+726,"SimTop core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+286,"SimTop core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+314,"SimTop core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+833,"SimTop core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+18,"SimTop icvt ireq valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop icvt ireq addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop icvt iresp addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop icvt iresp data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop icvt iresp data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+35,"SimTop icvt icreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+36,"SimTop icvt icreq is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+37,"SimTop icvt icreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+38,"SimTop icvt icreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+40,"SimTop icvt icreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+41,"SimTop icvt icreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+43,"SimTop icvt icreq len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+44,"SimTop icvt icreq burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop icvt icresp ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop icvt icresp last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+57,"SimTop icvt icresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+728,"SimTop icvt dresp addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+729,"SimTop icvt dresp data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+730,"SimTop icvt dresp data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+732,"SimTop icvt inst dreq valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+733,"SimTop icvt inst dreq addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+835,"SimTop icvt inst dreq size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+836,"SimTop icvt inst dreq strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+837,"SimTop icvt inst dreq data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+728,"SimTop icvt inst dresp addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+729,"SimTop icvt inst dresp data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+730,"SimTop icvt inst dresp data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+35,"SimTop icvt inst dcreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+36,"SimTop icvt inst dcreq is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+37,"SimTop icvt inst dcreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+38,"SimTop icvt inst dcreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+40,"SimTop icvt inst dcreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+41,"SimTop icvt inst dcreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+43,"SimTop icvt inst dcreq len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+44,"SimTop icvt inst dcreq burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop icvt inst dcresp ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop icvt inst dcresp last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+57,"SimTop icvt inst dcresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+735,"SimTop icvt inst okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+24,"SimTop dcvt dreq valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop dcvt dreq addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop dcvt dreq size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop dcvt dreq strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop dcvt dreq data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop dcvt dresp addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop dcvt dresp data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"SimTop dcvt dresp data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+45,"SimTop dcvt dcreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"SimTop dcvt dcreq is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+47,"SimTop dcvt dcreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+48,"SimTop dcvt dcreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+50,"SimTop dcvt dcreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+51,"SimTop dcvt dcreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+53,"SimTop dcvt dcreq len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+54,"SimTop dcvt dcreq burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+59,"SimTop dcvt dcresp ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+60,"SimTop dcvt dcresp last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+61,"SimTop dcvt dcresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+736,"SimTop dcvt okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+814,"SimTop mux clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop mux reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+737,"SimTop mux ireqs(0) valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+738,"SimTop mux ireqs(0) is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+739,"SimTop mux ireqs(0) size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+740,"SimTop mux ireqs(0) addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+742,"SimTop mux ireqs(0) strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+743,"SimTop mux ireqs(0) data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+745,"SimTop mux ireqs(0) len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+746,"SimTop mux ireqs(0) burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+747,"SimTop mux ireqs(1) valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+748,"SimTop mux ireqs(1) is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+749,"SimTop mux ireqs(1) size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+750,"SimTop mux ireqs(1) addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+752,"SimTop mux ireqs(1) strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+753,"SimTop mux ireqs(1) data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+755,"SimTop mux ireqs(1) len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+756,"SimTop mux ireqs(1) burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+59,"SimTop mux iresps(0) ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+60,"SimTop mux iresps(0) last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+61,"SimTop mux iresps(0) data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+55,"SimTop mux iresps(1) ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop mux iresps(1) last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+57,"SimTop mux iresps(1) data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1,"SimTop mux oreq valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop mux oreq is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+3,"SimTop mux oreq size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop mux oreq addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop mux oreq strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop mux oreq data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+9,"SimTop mux oreq len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"SimTop mux oreq burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop mux oresp ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"SimTop mux oresp last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+13,"SimTop mux oresp data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+757,"SimTop mux busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+758,"SimTop mux index",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+759,"SimTop mux select",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+760,"SimTop mux saved_req valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+761,"SimTop mux saved_req is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+762,"SimTop mux saved_req size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+763,"SimTop mux saved_req addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+765,"SimTop mux saved_req strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+766,"SimTop mux saved_req data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+768,"SimTop mux saved_req len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+769,"SimTop mux saved_req burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+770,"SimTop mux selected_req valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+771,"SimTop mux selected_req is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+772,"SimTop mux selected_req size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+773,"SimTop mux selected_req addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+775,"SimTop mux selected_req strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+776,"SimTop mux selected_req data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+778,"SimTop mux selected_req len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+779,"SimTop mux selected_req burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+780,"SimTop mux unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+781,"SimTop mux unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+814,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+815,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"SimTop ram oreq valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop ram oreq is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+3,"SimTop ram oreq size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop ram oreq addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop ram oreq strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop ram oreq data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+9,"SimTop ram oreq len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"SimTop ram oreq burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop ram oresp ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"SimTop ram oresp last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+13,"SimTop ram oresp data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop ram trint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"SimTop ram swint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop ram exint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+782,"SimTop ram saved_oreq valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+783,"SimTop ram saved_oreq is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+784,"SimTop ram saved_oreq size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+785,"SimTop ram saved_oreq addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+787,"SimTop ram saved_oreq strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+788,"SimTop ram saved_oreq data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+790,"SimTop ram saved_oreq len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+791,"SimTop ram saved_oreq burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"NONE", "WAIT", "READ", "WRITE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(7, "RAMHelper2.__typeimpenum21", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+792,"SimTop ram state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+793,"SimTop ram count_down",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+794,"SimTop ram size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declQuad(c+795,"SimTop ram addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+797,"SimTop ram idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+799,"SimTop ram wrap1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+801,"SimTop ram wrap2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+803,"SimTop ram cyc_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+805,"SimTop ram ms_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+807,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+809,"SimTop ram mtime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+811,"SimTop ram mtimecmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+813,"SimTop ram msip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    }
}

void VSimTop::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSimTop::traceFullTop0(void* userp, VerilatedFst* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSimTop::traceFullSub0(void* userp, VerilatedFst* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (vlTOPp->SimTop__DOT__oreq[4U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+2,((1U & (vlTOPp->SimTop__DOT__oreq[4U] 
                                       >> 0x15U))));
        tracep->fullCData(oldp+3,((7U & (vlTOPp->SimTop__DOT__oreq[4U] 
                                         >> 0x12U))),3);
        tracep->fullQData(oldp+4,((((QData)((IData)(
                                                    vlTOPp->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U)))),64);
        tracep->fullCData(oldp+6,((0xffU & ((vlTOPp->SimTop__DOT__oreq[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->SimTop__DOT__oreq[2U] 
                                               >> 0xaU)))),8);
        tracep->fullQData(oldp+7,((((QData)((IData)(
                                                    vlTOPp->SimTop__DOT__oreq[2U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__oreq[1U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__oreq[0U])) 
                                                    >> 0xaU)))),64);
        tracep->fullCData(oldp+9,((0xffU & ((vlTOPp->SimTop__DOT__oreq[1U] 
                                             << 0x1eU) 
                                            | (vlTOPp->SimTop__DOT__oreq[0U] 
                                               >> 2U)))),8);
        tracep->fullCData(oldp+10,((3U & vlTOPp->SimTop__DOT__oreq[0U])),2);
        tracep->fullBit(oldp+11,((1U & (vlTOPp->SimTop__DOT__oresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+12,((1U & vlTOPp->SimTop__DOT__oresp[2U])));
        tracep->fullQData(oldp+13,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__oresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__oresp[0U])))),64);
        tracep->fullBit(oldp+15,(vlTOPp->SimTop__DOT__trint));
        tracep->fullBit(oldp+16,(vlTOPp->SimTop__DOT__swint));
        tracep->fullBit(oldp+17,(vlTOPp->SimTop__DOT__exint));
        tracep->fullBit(oldp+18,((1U & vlTOPp->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+19,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__ireq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+21,((1U & (IData)((vlTOPp->SimTop__DOT__iresp 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+22,((1U & (IData)((vlTOPp->SimTop__DOT__iresp 
                                                >> 0x20U)))));
        tracep->fullIData(oldp+23,((IData)(vlTOPp->SimTop__DOT__iresp)),32);
        tracep->fullBit(oldp+24,((1U & (vlTOPp->SimTop__DOT__dreq[4U] 
                                        >> 0xbU))));
        tracep->fullQData(oldp+25,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__dreq[4U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__dreq[3U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__dreq[2U])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+27,((7U & ((vlTOPp->SimTop__DOT__dreq[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->SimTop__DOT__dreq[2U] 
                                             >> 8U)))),3);
        tracep->fullCData(oldp+28,((0xffU & vlTOPp->SimTop__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+29,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+31,((1U & (vlTOPp->SimTop__DOT__dresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+32,((1U & vlTOPp->SimTop__DOT__dresp[2U])));
        tracep->fullQData(oldp+33,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__dresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+35,((1U & (vlTOPp->SimTop__DOT__icreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+36,((1U & (vlTOPp->SimTop__DOT__icreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+37,((7U & (vlTOPp->SimTop__DOT__icreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+38,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__icreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__icreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__icreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+40,((0xffU & ((vlTOPp->SimTop__DOT__icreq[3U] 
                                              << 0x16U) 
                                             | (vlTOPp->SimTop__DOT__icreq[2U] 
                                                >> 0xaU)))),8);
        tracep->fullQData(oldp+41,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__icreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__icreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__icreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+43,((0xffU & ((vlTOPp->SimTop__DOT__icreq[1U] 
                                              << 0x1eU) 
                                             | (vlTOPp->SimTop__DOT__icreq[0U] 
                                                >> 2U)))),8);
        tracep->fullCData(oldp+44,((3U & vlTOPp->SimTop__DOT__icreq[0U])),2);
        tracep->fullBit(oldp+45,((1U & (vlTOPp->SimTop__DOT__dcreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+46,((1U & (vlTOPp->SimTop__DOT__dcreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+47,((7U & (vlTOPp->SimTop__DOT__dcreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__dcreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__dcreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__dcreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+50,((0xffU & ((vlTOPp->SimTop__DOT__dcreq[3U] 
                                              << 0x16U) 
                                             | (vlTOPp->SimTop__DOT__dcreq[2U] 
                                                >> 0xaU)))),8);
        tracep->fullQData(oldp+51,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__dcreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__dcreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__dcreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+53,((0xffU & ((vlTOPp->SimTop__DOT__dcreq[1U] 
                                              << 0x1eU) 
                                             | (vlTOPp->SimTop__DOT__dcreq[0U] 
                                                >> 2U)))),8);
        tracep->fullCData(oldp+54,((3U & vlTOPp->SimTop__DOT__dcreq[0U])),2);
        tracep->fullBit(oldp+55,((1U & (vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 3U))));
        tracep->fullBit(oldp+56,((1U & (vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 2U))));
        tracep->fullQData(oldp+57,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                     >> 2U)))),64);
        tracep->fullBit(oldp+59,((1U & (vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+60,((1U & vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U])));
        tracep->fullQData(oldp+61,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
        tracep->fullBit(oldp+63,(vlTOPp->SimTop__DOT__core__DOT__dec_nop));
        tracep->fullBit(oldp+64,(vlTOPp->SimTop__DOT__core__DOT__exe_nop));
        tracep->fullBit(oldp+65,(vlTOPp->SimTop__DOT__core__DOT__mem_nop));
        tracep->fullBit(oldp+66,(vlTOPp->SimTop__DOT__core__DOT__wri_nop));
        tracep->fullQData(oldp+67,(vlTOPp->SimTop__DOT__core__DOT__dec_imm),64);
        tracep->fullIData(oldp+69,(vlTOPp->SimTop__DOT__core__DOT__func),32);
        tracep->fullBit(oldp+70,(((IData)(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_fetched) 
                                  | (IData)(vlTOPp->SimTop__DOT__core__DOT__fet_block))));
        tracep->fullQData(oldp+71,(vlTOPp->SimTop__DOT__core__DOT__dec_pc),64);
        tracep->fullBit(oldp+73,((1U & vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U])));
        tracep->fullQData(oldp+74,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U])))),64);
        tracep->fullCData(oldp+76,((3U & vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[2U])),2);
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[0U])))),64);
        tracep->fullBit(oldp+79,(vlTOPp->SimTop__DOT__core__DOT__update));
        tracep->fullQData(oldp+80,(vlTOPp->SimTop__DOT__core__DOT__wri_finishedpc),64);
        tracep->fullSData(oldp+82,((0x3ffU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                              >> 0xdU))),10);
        tracep->fullBit(oldp+83,((1U & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                        >> 0xcU))));
        tracep->fullCData(oldp+84,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                             >> 7U))),5);
        tracep->fullCData(oldp+85,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                             >> 2U))),5);
        tracep->fullBit(oldp+86,((1U & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                        >> 1U))));
        tracep->fullBit(oldp+87,((1U & vlTOPp->SimTop__DOT__core__DOT__dec_exe_st)));
        tracep->fullSData(oldp+88,((0x3ffU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                              >> 0xdU))),10);
        tracep->fullBit(oldp+89,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                        >> 0xcU))));
        tracep->fullCData(oldp+90,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                             >> 7U))),5);
        tracep->fullCData(oldp+91,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                             >> 2U))),5);
        tracep->fullBit(oldp+92,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                        >> 1U))));
        tracep->fullBit(oldp+93,((1U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)));
        tracep->fullBit(oldp+94,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[4U] 
                                        >> 1U))));
        tracep->fullBit(oldp+95,((1U & vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[4U])));
        tracep->fullQData(oldp+96,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[2U])))),64);
        tracep->fullQData(oldp+98,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[0U])))),64);
        tracep->fullCData(oldp+100,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[7U] 
                                              >> 0x12U))),5);
        tracep->fullCData(oldp+101,((7U & (vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[7U] 
                                           >> 0xfU))),3);
        tracep->fullQData(oldp+102,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[7U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[6U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[5U])) 
                                                      >> 0xfU)))),64);
        tracep->fullSData(oldp+104,((0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[6U] 
                                                << 0x1dU) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[5U] 
                                                  >> 3U)))),12);
        tracep->fullQData(oldp+105,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[5U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[4U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[3U])) 
                                                      >> 3U)))),64);
        tracep->fullCData(oldp+107,((7U & vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[3U])),3);
        tracep->fullQData(oldp+108,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[1U])))),64);
        tracep->fullIData(oldp+110,(vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[0U]),32);
        tracep->fullCData(oldp+111,((3U & vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U])),2);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[0U])))),64);
        tracep->fullCData(oldp+114,(vlTOPp->SimTop__DOT__core__DOT__exe_fun3),3);
        tracep->fullQData(oldp+115,(vlTOPp->SimTop__DOT__core__DOT__exe_pc),64);
        tracep->fullBit(oldp+117,(vlTOPp->SimTop__DOT__core__DOT__fet_block));
        tracep->fullBit(oldp+118,(vlTOPp->SimTop__DOT__core__DOT__fet_clear));
        tracep->fullBit(oldp+119,((1U & (vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U] 
                                         >> 1U))));
        tracep->fullBit(oldp+120,((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])));
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])))),64);
        tracep->fullQData(oldp+123,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])))),64);
        tracep->fullCData(oldp+125,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[7U] 
                                              >> 0x12U))),5);
        tracep->fullCData(oldp+126,((7U & (vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[7U] 
                                           >> 0xfU))),3);
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[7U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[6U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[5U])) 
                                                      >> 0xfU)))),64);
        tracep->fullSData(oldp+129,((0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[6U] 
                                                << 0x1dU) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[5U] 
                                                  >> 3U)))),12);
        tracep->fullQData(oldp+130,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[5U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[4U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[3U])) 
                                                      >> 3U)))),64);
        tracep->fullCData(oldp+132,((7U & vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[3U])),3);
        tracep->fullQData(oldp+133,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[1U])))),64);
        tracep->fullIData(oldp+135,(vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[0U]),32);
        tracep->fullQData(oldp+136,(vlTOPp->SimTop__DOT__core__DOT__mem_pc),64);
        tracep->fullCData(oldp+138,(vlTOPp->SimTop__DOT__core__DOT__mem_fun3),3);
        tracep->fullQData(oldp+139,(vlTOPp->SimTop__DOT__core__DOT__valA),64);
        tracep->fullQData(oldp+141,(vlTOPp->SimTop__DOT__core__DOT__valB),64);
        tracep->fullBit(oldp+143,(vlTOPp->SimTop__DOT__core__DOT__exe_finished));
        tracep->fullCData(oldp+144,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                              >> 0x12U))),5);
        tracep->fullCData(oldp+145,((7U & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                           >> 0xfU))),3);
        tracep->fullQData(oldp+146,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                                                      >> 0xfU)))),64);
        tracep->fullSData(oldp+148,((0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                << 0x1dU) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                  >> 3U)))),12);
        tracep->fullQData(oldp+149,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[4U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])) 
                                                      >> 3U)))),64);
        tracep->fullCData(oldp+151,((7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])),3);
        tracep->fullQData(oldp+152,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[1U])))),64);
        tracep->fullIData(oldp+154,(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[0U]),32);
        tracep->fullBit(oldp+155,((1U & (vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U] 
                                         >> 1U))));
        tracep->fullBit(oldp+156,((1U & vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U])));
        tracep->fullQData(oldp+157,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[2U])))),64);
        tracep->fullQData(oldp+159,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[0U])))),64);
        tracep->fullQData(oldp+161,(vlTOPp->SimTop__DOT__core__DOT__wri_pc),64);
        tracep->fullBit(oldp+163,((1U & (vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U] 
                                         >> 0xbU))));
        tracep->fullQData(oldp+164,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+166,((7U & ((vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U] 
                                            << 0x18U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                              >> 8U)))),3);
        tracep->fullCData(oldp+167,((0xffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U])),8);
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U])))),64);
        tracep->fullBit(oldp+170,((1U & (((IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_fetched) 
                                          | (IData)(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop)) 
                                         | (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_op))))));
        tracep->fullCData(oldp+171,(vlTOPp->SimTop__DOT__core__DOT__wri_fun3),3);
        tracep->fullQData(oldp+172,(vlTOPp->SimTop__DOT__core__DOT__Regs[0]),64);
        tracep->fullQData(oldp+174,(vlTOPp->SimTop__DOT__core__DOT__Regs[1]),64);
        tracep->fullQData(oldp+176,(vlTOPp->SimTop__DOT__core__DOT__Regs[2]),64);
        tracep->fullQData(oldp+178,(vlTOPp->SimTop__DOT__core__DOT__Regs[3]),64);
        tracep->fullQData(oldp+180,(vlTOPp->SimTop__DOT__core__DOT__Regs[4]),64);
        tracep->fullQData(oldp+182,(vlTOPp->SimTop__DOT__core__DOT__Regs[5]),64);
        tracep->fullQData(oldp+184,(vlTOPp->SimTop__DOT__core__DOT__Regs[6]),64);
        tracep->fullQData(oldp+186,(vlTOPp->SimTop__DOT__core__DOT__Regs[7]),64);
        tracep->fullQData(oldp+188,(vlTOPp->SimTop__DOT__core__DOT__Regs[8]),64);
        tracep->fullQData(oldp+190,(vlTOPp->SimTop__DOT__core__DOT__Regs[9]),64);
        tracep->fullQData(oldp+192,(vlTOPp->SimTop__DOT__core__DOT__Regs[10]),64);
        tracep->fullQData(oldp+194,(vlTOPp->SimTop__DOT__core__DOT__Regs[11]),64);
        tracep->fullQData(oldp+196,(vlTOPp->SimTop__DOT__core__DOT__Regs[12]),64);
        tracep->fullQData(oldp+198,(vlTOPp->SimTop__DOT__core__DOT__Regs[13]),64);
        tracep->fullQData(oldp+200,(vlTOPp->SimTop__DOT__core__DOT__Regs[14]),64);
        tracep->fullQData(oldp+202,(vlTOPp->SimTop__DOT__core__DOT__Regs[15]),64);
        tracep->fullQData(oldp+204,(vlTOPp->SimTop__DOT__core__DOT__Regs[16]),64);
        tracep->fullQData(oldp+206,(vlTOPp->SimTop__DOT__core__DOT__Regs[17]),64);
        tracep->fullQData(oldp+208,(vlTOPp->SimTop__DOT__core__DOT__Regs[18]),64);
        tracep->fullQData(oldp+210,(vlTOPp->SimTop__DOT__core__DOT__Regs[19]),64);
        tracep->fullQData(oldp+212,(vlTOPp->SimTop__DOT__core__DOT__Regs[20]),64);
        tracep->fullQData(oldp+214,(vlTOPp->SimTop__DOT__core__DOT__Regs[21]),64);
        tracep->fullQData(oldp+216,(vlTOPp->SimTop__DOT__core__DOT__Regs[22]),64);
        tracep->fullQData(oldp+218,(vlTOPp->SimTop__DOT__core__DOT__Regs[23]),64);
        tracep->fullQData(oldp+220,(vlTOPp->SimTop__DOT__core__DOT__Regs[24]),64);
        tracep->fullQData(oldp+222,(vlTOPp->SimTop__DOT__core__DOT__Regs[25]),64);
        tracep->fullQData(oldp+224,(vlTOPp->SimTop__DOT__core__DOT__Regs[26]),64);
        tracep->fullQData(oldp+226,(vlTOPp->SimTop__DOT__core__DOT__Regs[27]),64);
        tracep->fullQData(oldp+228,(vlTOPp->SimTop__DOT__core__DOT__Regs[28]),64);
        tracep->fullQData(oldp+230,(vlTOPp->SimTop__DOT__core__DOT__Regs[29]),64);
        tracep->fullQData(oldp+232,(vlTOPp->SimTop__DOT__core__DOT__Regs[30]),64);
        tracep->fullQData(oldp+234,(vlTOPp->SimTop__DOT__core__DOT__Regs[31]),64);
        tracep->fullQData(oldp+236,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x14U])))),64);
        tracep->fullQData(oldp+238,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x12U])))),64);
        tracep->fullQData(oldp+240,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x10U])))),64);
        tracep->fullQData(oldp+242,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU])))),64);
        tracep->fullBit(oldp+244,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                         >> 0x1fU))));
        tracep->fullIData(oldp+245,((0x7ffffffU & (
                                                   (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                                      >> 4U)))),27);
        tracep->fullCData(oldp+246,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU] 
                                            << 0x1eU) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                              >> 2U)))),2);
        tracep->fullCData(oldp+247,((3U & vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU])),2);
        tracep->fullSData(oldp+248,((0x1ffU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                                << 9U) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                                  >> 0x17U)))),9);
        tracep->fullBit(oldp+249,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+250,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+251,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+252,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+253,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 0x12U))));
        tracep->fullBit(oldp+254,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+255,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                            << 0x11U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                              >> 0xfU)))),2);
        tracep->fullCData(oldp+256,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                            << 0x13U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                              >> 0xdU)))),2);
        tracep->fullCData(oldp+257,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                            << 0x15U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                              >> 0xbU)))),2);
        tracep->fullCData(oldp+258,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                            << 0x17U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                              >> 9U)))),2);
        tracep->fullBit(oldp+259,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 8U))));
        tracep->fullBit(oldp+260,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 7U))));
        tracep->fullBit(oldp+261,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 6U))));
        tracep->fullBit(oldp+262,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 5U))));
        tracep->fullBit(oldp+263,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 4U))));
        tracep->fullBit(oldp+264,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 3U))));
        tracep->fullBit(oldp+265,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 2U))));
        tracep->fullBit(oldp+266,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                         >> 1U))));
        tracep->fullBit(oldp+267,((1U & vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU])));
        tracep->fullQData(oldp+268,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xaU])))),64);
        tracep->fullQData(oldp+270,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U])))),64);
        tracep->fullCData(oldp+272,((0xfU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                                              << 4U) 
                                             | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                                >> 0x1cU)))),4);
        tracep->fullSData(oldp+273,((0xffffU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                                                 << 0x14U) 
                                                | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                                   >> 0xcU)))),16);
        tracep->fullQData(oldp+274,((0xfffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[6U]))))),44);
        tracep->fullQData(oldp+276,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[4U])))),64);
        tracep->fullQData(oldp+278,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[2U])))),64);
        tracep->fullQData(oldp+280,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0U])))),64);
        tracep->fullQData(oldp+282,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0x14U])))),64);
        tracep->fullQData(oldp+284,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0x12U])))),64);
        tracep->fullQData(oldp+286,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0x10U])))),64);
        tracep->fullQData(oldp+288,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU])))),64);
        tracep->fullBit(oldp+290,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                         >> 0x1fU))));
        tracep->fullIData(oldp+291,((0x7ffffffU & (
                                                   (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                                      >> 4U)))),27);
        tracep->fullCData(oldp+292,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU] 
                                            << 0x1eU) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                              >> 2U)))),2);
        tracep->fullCData(oldp+293,((3U & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU])),2);
        tracep->fullSData(oldp+294,((0x1ffU & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                                << 9U) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                                  >> 0x17U)))),9);
        tracep->fullBit(oldp+295,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+296,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+297,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+298,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+299,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 0x12U))));
        tracep->fullBit(oldp+300,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+301,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                            << 0x11U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                              >> 0xfU)))),2);
        tracep->fullCData(oldp+302,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                            << 0x13U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                              >> 0xdU)))),2);
        tracep->fullCData(oldp+303,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                            << 0x15U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                              >> 0xbU)))),2);
        tracep->fullCData(oldp+304,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                            << 0x17U) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                              >> 9U)))),2);
        tracep->fullBit(oldp+305,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 8U))));
        tracep->fullBit(oldp+306,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 7U))));
        tracep->fullBit(oldp+307,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 6U))));
        tracep->fullBit(oldp+308,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 5U))));
        tracep->fullBit(oldp+309,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 4U))));
        tracep->fullBit(oldp+310,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 3U))));
        tracep->fullBit(oldp+311,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 2U))));
        tracep->fullBit(oldp+312,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                         >> 1U))));
        tracep->fullBit(oldp+313,((1U & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU])));
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0xaU])))),64);
        tracep->fullQData(oldp+316,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[8U])))),64);
        tracep->fullCData(oldp+318,((0xfU & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[8U] 
                                              << 4U) 
                                             | (vlTOPp->SimTop__DOT__core__DOT__CSRs[7U] 
                                                >> 0x1cU)))),4);
        tracep->fullSData(oldp+319,((0xffffU & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[8U] 
                                                 << 0x14U) 
                                                | (vlTOPp->SimTop__DOT__core__DOT__CSRs[7U] 
                                                   >> 0xcU)))),16);
        tracep->fullQData(oldp+320,((0xfffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[6U]))))),44);
        tracep->fullQData(oldp+322,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[4U])))),64);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[2U])))),64);
        tracep->fullQData(oldp+326,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0U])))),64);
        tracep->fullCData(oldp+328,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode),2);
        tracep->fullCData(oldp+329,(vlTOPp->SimTop__DOT__core__DOT__mode),2);
        tracep->fullBit(oldp+330,(vlTOPp->SimTop__DOT__core__DOT__csr_fet_clear));
        tracep->fullQData(oldp+331,(((3U == (7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))
                                      ? (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[9U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->SimTop__DOT__core__DOT__CSRs[8U])))
                                      : ((4U == (7U 
                                                 & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))
                                          ? (((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__CSRs[0xfU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU])))
                                          : (4ULL + vlTOPp->SimTop__DOT__core__DOT__wri_pc)))),64);
        tracep->fullQData(oldp+333,(vlTOPp->SimTop__DOT__core__DOT__pc_prev0),64);
        tracep->fullQData(oldp+335,(vlTOPp->SimTop__DOT__core__DOT__pc_prev1),64);
        tracep->fullCData(oldp+337,(vlTOPp->SimTop__DOT__core__DOT__rd_prev0),5);
        tracep->fullCData(oldp+338,(vlTOPp->SimTop__DOT__core__DOT__rd_prev1),5);
        tracep->fullBit(oldp+339,(vlTOPp->SimTop__DOT__core__DOT__need_wait0));
        tracep->fullBit(oldp+340,(vlTOPp->SimTop__DOT__core__DOT__need_wait1));
        tracep->fullBit(oldp+341,(vlTOPp->SimTop__DOT__core__DOT__iaddr_trans_finished));
        tracep->fullBit(oldp+342,(vlTOPp->SimTop__DOT__core__DOT__daddr_trans_finished));
        tracep->fullQData(oldp+343,(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__pc_now),64);
        tracep->fullBit(oldp+345,(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_fetched));
        tracep->fullIData(oldp+346,(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_tmp),32);
        tracep->fullBit(oldp+347,(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__decode__fet_clear));
        tracep->fullBit(oldp+348,((1U & (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U] 
                                         >> 1U))));
        tracep->fullBit(oldp+349,((1U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U])));
        tracep->fullQData(oldp+350,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[2U])))),64);
        tracep->fullQData(oldp+352,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[0U])))),64);
        tracep->fullCData(oldp+354,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U] 
                                              >> 0x12U))),5);
        tracep->fullCData(oldp+355,((7U & (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U] 
                                           >> 0xfU))),3);
        tracep->fullQData(oldp+356,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[6U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U])) 
                                                      >> 0xfU)))),64);
        tracep->fullSData(oldp+358,((0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[6U] 
                                                << 0x1dU) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U] 
                                                  >> 3U)))),12);
        tracep->fullQData(oldp+359,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[4U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[3U])) 
                                                      >> 3U)))),64);
        tracep->fullCData(oldp+361,((7U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[3U])),3);
        tracep->fullQData(oldp+362,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[1U])))),64);
        tracep->fullIData(oldp+364,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[0U]),32);
        tracep->fullCData(oldp+365,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__st_pc),2);
        tracep->fullCData(oldp+366,((7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+367,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__imm_now),64);
        tracep->fullBit(oldp+369,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__dec_nop));
        tracep->fullSData(oldp+370,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10),10);
        tracep->fullBit(oldp+371,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width));
        tracep->fullCData(oldp+372,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__func 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+373,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__func 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+374,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__func 
                                              >> 7U))),5);
        tracep->fullSData(oldp+375,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__csr_rd),12);
        tracep->fullQData(oldp+376,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code),64);
        tracep->fullBit(oldp+378,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__imm_calc));
        tracep->fullBit(oldp+379,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read));
        tracep->fullBit(oldp+380,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write));
        tracep->fullCData(oldp+381,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_rd),3);
        tracep->fullCData(oldp+382,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr),3);
        tracep->fullBit(oldp+383,(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop));
        tracep->fullQData(oldp+384,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out),64);
        tracep->fullCData(oldp+386,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__cnt),7);
        tracep->fullBit(oldp+387,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__reseted));
        tracep->fullQData(oldp+388,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__B),64);
        tracep->fullBit(oldp+390,((1U & ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                          >> 0x16U) 
                                         | ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                             >> 0x15U) 
                                            | ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                >> 0x14U) 
                                               | ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                   >> 0x13U) 
                                                  | ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                      >> 0x12U) 
                                                     | ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                         >> 0x11U) 
                                                        | ((~ 
                                                            (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                             >> 0x10U)) 
                                                           | ((0x8000U 
                                                               & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                               ? (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish)
                                                               : 
                                                              ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                                >> 0xeU) 
                                                               | ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                                   >> 0xdU) 
                                                                  | (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish))))))))))))));
        tracep->fullBit(oldp+391,((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out)));
        tracep->fullCData(oldp+392,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__st_pc),2);
        tracep->fullBit(oldp+393,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__data_calculated));
        tracep->fullBit(oldp+394,((1U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)));
        tracep->fullSData(oldp+395,((0x3ffU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                               >> 0xdU))),10);
        tracep->fullBit(oldp+396,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                         >> 0xcU))));
        tracep->fullQData(oldp+397,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA),64);
        tracep->fullQData(oldp+399,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB),64);
        tracep->fullQData(oldp+401,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans),64);
        tracep->fullCData(oldp+403,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB),6);
        tracep->fullQData(oldp+404,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out),64);
        tracep->fullQData(oldp+406,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem),64);
        tracep->fullBit(oldp+408,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish));
        tracep->fullBit(oldp+409,((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                            >> 0xdU)))));
        tracep->fullBit(oldp+410,((0U != (7U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                >> 0xdU)))));
        tracep->fullBit(oldp+411,(((0x2000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                    ? 0U : (1U & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                              >> 0x3fU))) 
                                                  ^ 
                                                  (1U 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB 
                                                              >> 0x3fU))))))));
        tracep->fullQData(oldp+412,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA),64);
        tracep->fullQData(oldp+414,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB),64);
        tracep->fullWData(oldp+416,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R),129);
        tracep->fullWData(oldp+421,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__D),65);
        tracep->fullBit(oldp+424,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__muldivfinished));
        tracep->fullBit(oldp+425,(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop));
        tracep->fullQData(oldp+426,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data),64);
        tracep->fullBit(oldp+428,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_op));
        tracep->fullBit(oldp+429,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_fetched));
        tracep->fullQData(oldp+430,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data),64);
        tracep->fullBit(oldp+432,((1U & (vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U] 
                                         >> 1U))));
        tracep->fullBit(oldp+433,((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])));
        tracep->fullQData(oldp+434,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0]),64);
        tracep->fullQData(oldp+436,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[1]),64);
        tracep->fullQData(oldp+438,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[2]),64);
        tracep->fullQData(oldp+440,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[3]),64);
        tracep->fullQData(oldp+442,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[4]),64);
        tracep->fullQData(oldp+444,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[5]),64);
        tracep->fullQData(oldp+446,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[6]),64);
        tracep->fullQData(oldp+448,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[7]),64);
        tracep->fullQData(oldp+450,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[8]),64);
        tracep->fullQData(oldp+452,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[9]),64);
        tracep->fullQData(oldp+454,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[10]),64);
        tracep->fullQData(oldp+456,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[11]),64);
        tracep->fullQData(oldp+458,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[12]),64);
        tracep->fullQData(oldp+460,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[13]),64);
        tracep->fullQData(oldp+462,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[14]),64);
        tracep->fullQData(oldp+464,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[15]),64);
        tracep->fullQData(oldp+466,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[16]),64);
        tracep->fullQData(oldp+468,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[17]),64);
        tracep->fullQData(oldp+470,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[18]),64);
        tracep->fullQData(oldp+472,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[19]),64);
        tracep->fullQData(oldp+474,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[20]),64);
        tracep->fullQData(oldp+476,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[21]),64);
        tracep->fullQData(oldp+478,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[22]),64);
        tracep->fullQData(oldp+480,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[23]),64);
        tracep->fullQData(oldp+482,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[24]),64);
        tracep->fullQData(oldp+484,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[25]),64);
        tracep->fullQData(oldp+486,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[26]),64);
        tracep->fullQData(oldp+488,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[27]),64);
        tracep->fullQData(oldp+490,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[28]),64);
        tracep->fullQData(oldp+492,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[29]),64);
        tracep->fullQData(oldp+494,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[30]),64);
        tracep->fullQData(oldp+496,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[31]),64);
        tracep->fullBit(oldp+498,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__en));
        tracep->fullBit(oldp+499,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_en));
        tracep->fullQData(oldp+500,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_value),64);
        tracep->fullQData(oldp+502,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__write_data),64);
        tracep->fullQData(oldp+504,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0]),64);
        tracep->fullQData(oldp+506,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[1]),64);
        tracep->fullQData(oldp+508,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[2]),64);
        tracep->fullQData(oldp+510,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[3]),64);
        tracep->fullQData(oldp+512,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[4]),64);
        tracep->fullQData(oldp+514,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[5]),64);
        tracep->fullQData(oldp+516,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[6]),64);
        tracep->fullQData(oldp+518,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[7]),64);
        tracep->fullQData(oldp+520,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[8]),64);
        tracep->fullQData(oldp+522,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[9]),64);
        tracep->fullQData(oldp+524,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[10]),64);
        tracep->fullQData(oldp+526,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[11]),64);
        tracep->fullQData(oldp+528,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[12]),64);
        tracep->fullQData(oldp+530,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[13]),64);
        tracep->fullQData(oldp+532,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[14]),64);
        tracep->fullQData(oldp+534,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[15]),64);
        tracep->fullQData(oldp+536,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[16]),64);
        tracep->fullQData(oldp+538,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[17]),64);
        tracep->fullQData(oldp+540,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[18]),64);
        tracep->fullQData(oldp+542,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[19]),64);
        tracep->fullQData(oldp+544,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[20]),64);
        tracep->fullQData(oldp+546,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[21]),64);
        tracep->fullQData(oldp+548,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[22]),64);
        tracep->fullQData(oldp+550,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[23]),64);
        tracep->fullQData(oldp+552,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[24]),64);
        tracep->fullQData(oldp+554,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[25]),64);
        tracep->fullQData(oldp+556,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[26]),64);
        tracep->fullQData(oldp+558,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[27]),64);
        tracep->fullQData(oldp+560,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[28]),64);
        tracep->fullQData(oldp+562,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[29]),64);
        tracep->fullQData(oldp+564,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[30]),64);
        tracep->fullQData(oldp+566,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[31]),64);
        tracep->fullQData(oldp+568,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[0]),64);
        tracep->fullQData(oldp+570,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[1]),64);
        tracep->fullQData(oldp+572,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[2]),64);
        tracep->fullQData(oldp+574,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[3]),64);
        tracep->fullQData(oldp+576,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[4]),64);
        tracep->fullQData(oldp+578,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[5]),64);
        tracep->fullQData(oldp+580,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[6]),64);
        tracep->fullQData(oldp+582,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[7]),64);
        tracep->fullQData(oldp+584,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[8]),64);
        tracep->fullQData(oldp+586,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[9]),64);
        tracep->fullQData(oldp+588,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[10]),64);
        tracep->fullQData(oldp+590,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[11]),64);
        tracep->fullQData(oldp+592,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[12]),64);
        tracep->fullQData(oldp+594,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[13]),64);
        tracep->fullQData(oldp+596,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[14]),64);
        tracep->fullQData(oldp+598,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[15]),64);
        tracep->fullQData(oldp+600,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[16]),64);
        tracep->fullQData(oldp+602,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[17]),64);
        tracep->fullQData(oldp+604,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[18]),64);
        tracep->fullQData(oldp+606,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[19]),64);
        tracep->fullQData(oldp+608,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[20]),64);
        tracep->fullQData(oldp+610,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[21]),64);
        tracep->fullQData(oldp+612,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[22]),64);
        tracep->fullQData(oldp+614,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[23]),64);
        tracep->fullQData(oldp+616,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[24]),64);
        tracep->fullQData(oldp+618,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[25]),64);
        tracep->fullQData(oldp+620,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[26]),64);
        tracep->fullQData(oldp+622,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[27]),64);
        tracep->fullQData(oldp+624,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[28]),64);
        tracep->fullQData(oldp+626,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[29]),64);
        tracep->fullQData(oldp+628,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[30]),64);
        tracep->fullQData(oldp+630,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[31]),64);
        tracep->fullQData(oldp+632,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data),64);
        tracep->fullBit(oldp+634,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri0));
        tracep->fullBit(oldp+635,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri1));
        tracep->fullCData(oldp+636,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st),2);
        tracep->fullCData(oldp+637,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st),2);
        tracep->fullQData(oldp+638,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr),64);
        tracep->fullQData(oldp+640,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr),64);
        tracep->fullSData(oldp+642,((0x3ffU & (IData)(
                                                      (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                       >> 0x36U)))),10);
        tracep->fullQData(oldp+643,((0xfffffffffffULL 
                                     & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                        >> 0xaU))),44);
        tracep->fullCData(oldp+645,((3U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                   >> 8U)))),2);
        tracep->fullBit(oldp+646,((1U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                 >> 7U)))));
        tracep->fullBit(oldp+647,((1U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                 >> 6U)))));
        tracep->fullBit(oldp+648,((1U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                 >> 5U)))));
        tracep->fullBit(oldp+649,((1U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                 >> 4U)))));
        tracep->fullBit(oldp+650,((1U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                 >> 3U)))));
        tracep->fullBit(oldp+651,((1U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                 >> 2U)))));
        tracep->fullBit(oldp+652,((1U & (IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                 >> 1U)))));
        tracep->fullBit(oldp+653,((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte))));
        tracep->fullBit(oldp+654,(((IData)(vlTOPp->SimTop__DOT__core__DOT__update) 
                                   & (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__wri_nop)))));
        tracep->fullBit(oldp+655,((1U & (((vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U] 
                                           >> 1U) | 
                                          vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U]) 
                                         & (~ (vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[2U] 
                                               >> 0x1fU))))));
        tracep->fullBit(oldp+656,((0U != (7U & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                                >> 0xfU)))));
        tracep->fullCData(oldp+657,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                              >> 0x12U))),8);
        tracep->fullQData(oldp+658,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0U]),64);
        tracep->fullQData(oldp+660,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [1U]),64);
        tracep->fullQData(oldp+662,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [2U]),64);
        tracep->fullQData(oldp+664,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [3U]),64);
        tracep->fullQData(oldp+666,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [4U]),64);
        tracep->fullQData(oldp+668,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [5U]),64);
        tracep->fullQData(oldp+670,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [6U]),64);
        tracep->fullQData(oldp+672,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [7U]),64);
        tracep->fullQData(oldp+674,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [8U]),64);
        tracep->fullQData(oldp+676,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [9U]),64);
        tracep->fullQData(oldp+678,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0xaU]),64);
        tracep->fullQData(oldp+680,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0xbU]),64);
        tracep->fullQData(oldp+682,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0xcU]),64);
        tracep->fullQData(oldp+684,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0xdU]),64);
        tracep->fullQData(oldp+686,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0xeU]),64);
        tracep->fullQData(oldp+688,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0xfU]),64);
        tracep->fullQData(oldp+690,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x10U]),64);
        tracep->fullQData(oldp+692,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x11U]),64);
        tracep->fullQData(oldp+694,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x12U]),64);
        tracep->fullQData(oldp+696,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x13U]),64);
        tracep->fullQData(oldp+698,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x14U]),64);
        tracep->fullQData(oldp+700,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x15U]),64);
        tracep->fullQData(oldp+702,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x16U]),64);
        tracep->fullQData(oldp+704,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x17U]),64);
        tracep->fullQData(oldp+706,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x18U]),64);
        tracep->fullQData(oldp+708,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x19U]),64);
        tracep->fullQData(oldp+710,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x1aU]),64);
        tracep->fullQData(oldp+712,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x1bU]),64);
        tracep->fullQData(oldp+714,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x1cU]),64);
        tracep->fullQData(oldp+716,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x1dU]),64);
        tracep->fullQData(oldp+718,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x1eU]),64);
        tracep->fullQData(oldp+720,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                    [0x1fU]),64);
        tracep->fullQData(oldp+722,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU])))),64);
        tracep->fullQData(oldp+724,((0x800000030001e000ULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]))))),64);
        tracep->fullQData(oldp+726,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__CSRs[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[6U])))),64);
        tracep->fullBit(oldp+728,((1U & (vlTOPp->SimTop__DOT__icvt__DOT__dresp[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+729,((1U & vlTOPp->SimTop__DOT__icvt__DOT__dresp[2U])));
        tracep->fullQData(oldp+730,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+732,((1U & vlTOPp->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+733,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__ireq[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+735,(vlTOPp->SimTop__DOT__icvt__DOT__inst__DOT__okay));
        tracep->fullBit(oldp+736,(vlTOPp->SimTop__DOT__dcvt__DOT__okay));
        tracep->fullBit(oldp+737,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+738,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+739,((7U & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                            << 0xeU) 
                                           | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U)))),3);
        tracep->fullQData(oldp+740,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+742,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU)))),8);
        tracep->fullQData(oldp+743,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+745,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[1U] 
                                               << 0x1eU) 
                                              | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U)))),8);
        tracep->fullCData(oldp+746,((3U & vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
        tracep->fullBit(oldp+747,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+748,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+749,((7U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                           >> 9U))),3);
        tracep->fullQData(oldp+750,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                      << 0x37U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                                      >> 9U)))),64);
        tracep->fullCData(oldp+752,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[8U] 
                                               << 0x1fU) 
                                              | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U)))),8);
        tracep->fullQData(oldp+753,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+755,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 7U) 
                                              | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+756,((3U & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                            << 9U) 
                                           | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U)))),2);
        tracep->fullBit(oldp+757,(vlTOPp->SimTop__DOT__mux__DOT__busy));
        tracep->fullIData(oldp+758,(vlTOPp->SimTop__DOT__mux__DOT__index),32);
        tracep->fullIData(oldp+759,(vlTOPp->SimTop__DOT__mux__DOT__select),32);
        tracep->fullBit(oldp+760,((1U & (vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+761,((1U & (vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+762,((7U & (vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+763,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+765,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__saved_req[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->SimTop__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU)))),8);
        tracep->fullQData(oldp+766,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+768,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__saved_req[1U] 
                                               << 0x1eU) 
                                              | (vlTOPp->SimTop__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U)))),8);
        tracep->fullCData(oldp+769,((3U & vlTOPp->SimTop__DOT__mux__DOT__saved_req[0U])),2);
        tracep->fullBit(oldp+770,((1U & (vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+771,((1U & (vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+772,((7U & (vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+773,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+775,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__selected_req[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU)))),8);
        tracep->fullQData(oldp+776,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+778,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__selected_req[1U] 
                                               << 0x1eU) 
                                              | (vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U)))),8);
        tracep->fullCData(oldp+779,((3U & vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U])),2);
        tracep->fullIData(oldp+780,(vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+781,(vlTOPp->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+782,((1U & (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+783,((1U & (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+784,((7U & (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+785,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+787,((0xffU & ((vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU)))),8);
        tracep->fullQData(oldp+788,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+790,((0xffU & ((vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[1U] 
                                               << 0x1eU) 
                                              | (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U)))),8);
        tracep->fullCData(oldp+791,((3U & vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
        tracep->fullCData(oldp+792,(vlTOPp->SimTop__DOT__ram__DOT__state),2);
        tracep->fullCData(oldp+793,(vlTOPp->SimTop__DOT__ram__DOT__count_down),8);
        tracep->fullCData(oldp+794,(vlTOPp->SimTop__DOT__ram__DOT__size),4);
        tracep->fullQData(oldp+795,(vlTOPp->SimTop__DOT__ram__DOT__addr),64);
        tracep->fullQData(oldp+797,(vlTOPp->SimTop__DOT__ram__DOT__idx),64);
        tracep->fullQData(oldp+799,(vlTOPp->SimTop__DOT__ram__DOT__wrap1),64);
        tracep->fullQData(oldp+801,(vlTOPp->SimTop__DOT__ram__DOT__wrap2),64);
        tracep->fullQData(oldp+803,(vlTOPp->SimTop__DOT__ram__DOT__cyc_cnt),64);
        tracep->fullQData(oldp+805,(vlTOPp->SimTop__DOT__ram__DOT__ms_cnt),64);
        tracep->fullQData(oldp+807,(vlTOPp->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullQData(oldp+809,(vlTOPp->SimTop__DOT__ram__DOT__mtime),64);
        tracep->fullQData(oldp+811,(vlTOPp->SimTop__DOT__ram__DOT__mtimecmp),64);
        tracep->fullBit(oldp+813,(vlTOPp->SimTop__DOT__ram__DOT__msip));
        tracep->fullBit(oldp+814,(vlTOPp->clock));
        tracep->fullBit(oldp+815,(vlTOPp->reset));
        tracep->fullQData(oldp+816,(vlTOPp->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+818,(vlTOPp->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+820,(vlTOPp->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+822,(vlTOPp->io_perfInfo_clean));
        tracep->fullBit(oldp+823,(vlTOPp->io_perfInfo_dump));
        tracep->fullBit(oldp+824,(vlTOPp->io_uart_out_valid));
        tracep->fullCData(oldp+825,(vlTOPp->io_uart_out_ch),8);
        tracep->fullBit(oldp+826,(vlTOPp->io_uart_in_valid));
        tracep->fullCData(oldp+827,(vlTOPp->io_uart_in_ch),8);
        tracep->fullQData(oldp+828,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realBl),64);
        tracep->fullCData(oldp+830,(0U),8);
        tracep->fullBit(oldp+831,(0U));
        tracep->fullCData(oldp+832,(0U),3);
        tracep->fullQData(oldp+833,(0ULL),64);
        tracep->fullCData(oldp+835,(2U),3);
        tracep->fullCData(oldp+836,(0U),8);
        tracep->fullQData(oldp+837,(0ULL),64);
    }
}
