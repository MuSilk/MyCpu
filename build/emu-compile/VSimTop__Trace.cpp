// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSimTop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (vlTOPp->SimTop__DOT__oreq[4U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+1,((1U & (vlTOPp->SimTop__DOT__oreq[4U] 
                                          >> 0x15U))));
            tracep->chgCData(oldp+2,((7U & (vlTOPp->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))),3);
            tracep->chgQData(oldp+3,((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__oreq[4U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__oreq[3U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__oreq[2U])) 
                                        >> 0x12U)))),64);
            tracep->chgCData(oldp+5,((0xffU & ((vlTOPp->SimTop__DOT__oreq[3U] 
                                                << 0x16U) 
                                               | (vlTOPp->SimTop__DOT__oreq[2U] 
                                                  >> 0xaU)))),8);
            tracep->chgQData(oldp+6,((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__oreq[2U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__oreq[1U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__oreq[0U])) 
                                        >> 0xaU)))),64);
            tracep->chgCData(oldp+8,((0xffU & ((vlTOPp->SimTop__DOT__oreq[1U] 
                                                << 0x1eU) 
                                               | (vlTOPp->SimTop__DOT__oreq[0U] 
                                                  >> 2U)))),8);
            tracep->chgCData(oldp+9,((3U & vlTOPp->SimTop__DOT__oreq[0U])),2);
            tracep->chgBit(oldp+10,((1U & (vlTOPp->SimTop__DOT__oresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+11,((1U & vlTOPp->SimTop__DOT__oresp[2U])));
            tracep->chgQData(oldp+12,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__oresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__oresp[0U])))),64);
            tracep->chgBit(oldp+14,(vlTOPp->SimTop__DOT__trint));
            tracep->chgBit(oldp+15,(vlTOPp->SimTop__DOT__swint));
            tracep->chgBit(oldp+16,(vlTOPp->SimTop__DOT__exint));
            tracep->chgBit(oldp+17,((1U & vlTOPp->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+18,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__ireq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+20,((1U & (IData)((vlTOPp->SimTop__DOT__iresp 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+21,((1U & (IData)((vlTOPp->SimTop__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+22,((IData)(vlTOPp->SimTop__DOT__iresp)),32);
            tracep->chgBit(oldp+23,((1U & (vlTOPp->SimTop__DOT__dreq[4U] 
                                           >> 0xbU))));
            tracep->chgQData(oldp+24,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__dreq[4U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__dreq[2U])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+26,((7U & ((vlTOPp->SimTop__DOT__dreq[3U] 
                                              << 0x18U) 
                                             | (vlTOPp->SimTop__DOT__dreq[2U] 
                                                >> 8U)))),3);
            tracep->chgCData(oldp+27,((0xffU & vlTOPp->SimTop__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+28,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+30,((1U & (vlTOPp->SimTop__DOT__dresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+31,((1U & vlTOPp->SimTop__DOT__dresp[2U])));
            tracep->chgQData(oldp+32,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__dresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+34,((1U & (vlTOPp->SimTop__DOT__icreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+35,((1U & (vlTOPp->SimTop__DOT__icreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+36,((7U & (vlTOPp->SimTop__DOT__icreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+37,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__icreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__icreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__icreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+39,((0xffU & ((vlTOPp->SimTop__DOT__icreq[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->SimTop__DOT__icreq[2U] 
                                                   >> 0xaU)))),8);
            tracep->chgQData(oldp+40,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__icreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__icreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__icreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+42,((0xffU & ((vlTOPp->SimTop__DOT__icreq[1U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->SimTop__DOT__icreq[0U] 
                                                   >> 2U)))),8);
            tracep->chgCData(oldp+43,((3U & vlTOPp->SimTop__DOT__icreq[0U])),2);
            tracep->chgBit(oldp+44,((1U & (vlTOPp->SimTop__DOT__dcreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+45,((1U & (vlTOPp->SimTop__DOT__dcreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+46,((7U & (vlTOPp->SimTop__DOT__dcreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+47,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__dcreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__dcreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__dcreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+49,((0xffU & ((vlTOPp->SimTop__DOT__dcreq[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->SimTop__DOT__dcreq[2U] 
                                                   >> 0xaU)))),8);
            tracep->chgQData(oldp+50,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__dcreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__dcreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__dcreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+52,((0xffU & ((vlTOPp->SimTop__DOT__dcreq[1U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->SimTop__DOT__dcreq[0U] 
                                                   >> 2U)))),8);
            tracep->chgCData(oldp+53,((3U & vlTOPp->SimTop__DOT__dcreq[0U])),2);
            tracep->chgBit(oldp+54,((1U & (vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 3U))));
            tracep->chgBit(oldp+55,((1U & (vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 2U))));
            tracep->chgQData(oldp+56,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                           >> 2U)))),64);
            tracep->chgBit(oldp+58,((1U & (vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+59,((1U & vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U])));
            tracep->chgQData(oldp+60,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgBit(oldp+62,(vlTOPp->SimTop__DOT__core__DOT__dec_nop));
            tracep->chgBit(oldp+63,(vlTOPp->SimTop__DOT__core__DOT__exe_nop));
            tracep->chgBit(oldp+64,(vlTOPp->SimTop__DOT__core__DOT__mem_nop));
            tracep->chgBit(oldp+65,(vlTOPp->SimTop__DOT__core__DOT__wri_nop));
            tracep->chgQData(oldp+66,(vlTOPp->SimTop__DOT__core__DOT__dec_imm),64);
            tracep->chgIData(oldp+68,(vlTOPp->SimTop__DOT__core__DOT__func),32);
            tracep->chgBit(oldp+69,(((IData)(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_fetched) 
                                     | (IData)(vlTOPp->SimTop__DOT__core__DOT__fet_block))));
            tracep->chgQData(oldp+70,(vlTOPp->SimTop__DOT__core__DOT__dec_pc),64);
            tracep->chgBit(oldp+72,((1U & vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U])));
            tracep->chgQData(oldp+73,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U])))),64);
            tracep->chgCData(oldp+75,((3U & vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[2U])),2);
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[0U])))),64);
            tracep->chgBit(oldp+78,(vlTOPp->SimTop__DOT__core__DOT__update));
            tracep->chgQData(oldp+79,(vlTOPp->SimTop__DOT__core__DOT__wri_finishedpc),64);
            tracep->chgSData(oldp+81,((0x3ffU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                                 >> 0xdU))),10);
            tracep->chgBit(oldp+82,((1U & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                           >> 0xcU))));
            tracep->chgCData(oldp+83,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                                >> 7U))),5);
            tracep->chgCData(oldp+84,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                                >> 2U))),5);
            tracep->chgBit(oldp+85,((1U & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                           >> 1U))));
            tracep->chgBit(oldp+86,((1U & vlTOPp->SimTop__DOT__core__DOT__dec_exe_st)));
            tracep->chgSData(oldp+87,((0x3ffU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                 >> 0xdU))),10);
            tracep->chgBit(oldp+88,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                           >> 0xcU))));
            tracep->chgCData(oldp+89,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                >> 7U))),5);
            tracep->chgCData(oldp+90,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                >> 2U))),5);
            tracep->chgBit(oldp+91,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                           >> 1U))));
            tracep->chgBit(oldp+92,((1U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)));
            tracep->chgBit(oldp+93,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[4U] 
                                           >> 1U))));
            tracep->chgBit(oldp+94,((1U & vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[4U])));
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[2U])))),64);
            tracep->chgQData(oldp+97,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__exe_mem_st[0U])))),64);
            tracep->chgCData(oldp+99,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[7U] 
                                                >> 0x12U))),5);
            tracep->chgCData(oldp+100,((7U & (vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[7U] 
                                              >> 0xfU))),3);
            tracep->chgQData(oldp+101,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[7U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[6U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[5U])) 
                                              >> 0xfU)))),64);
            tracep->chgSData(oldp+103,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[6U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[5U] 
                                                     >> 3U)))),12);
            tracep->chgQData(oldp+104,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[5U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[3U])) 
                                              >> 3U)))),64);
            tracep->chgCData(oldp+106,((7U & vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[3U])),3);
            tracep->chgQData(oldp+107,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[1U])))),64);
            tracep->chgIData(oldp+109,(vlTOPp->SimTop__DOT__core__DOT__exe_wri_st[0U]),32);
            tracep->chgCData(oldp+110,((3U & vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U])),2);
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[0U])))),64);
            tracep->chgCData(oldp+113,(vlTOPp->SimTop__DOT__core__DOT__exe_fun3),3);
            tracep->chgQData(oldp+114,(vlTOPp->SimTop__DOT__core__DOT__exe_pc),64);
            tracep->chgBit(oldp+116,(vlTOPp->SimTop__DOT__core__DOT__fet_block));
            tracep->chgBit(oldp+117,(vlTOPp->SimTop__DOT__core__DOT__fet_clear));
            tracep->chgBit(oldp+118,((1U & (vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U] 
                                            >> 1U))));
            tracep->chgBit(oldp+119,((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])));
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])))),64);
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])))),64);
            tracep->chgCData(oldp+124,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[7U] 
                                                 >> 0x12U))),5);
            tracep->chgCData(oldp+125,((7U & (vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[7U] 
                                              >> 0xfU))),3);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[7U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[6U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[5U])) 
                                              >> 0xfU)))),64);
            tracep->chgSData(oldp+128,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[6U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[5U] 
                                                     >> 3U)))),12);
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[5U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[3U])) 
                                              >> 3U)))),64);
            tracep->chgCData(oldp+131,((7U & vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[3U])),3);
            tracep->chgQData(oldp+132,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[1U])))),64);
            tracep->chgIData(oldp+134,(vlTOPp->SimTop__DOT__core__DOT__mem_wri_st[0U]),32);
            tracep->chgQData(oldp+135,(vlTOPp->SimTop__DOT__core__DOT__mem_pc),64);
            tracep->chgCData(oldp+137,(vlTOPp->SimTop__DOT__core__DOT__mem_fun3),3);
            tracep->chgQData(oldp+138,(vlTOPp->SimTop__DOT__core__DOT__valA),64);
            tracep->chgQData(oldp+140,(vlTOPp->SimTop__DOT__core__DOT__valB),64);
            tracep->chgBit(oldp+142,(vlTOPp->SimTop__DOT__core__DOT__exe_finished));
            tracep->chgCData(oldp+143,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                                 >> 0x12U))),5);
            tracep->chgCData(oldp+144,((7U & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                              >> 0xfU))),3);
            tracep->chgQData(oldp+145,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                                              >> 0xfU)))),64);
            tracep->chgSData(oldp+147,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                     >> 3U)))),12);
            tracep->chgQData(oldp+148,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])) 
                                              >> 3U)))),64);
            tracep->chgCData(oldp+150,((7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])),3);
            tracep->chgQData(oldp+151,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[1U])))),64);
            tracep->chgIData(oldp+153,(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[0U]),32);
            tracep->chgBit(oldp+154,((1U & (vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U] 
                                            >> 1U))));
            tracep->chgBit(oldp+155,((1U & vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U])));
            tracep->chgQData(oldp+156,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[2U])))),64);
            tracep->chgQData(oldp+158,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[0U])))),64);
            tracep->chgQData(oldp+160,(vlTOPp->SimTop__DOT__core__DOT__wri_pc),64);
            tracep->chgBit(oldp+162,((1U & (vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U] 
                                            >> 0xbU))));
            tracep->chgQData(oldp+163,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+165,((7U & ((vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                                 >> 8U)))),3);
            tracep->chgCData(oldp+166,((0xffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U])),8);
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U])))),64);
            tracep->chgBit(oldp+169,((1U & (((IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_fetched) 
                                             | (IData)(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop)) 
                                            | (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_op))))));
            tracep->chgCData(oldp+170,(vlTOPp->SimTop__DOT__core__DOT__wri_fun3),3);
            tracep->chgQData(oldp+171,(vlTOPp->SimTop__DOT__core__DOT__Regs[0]),64);
            tracep->chgQData(oldp+173,(vlTOPp->SimTop__DOT__core__DOT__Regs[1]),64);
            tracep->chgQData(oldp+175,(vlTOPp->SimTop__DOT__core__DOT__Regs[2]),64);
            tracep->chgQData(oldp+177,(vlTOPp->SimTop__DOT__core__DOT__Regs[3]),64);
            tracep->chgQData(oldp+179,(vlTOPp->SimTop__DOT__core__DOT__Regs[4]),64);
            tracep->chgQData(oldp+181,(vlTOPp->SimTop__DOT__core__DOT__Regs[5]),64);
            tracep->chgQData(oldp+183,(vlTOPp->SimTop__DOT__core__DOT__Regs[6]),64);
            tracep->chgQData(oldp+185,(vlTOPp->SimTop__DOT__core__DOT__Regs[7]),64);
            tracep->chgQData(oldp+187,(vlTOPp->SimTop__DOT__core__DOT__Regs[8]),64);
            tracep->chgQData(oldp+189,(vlTOPp->SimTop__DOT__core__DOT__Regs[9]),64);
            tracep->chgQData(oldp+191,(vlTOPp->SimTop__DOT__core__DOT__Regs[10]),64);
            tracep->chgQData(oldp+193,(vlTOPp->SimTop__DOT__core__DOT__Regs[11]),64);
            tracep->chgQData(oldp+195,(vlTOPp->SimTop__DOT__core__DOT__Regs[12]),64);
            tracep->chgQData(oldp+197,(vlTOPp->SimTop__DOT__core__DOT__Regs[13]),64);
            tracep->chgQData(oldp+199,(vlTOPp->SimTop__DOT__core__DOT__Regs[14]),64);
            tracep->chgQData(oldp+201,(vlTOPp->SimTop__DOT__core__DOT__Regs[15]),64);
            tracep->chgQData(oldp+203,(vlTOPp->SimTop__DOT__core__DOT__Regs[16]),64);
            tracep->chgQData(oldp+205,(vlTOPp->SimTop__DOT__core__DOT__Regs[17]),64);
            tracep->chgQData(oldp+207,(vlTOPp->SimTop__DOT__core__DOT__Regs[18]),64);
            tracep->chgQData(oldp+209,(vlTOPp->SimTop__DOT__core__DOT__Regs[19]),64);
            tracep->chgQData(oldp+211,(vlTOPp->SimTop__DOT__core__DOT__Regs[20]),64);
            tracep->chgQData(oldp+213,(vlTOPp->SimTop__DOT__core__DOT__Regs[21]),64);
            tracep->chgQData(oldp+215,(vlTOPp->SimTop__DOT__core__DOT__Regs[22]),64);
            tracep->chgQData(oldp+217,(vlTOPp->SimTop__DOT__core__DOT__Regs[23]),64);
            tracep->chgQData(oldp+219,(vlTOPp->SimTop__DOT__core__DOT__Regs[24]),64);
            tracep->chgQData(oldp+221,(vlTOPp->SimTop__DOT__core__DOT__Regs[25]),64);
            tracep->chgQData(oldp+223,(vlTOPp->SimTop__DOT__core__DOT__Regs[26]),64);
            tracep->chgQData(oldp+225,(vlTOPp->SimTop__DOT__core__DOT__Regs[27]),64);
            tracep->chgQData(oldp+227,(vlTOPp->SimTop__DOT__core__DOT__Regs[28]),64);
            tracep->chgQData(oldp+229,(vlTOPp->SimTop__DOT__core__DOT__Regs[29]),64);
            tracep->chgQData(oldp+231,(vlTOPp->SimTop__DOT__core__DOT__Regs[30]),64);
            tracep->chgQData(oldp+233,(vlTOPp->SimTop__DOT__core__DOT__Regs[31]),64);
            tracep->chgQData(oldp+235,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x14U])))),64);
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x12U])))),64);
            tracep->chgQData(oldp+239,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x10U])))),64);
            tracep->chgQData(oldp+241,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU])))),64);
            tracep->chgBit(oldp+243,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                            >> 0x1fU))));
            tracep->chgIData(oldp+244,((0x7ffffffU 
                                        & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU] 
                                            << 0x1cU) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                              >> 4U)))),27);
            tracep->chgCData(oldp+245,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU] 
                                               << 0x1eU) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                                 >> 2U)))),2);
            tracep->chgCData(oldp+246,((3U & vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU])),2);
            tracep->chgSData(oldp+247,((0x1ffU & ((
                                                   vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                                   << 9U) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                                     >> 0x17U)))),9);
            tracep->chgBit(oldp+248,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+249,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+250,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+251,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+252,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+253,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+254,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                               << 0x11U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                                 >> 0xfU)))),2);
            tracep->chgCData(oldp+255,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                               << 0x13U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                                 >> 0xdU)))),2);
            tracep->chgCData(oldp+256,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                               << 0x15U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                                 >> 0xbU)))),2);
            tracep->chgCData(oldp+257,((3U & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                               << 0x17U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                                 >> 9U)))),2);
            tracep->chgBit(oldp+258,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 8U))));
            tracep->chgBit(oldp+259,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 7U))));
            tracep->chgBit(oldp+260,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 6U))));
            tracep->chgBit(oldp+261,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 5U))));
            tracep->chgBit(oldp+262,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 4U))));
            tracep->chgBit(oldp+263,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 3U))));
            tracep->chgBit(oldp+264,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 2U))));
            tracep->chgBit(oldp+265,((1U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+266,((1U & vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU])));
            tracep->chgQData(oldp+267,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xaU])))),64);
            tracep->chgQData(oldp+269,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U])))),64);
            tracep->chgCData(oldp+271,((0xfU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                                                 << 4U) 
                                                | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                                   >> 0x1cU)))),4);
            tracep->chgSData(oldp+272,((0xffffU & (
                                                   (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                                      >> 0xcU)))),16);
            tracep->chgQData(oldp+273,((0xfffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[6U]))))),44);
            tracep->chgQData(oldp+275,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[4U])))),64);
            tracep->chgQData(oldp+277,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[2U])))),64);
            tracep->chgQData(oldp+279,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0U])))),64);
            tracep->chgQData(oldp+281,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0x14U])))),64);
            tracep->chgQData(oldp+283,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0x12U])))),64);
            tracep->chgQData(oldp+285,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0x10U])))),64);
            tracep->chgQData(oldp+287,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU])))),64);
            tracep->chgBit(oldp+289,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                            >> 0x1fU))));
            tracep->chgIData(oldp+290,((0x7ffffffU 
                                        & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU] 
                                            << 0x1cU) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                              >> 4U)))),27);
            tracep->chgCData(oldp+291,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU] 
                                               << 0x1eU) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                                 >> 2U)))),2);
            tracep->chgCData(oldp+292,((3U & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU])),2);
            tracep->chgSData(oldp+293,((0x1ffU & ((
                                                   vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                                   << 9U) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                                     >> 0x17U)))),9);
            tracep->chgBit(oldp+294,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+295,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+296,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+297,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+298,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+299,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+300,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                               << 0x11U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                                 >> 0xfU)))),2);
            tracep->chgCData(oldp+301,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                               << 0x13U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                                 >> 0xdU)))),2);
            tracep->chgCData(oldp+302,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                               << 0x15U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                                 >> 0xbU)))),2);
            tracep->chgCData(oldp+303,((3U & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                               << 0x17U) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                                 >> 9U)))),2);
            tracep->chgBit(oldp+304,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 8U))));
            tracep->chgBit(oldp+305,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 7U))));
            tracep->chgBit(oldp+306,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 6U))));
            tracep->chgBit(oldp+307,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 5U))));
            tracep->chgBit(oldp+308,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 4U))));
            tracep->chgBit(oldp+309,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 3U))));
            tracep->chgBit(oldp+310,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 2U))));
            tracep->chgBit(oldp+311,((1U & (vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+312,((1U & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU])));
            tracep->chgQData(oldp+313,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0xaU])))),64);
            tracep->chgQData(oldp+315,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[8U])))),64);
            tracep->chgCData(oldp+317,((0xfU & ((vlTOPp->SimTop__DOT__core__DOT__CSRs[8U] 
                                                 << 4U) 
                                                | (vlTOPp->SimTop__DOT__core__DOT__CSRs[7U] 
                                                   >> 0x1cU)))),4);
            tracep->chgSData(oldp+318,((0xffffU & (
                                                   (vlTOPp->SimTop__DOT__core__DOT__CSRs[8U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->SimTop__DOT__core__DOT__CSRs[7U] 
                                                      >> 0xcU)))),16);
            tracep->chgQData(oldp+319,((0xfffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__CSRs[7U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__CSRs[6U]))))),44);
            tracep->chgQData(oldp+321,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[4U])))),64);
            tracep->chgQData(oldp+323,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[2U])))),64);
            tracep->chgQData(oldp+325,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0U])))),64);
            tracep->chgCData(oldp+327,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode),2);
            tracep->chgCData(oldp+328,(vlTOPp->SimTop__DOT__core__DOT__mode),2);
            tracep->chgBit(oldp+329,(vlTOPp->SimTop__DOT__core__DOT__csr_fet_clear));
            tracep->chgQData(oldp+330,(((3U == (7U 
                                                & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))
                                         ? (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__CSRs[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__CSRs[8U])))
                                         : ((4U == 
                                             (7U & 
                                              vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))
                                             ? (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__core__DOT__CSRs[0xfU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU])))
                                             : (4ULL 
                                                + vlTOPp->SimTop__DOT__core__DOT__wri_pc)))),64);
            tracep->chgQData(oldp+332,(vlTOPp->SimTop__DOT__core__DOT__pc_prev0),64);
            tracep->chgQData(oldp+334,(vlTOPp->SimTop__DOT__core__DOT__pc_prev1),64);
            tracep->chgCData(oldp+336,(vlTOPp->SimTop__DOT__core__DOT__rd_prev0),5);
            tracep->chgCData(oldp+337,(vlTOPp->SimTop__DOT__core__DOT__rd_prev1),5);
            tracep->chgBit(oldp+338,(vlTOPp->SimTop__DOT__core__DOT__need_wait0));
            tracep->chgBit(oldp+339,(vlTOPp->SimTop__DOT__core__DOT__need_wait1));
            tracep->chgBit(oldp+340,(vlTOPp->SimTop__DOT__core__DOT__iaddr_trans_finished));
            tracep->chgBit(oldp+341,(vlTOPp->SimTop__DOT__core__DOT__daddr_trans_finished));
            tracep->chgQData(oldp+342,(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__pc_now),64);
            tracep->chgBit(oldp+344,(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_fetched));
            tracep->chgIData(oldp+345,(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_tmp),32);
            tracep->chgBit(oldp+346,(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__decode__fet_clear));
            tracep->chgBit(oldp+347,((1U & (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U] 
                                            >> 1U))));
            tracep->chgBit(oldp+348,((1U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U])));
            tracep->chgQData(oldp+349,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[2U])))),64);
            tracep->chgQData(oldp+351,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[0U])))),64);
            tracep->chgCData(oldp+353,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U] 
                                                 >> 0x12U))),5);
            tracep->chgCData(oldp+354,((7U & (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U] 
                                              >> 0xfU))),3);
            tracep->chgQData(oldp+355,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[6U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U])) 
                                              >> 0xfU)))),64);
            tracep->chgSData(oldp+357,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[6U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U] 
                                                     >> 3U)))),12);
            tracep->chgQData(oldp+358,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[3U])) 
                                              >> 3U)))),64);
            tracep->chgCData(oldp+360,((7U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[3U])),3);
            tracep->chgQData(oldp+361,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[1U])))),64);
            tracep->chgIData(oldp+363,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[0U]),32);
            tracep->chgCData(oldp+364,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__st_pc),2);
            tracep->chgCData(oldp+365,((7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+366,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__imm_now),64);
            tracep->chgBit(oldp+368,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT__dec_nop));
            tracep->chgSData(oldp+369,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10),10);
            tracep->chgBit(oldp+370,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width));
            tracep->chgCData(oldp+371,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+372,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+373,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                 >> 7U))),5);
            tracep->chgSData(oldp+374,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__csr_rd),12);
            tracep->chgQData(oldp+375,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code),64);
            tracep->chgBit(oldp+377,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__imm_calc));
            tracep->chgBit(oldp+378,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read));
            tracep->chgBit(oldp+379,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write));
            tracep->chgCData(oldp+380,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_rd),3);
            tracep->chgCData(oldp+381,(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr),3);
            tracep->chgBit(oldp+382,(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop));
            tracep->chgQData(oldp+383,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out),64);
            tracep->chgCData(oldp+385,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__cnt),7);
            tracep->chgBit(oldp+386,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__reseted));
            tracep->chgQData(oldp+387,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__B),64);
            tracep->chgBit(oldp+389,((1U & ((vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
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
            tracep->chgBit(oldp+390,((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out)));
            tracep->chgCData(oldp+391,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__st_pc),2);
            tracep->chgBit(oldp+392,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__data_calculated));
            tracep->chgBit(oldp+393,((1U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)));
            tracep->chgSData(oldp+394,((0x3ffU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                  >> 0xdU))),10);
            tracep->chgBit(oldp+395,((1U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                            >> 0xcU))));
            tracep->chgQData(oldp+396,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA),64);
            tracep->chgQData(oldp+398,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB),64);
            tracep->chgQData(oldp+400,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans),64);
            tracep->chgCData(oldp+402,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB),6);
            tracep->chgQData(oldp+403,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out),64);
            tracep->chgQData(oldp+405,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem),64);
            tracep->chgBit(oldp+407,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish));
            tracep->chgBit(oldp+408,((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+409,((0U != (7U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                                   >> 0xdU)))));
            tracep->chgBit(oldp+410,(((0x2000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                       ? 0U : (1U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                            >> 0x3fU))) 
                                                ^ (1U 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB 
                                                              >> 0x3fU))))))));
            tracep->chgQData(oldp+411,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA),64);
            tracep->chgQData(oldp+413,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB),64);
            tracep->chgWData(oldp+415,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R),129);
            tracep->chgWData(oldp+420,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__D),65);
            tracep->chgBit(oldp+423,(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__muldivfinished));
            tracep->chgBit(oldp+424,(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop));
            tracep->chgQData(oldp+425,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data),64);
            tracep->chgBit(oldp+427,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_op));
            tracep->chgBit(oldp+428,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_fetched));
            tracep->chgQData(oldp+429,(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data),64);
            tracep->chgBit(oldp+431,((1U & (vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U] 
                                            >> 1U))));
            tracep->chgBit(oldp+432,((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])));
            tracep->chgQData(oldp+433,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0]),64);
            tracep->chgQData(oldp+435,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[1]),64);
            tracep->chgQData(oldp+437,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[2]),64);
            tracep->chgQData(oldp+439,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[3]),64);
            tracep->chgQData(oldp+441,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[4]),64);
            tracep->chgQData(oldp+443,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[5]),64);
            tracep->chgQData(oldp+445,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[6]),64);
            tracep->chgQData(oldp+447,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[7]),64);
            tracep->chgQData(oldp+449,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[8]),64);
            tracep->chgQData(oldp+451,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[9]),64);
            tracep->chgQData(oldp+453,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[10]),64);
            tracep->chgQData(oldp+455,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[11]),64);
            tracep->chgQData(oldp+457,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[12]),64);
            tracep->chgQData(oldp+459,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[13]),64);
            tracep->chgQData(oldp+461,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[14]),64);
            tracep->chgQData(oldp+463,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[15]),64);
            tracep->chgQData(oldp+465,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[16]),64);
            tracep->chgQData(oldp+467,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[17]),64);
            tracep->chgQData(oldp+469,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[18]),64);
            tracep->chgQData(oldp+471,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[19]),64);
            tracep->chgQData(oldp+473,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[20]),64);
            tracep->chgQData(oldp+475,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[21]),64);
            tracep->chgQData(oldp+477,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[22]),64);
            tracep->chgQData(oldp+479,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[23]),64);
            tracep->chgQData(oldp+481,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[24]),64);
            tracep->chgQData(oldp+483,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[25]),64);
            tracep->chgQData(oldp+485,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[26]),64);
            tracep->chgQData(oldp+487,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[27]),64);
            tracep->chgQData(oldp+489,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[28]),64);
            tracep->chgQData(oldp+491,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[29]),64);
            tracep->chgQData(oldp+493,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[30]),64);
            tracep->chgQData(oldp+495,(vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[31]),64);
            tracep->chgBit(oldp+497,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__en));
            tracep->chgBit(oldp+498,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_en));
            tracep->chgQData(oldp+499,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_value),64);
            tracep->chgQData(oldp+501,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__write_data),64);
            tracep->chgQData(oldp+503,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0]),64);
            tracep->chgQData(oldp+505,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[1]),64);
            tracep->chgQData(oldp+507,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[2]),64);
            tracep->chgQData(oldp+509,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[3]),64);
            tracep->chgQData(oldp+511,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[4]),64);
            tracep->chgQData(oldp+513,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[5]),64);
            tracep->chgQData(oldp+515,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[6]),64);
            tracep->chgQData(oldp+517,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[7]),64);
            tracep->chgQData(oldp+519,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[8]),64);
            tracep->chgQData(oldp+521,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[9]),64);
            tracep->chgQData(oldp+523,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[10]),64);
            tracep->chgQData(oldp+525,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[11]),64);
            tracep->chgQData(oldp+527,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[12]),64);
            tracep->chgQData(oldp+529,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[13]),64);
            tracep->chgQData(oldp+531,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[14]),64);
            tracep->chgQData(oldp+533,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[15]),64);
            tracep->chgQData(oldp+535,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[16]),64);
            tracep->chgQData(oldp+537,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[17]),64);
            tracep->chgQData(oldp+539,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[18]),64);
            tracep->chgQData(oldp+541,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[19]),64);
            tracep->chgQData(oldp+543,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[20]),64);
            tracep->chgQData(oldp+545,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[21]),64);
            tracep->chgQData(oldp+547,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[22]),64);
            tracep->chgQData(oldp+549,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[23]),64);
            tracep->chgQData(oldp+551,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[24]),64);
            tracep->chgQData(oldp+553,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[25]),64);
            tracep->chgQData(oldp+555,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[26]),64);
            tracep->chgQData(oldp+557,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[27]),64);
            tracep->chgQData(oldp+559,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[28]),64);
            tracep->chgQData(oldp+561,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[29]),64);
            tracep->chgQData(oldp+563,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[30]),64);
            tracep->chgQData(oldp+565,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[31]),64);
            tracep->chgQData(oldp+567,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[0]),64);
            tracep->chgQData(oldp+569,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[1]),64);
            tracep->chgQData(oldp+571,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[2]),64);
            tracep->chgQData(oldp+573,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[3]),64);
            tracep->chgQData(oldp+575,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[4]),64);
            tracep->chgQData(oldp+577,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[5]),64);
            tracep->chgQData(oldp+579,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[6]),64);
            tracep->chgQData(oldp+581,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[7]),64);
            tracep->chgQData(oldp+583,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[8]),64);
            tracep->chgQData(oldp+585,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[9]),64);
            tracep->chgQData(oldp+587,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[10]),64);
            tracep->chgQData(oldp+589,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[11]),64);
            tracep->chgQData(oldp+591,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[12]),64);
            tracep->chgQData(oldp+593,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[13]),64);
            tracep->chgQData(oldp+595,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[14]),64);
            tracep->chgQData(oldp+597,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[15]),64);
            tracep->chgQData(oldp+599,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[16]),64);
            tracep->chgQData(oldp+601,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[17]),64);
            tracep->chgQData(oldp+603,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[18]),64);
            tracep->chgQData(oldp+605,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[19]),64);
            tracep->chgQData(oldp+607,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[20]),64);
            tracep->chgQData(oldp+609,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[21]),64);
            tracep->chgQData(oldp+611,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[22]),64);
            tracep->chgQData(oldp+613,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[23]),64);
            tracep->chgQData(oldp+615,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[24]),64);
            tracep->chgQData(oldp+617,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[25]),64);
            tracep->chgQData(oldp+619,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[26]),64);
            tracep->chgQData(oldp+621,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[27]),64);
            tracep->chgQData(oldp+623,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[28]),64);
            tracep->chgQData(oldp+625,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[29]),64);
            tracep->chgQData(oldp+627,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[30]),64);
            tracep->chgQData(oldp+629,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[31]),64);
            tracep->chgQData(oldp+631,(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data),64);
            tracep->chgBit(oldp+633,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri0));
            tracep->chgBit(oldp+634,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri1));
            tracep->chgCData(oldp+635,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st),2);
            tracep->chgCData(oldp+636,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st),2);
            tracep->chgQData(oldp+637,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr),64);
            tracep->chgQData(oldp+639,(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr),64);
            tracep->chgSData(oldp+641,((0x3ffU & (IData)(
                                                         (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                          >> 0x36U)))),10);
            tracep->chgQData(oldp+642,((0xfffffffffffULL 
                                        & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                           >> 0xaU))),44);
            tracep->chgCData(oldp+644,((3U & (IData)(
                                                     (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                      >> 8U)))),2);
            tracep->chgBit(oldp+645,((1U & (IData)(
                                                   (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                    >> 7U)))));
            tracep->chgBit(oldp+646,((1U & (IData)(
                                                   (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                    >> 6U)))));
            tracep->chgBit(oldp+647,((1U & (IData)(
                                                   (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                    >> 5U)))));
            tracep->chgBit(oldp+648,((1U & (IData)(
                                                   (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                    >> 4U)))));
            tracep->chgBit(oldp+649,((1U & (IData)(
                                                   (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                    >> 3U)))));
            tracep->chgBit(oldp+650,((1U & (IData)(
                                                   (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                    >> 2U)))));
            tracep->chgBit(oldp+651,((1U & (IData)(
                                                   (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                                    >> 1U)))));
            tracep->chgBit(oldp+652,((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte))));
            tracep->chgBit(oldp+653,(((IData)(vlTOPp->SimTop__DOT__core__DOT__update) 
                                      & (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__wri_nop)))));
            tracep->chgBit(oldp+654,((1U & (((vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U] 
                                              >> 1U) 
                                             | vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[4U]) 
                                            & (~ (vlTOPp->SimTop__DOT__core__DOT__wri_mem_st[2U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+655,((0U != (7U & (
                                                   vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                                   >> 0xfU)))));
            tracep->chgCData(oldp+656,((0x1fU & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                                 >> 0x12U))),8);
            tracep->chgQData(oldp+657,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0U]),64);
            tracep->chgQData(oldp+659,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [1U]),64);
            tracep->chgQData(oldp+661,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [2U]),64);
            tracep->chgQData(oldp+663,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [3U]),64);
            tracep->chgQData(oldp+665,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [4U]),64);
            tracep->chgQData(oldp+667,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [5U]),64);
            tracep->chgQData(oldp+669,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [6U]),64);
            tracep->chgQData(oldp+671,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [7U]),64);
            tracep->chgQData(oldp+673,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [8U]),64);
            tracep->chgQData(oldp+675,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [9U]),64);
            tracep->chgQData(oldp+677,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0xaU]),64);
            tracep->chgQData(oldp+679,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0xbU]),64);
            tracep->chgQData(oldp+681,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0xcU]),64);
            tracep->chgQData(oldp+683,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0xdU]),64);
            tracep->chgQData(oldp+685,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0xeU]),64);
            tracep->chgQData(oldp+687,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0xfU]),64);
            tracep->chgQData(oldp+689,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x10U]),64);
            tracep->chgQData(oldp+691,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x11U]),64);
            tracep->chgQData(oldp+693,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x12U]),64);
            tracep->chgQData(oldp+695,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x13U]),64);
            tracep->chgQData(oldp+697,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x14U]),64);
            tracep->chgQData(oldp+699,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x15U]),64);
            tracep->chgQData(oldp+701,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x16U]),64);
            tracep->chgQData(oldp+703,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x17U]),64);
            tracep->chgQData(oldp+705,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x18U]),64);
            tracep->chgQData(oldp+707,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x19U]),64);
            tracep->chgQData(oldp+709,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x1aU]),64);
            tracep->chgQData(oldp+711,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x1bU]),64);
            tracep->chgQData(oldp+713,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x1cU]),64);
            tracep->chgQData(oldp+715,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x1dU]),64);
            tracep->chgQData(oldp+717,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x1eU]),64);
            tracep->chgQData(oldp+719,(vlTOPp->SimTop__DOT__core__DOT__Regs
                                       [0x1fU]),64);
            tracep->chgQData(oldp+721,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU])))),64);
            tracep->chgQData(oldp+723,((0x800000030001e000ULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]))))),64);
            tracep->chgQData(oldp+725,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__CSRs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__CSRs[6U])))),64);
            tracep->chgBit(oldp+727,((1U & (vlTOPp->SimTop__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+728,((1U & vlTOPp->SimTop__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+729,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+731,((1U & vlTOPp->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+732,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__ireq[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+734,(vlTOPp->SimTop__DOT__icvt__DOT__inst__DOT__okay));
            tracep->chgBit(oldp+735,(vlTOPp->SimTop__DOT__dcvt__DOT__okay));
            tracep->chgBit(oldp+736,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+737,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+738,((7U & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 0xeU) 
                                              | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x12U)))),3);
            tracep->chgQData(oldp+739,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+741,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                                    >> 0xaU)))),8);
            tracep->chgQData(oldp+742,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+744,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[1U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                                    >> 2U)))),8);
            tracep->chgCData(oldp+745,((3U & vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+746,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+747,((1U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+748,((7U & (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+749,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+751,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[8U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                                    >> 1U)))),8);
            tracep->chgQData(oldp+752,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+754,((0xffU & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+755,((3U & ((vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 9U) 
                                              | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x17U)))),2);
            tracep->chgBit(oldp+756,(vlTOPp->SimTop__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+757,(vlTOPp->SimTop__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+758,(vlTOPp->SimTop__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+759,((1U & (vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+760,((1U & (vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+761,((7U & (vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+762,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+764,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__saved_req[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->SimTop__DOT__mux__DOT__saved_req[2U] 
                                                    >> 0xaU)))),8);
            tracep->chgQData(oldp+765,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+767,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__saved_req[1U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->SimTop__DOT__mux__DOT__saved_req[0U] 
                                                    >> 2U)))),8);
            tracep->chgCData(oldp+768,((3U & vlTOPp->SimTop__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+769,((1U & (vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+770,((1U & (vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+771,((7U & (vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+772,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+774,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__selected_req[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U] 
                                                    >> 0xaU)))),8);
            tracep->chgQData(oldp+775,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+777,((0xffU & ((vlTOPp->SimTop__DOT__mux__DOT__selected_req[1U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U] 
                                                    >> 2U)))),8);
            tracep->chgCData(oldp+778,((3U & vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+779,(vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+780,(vlTOPp->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+781,((1U & (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+782,((1U & (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+783,((7U & (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+784,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+786,((0xffU & ((vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                    >> 0xaU)))),8);
            tracep->chgQData(oldp+787,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+789,((0xffU & ((vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[1U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                    >> 2U)))),8);
            tracep->chgCData(oldp+790,((3U & vlTOPp->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+791,(vlTOPp->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+792,(vlTOPp->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+793,(vlTOPp->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+794,(vlTOPp->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+796,(vlTOPp->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+798,(vlTOPp->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+800,(vlTOPp->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+802,(vlTOPp->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+804,(vlTOPp->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+806,(vlTOPp->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+808,(vlTOPp->SimTop__DOT__ram__DOT__mtime),64);
            tracep->chgQData(oldp+810,(vlTOPp->SimTop__DOT__ram__DOT__mtimecmp),64);
            tracep->chgBit(oldp+812,(vlTOPp->SimTop__DOT__ram__DOT__msip));
        }
        tracep->chgBit(oldp+813,(vlTOPp->clock));
        tracep->chgBit(oldp+814,(vlTOPp->reset));
        tracep->chgQData(oldp+815,(vlTOPp->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+817,(vlTOPp->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+819,(vlTOPp->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+821,(vlTOPp->io_perfInfo_clean));
        tracep->chgBit(oldp+822,(vlTOPp->io_perfInfo_dump));
        tracep->chgBit(oldp+823,(vlTOPp->io_uart_out_valid));
        tracep->chgCData(oldp+824,(vlTOPp->io_uart_out_ch),8);
        tracep->chgBit(oldp+825,(vlTOPp->io_uart_in_valid));
        tracep->chgCData(oldp+826,(vlTOPp->io_uart_in_ch),8);
    }
}

void VSimTop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
