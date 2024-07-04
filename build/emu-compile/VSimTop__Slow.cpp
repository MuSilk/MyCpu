// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VSimTop) {
    VSimTop__Syms* __restrict vlSymsp = __VlSymsp = new VSimTop__Syms(this, name());
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, VSimTop___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSimTop::__Vconfigure(VSimTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSimTop::~VSimTop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSimTop::_initial__TOP__1(VSimTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop::_initial__TOP__1\n"); );
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1[5];
    WData/*159:0*/ __Vtemp2[5];
    // Body
    vlTOPp->io_uart_out_valid = 0U;
    vlTOPp->io_uart_out_ch = 0U;
    vlTOPp->io_uart_in_valid = 0U;
    VL_RAND_RESET_W(151, __Vtemp1);
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[0U] = 
        __Vtemp1[0U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[1U] = 
        __Vtemp1[1U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[2U] = 
        __Vtemp1[2U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[3U] = 
        __Vtemp1[3U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[4U] = 
        __Vtemp1[4U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(151, __Vtemp2);
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[0U] = 
        __Vtemp2[0U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[1U] = 
        __Vtemp2[1U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[2U] = 
        __Vtemp2[2U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[3U] = 
        __Vtemp2[3U];
    vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[4U] = 
        __Vtemp2[4U];
}

void VSimTop::_settle__TOP__2(VSimTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop::_settle__TOP__2\n"); );
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp14[5];
    WData/*159:0*/ __Vtemp15[5];
    // Body
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[0U] = 0ULL;
    if (vlTOPp->SimTop__DOT__mux__DOT__busy) {
        vlTOPp->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 2U;
    }
    vlTOPp->SimTop__DOT__ram__DOT__idx = ((0x80000000ULL 
                                           < vlTOPp->SimTop__DOT__ram__DOT__addr)
                                           ? ((vlTOPp->SimTop__DOT__ram__DOT__addr 
                                               - 0x80000000ULL) 
                                              >> 3U)
                                           : 0ULL);
    vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U] = (IData)(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__pc_now);
    vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U] = (IData)(
                                                          (vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__pc_now 
                                                           >> 0x20U));
    vlTOPp->SimTop__DOT__core__DOT__mode = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode;
    if ((3U == (7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))) {
        vlTOPp->SimTop__DOT__core__DOT__mode = (3U 
                                                & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU] 
                                                    << 0x15U) 
                                                   | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                                                      >> 0xbU)));
    } else {
        if ((4U == (7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))) {
            vlTOPp->SimTop__DOT__core__DOT__mode = 3U;
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__muldivfinished 
        = (1U & ((0x1000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                  ? ((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__cnt) 
                     >> 5U) : ((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__cnt) 
                               >> 6U)));
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_value 
        = (((((((((0x304U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                         << 0x1dU) 
                                        | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                           >> 3U)))) 
                  | (0x344U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                           << 0x1dU) 
                                          | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                             >> 3U))))) 
                 | (0x305U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                          << 0x1dU) 
                                         | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                            >> 3U))))) 
                | (0x300U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                         << 0x1dU) 
                                        | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                           >> 3U))))) 
               | (0x340U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                        << 0x1dU) | 
                                       (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                        >> 3U))))) 
              | (0x341U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                       << 0x1dU) | 
                                      (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                       >> 3U))))) | 
             (0x342U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                    << 0x1dU) | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                 >> 3U))))) 
            | (0xb00U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                     << 0x1dU) | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                  >> 3U)))))
            ? ((0x304U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                      << 0x1dU) | (
                                                   vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                   >> 3U))))
                ? (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x13U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x12U])))
                : ((0x344U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                          << 0x1dU) 
                                         | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                            >> 3U))))
                    ? (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x11U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x10U])))
                    : ((0x305U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                              << 0x1dU) 
                                             | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                >> 3U))))
                        ? (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU])))
                        : ((0x300U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                    >> 3U))))
                            ? (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU])))
                            : ((0x340U == (0xfffU & 
                                           ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                             << 0x1dU) 
                                            | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                               >> 3U))))
                                ? (((QData)((IData)(
                                                    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xbU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xaU])))
                                : ((0x341U == (0xfffU 
                                               & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                     >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U])))
                                    : ((0x342U == (0xfffU 
                                                   & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                       << 0x1dU) 
                                                      | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                         >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[4U])))
                                        : (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[2U]))))))))))
            : ((0x343U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                      << 0x1dU) | (
                                                   vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                   >> 3U))))
                ? (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0U])))
                : ((0x180U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                          << 0x1dU) 
                                         | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                            >> 3U))))
                    ? (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[6U])))
                    : 0ULL)));
    if ((4U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
        if ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
            if ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
                vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data = 0ULL;
            } else {
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data 
                            = (QData)((IData)((vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                               >> 0x20U)));
                    }
                } else {
                    vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data 
                        = (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data));
                }
            }
        } else {
            vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data 
                = ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))
                    ? ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                        ? ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                          >> 0x30U)))))
                            : (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                          >> 0x20U))))))
                        : ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                          >> 0x10U)))))
                            : (QData)((IData)((0xffffU 
                                               & (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data))))))
                    : ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                        ? ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                              >> 0x38U)))))
                                : (QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                              >> 0x30U))))))
                            : ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                              >> 0x28U)))))
                                : (QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                              >> 0x20U)))))))
                        : ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                              >> 0x18U)))))
                                : (QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                              >> 0x10U))))))
                            : ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                              >> 8U)))))
                                : (QData)((IData)((0xffU 
                                                   & (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data))))))));
        }
    } else {
        if ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
            if ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
                vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data 
                    = vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data;
            } else {
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data 
                            = (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                       >> 0x3fU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                             >> 0x20U))));
                    }
                } else {
                    vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data)));
                }
            }
        } else {
            vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_data 
                = ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))
                    ? ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                        ? ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? ((0xffffffffffff0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                  >> 0x3fU)))))) 
                                   << 0x10U)) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                            >> 0x30U))))))
                            : ((0xffffffffffff0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                  >> 0x2fU)))))) 
                                   << 0x10U)) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                            >> 0x20U)))))))
                        : ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? ((0xffffffffffff0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                  >> 0x1fU)))))) 
                                   << 0x10U)) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                            >> 0x10U))))))
                            : ((0xffffffffffff0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                  >> 0xfU)))))) 
                                   << 0x10U)) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data)))))))
                    : ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                        ? ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 0x3fU)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                             >> 0x38U))))))
                                : ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 0x37U)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                             >> 0x30U)))))))
                            : ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 0x2fU)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                             >> 0x28U))))))
                                : ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 0x27U)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                             >> 0x20U))))))))
                        : ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                            ? ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 0x1fU)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                             >> 0x18U))))))
                                : ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 0x17U)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                             >> 0x10U)))))))
                            : ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])
                                ? ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 0xfU)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                             >> 8U))))))
                                : ((0xffffffffffffff00ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data 
                                                                      >> 7U)))))) 
                                       << 8U)) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__raw_data)))))))));
        }
    }
    if ((4U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
        if ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
            if ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0x300U | (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]));
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] = 0U;
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] = 0U;
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]);
            } else {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0x200U | (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]));
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0xf0U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])) 
                                       << 0x20U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])) 
                                        << 0x20U) >> 0x20U));
                    }
                } else {
                    vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                        = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                           | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                               ? 0xfU : 0U));
                    vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                        = (IData)((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])));
                    vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                        = (IData)(((QData)((IData)(
                                                   vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])) 
                                   >> 0x20U));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0x100U | (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]));
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0xc0U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       << 0x30U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                        << 0x30U) >> 0x20U));
                    } else {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0x30U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       << 0x20U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                        << 0x20U) >> 0x20U));
                    }
                } else {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0xcU : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       << 0x10U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                        << 0x10U) >> 0x20U));
                    } else {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 3U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)((QData)((IData)(
                                                      (0xffffU 
                                                       & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       >> 0x20U));
                    }
                }
            } else {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]);
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x80U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x38U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x38U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x40U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x30U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x30U) 
                                           >> 0x20U));
                        }
                    } else {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x20U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x28U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x28U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x10U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x20U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x20U) 
                                           >> 0x20U));
                        }
                    }
                } else {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 8U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x18U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x18U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 4U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x10U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x10U) 
                                           >> 0x20U));
                        }
                    } else {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 2U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 8U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 8U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 1U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)((QData)((IData)(
                                                          (0xffU 
                                                           & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           >> 0x20U));
                        }
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
            if ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0x300U | (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]));
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                    = (IData)((((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))));
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                    = (IData)(((((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                               >> 0x20U));
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                       | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                           ? 0xffU : 0U));
            } else {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0x200U | (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]));
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0xf0U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])) 
                                       << 0x20U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])) 
                                        << 0x20U) >> 0x20U));
                    }
                } else {
                    vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                        = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                           | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                               ? 0xfU : 0U));
                    vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                        = (IData)((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])));
                    vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                        = (IData)(((QData)((IData)(
                                                   vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U])) 
                                   >> 0x20U));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__mem_fun3))) {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0x100U | (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]));
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0xc0U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       << 0x30U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                        << 0x30U) >> 0x20U));
                    } else {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0x30U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       << 0x20U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                        << 0x20U) >> 0x20U));
                    }
                } else {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 0xcU : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       << 0x10U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)((((QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                        << 0x10U) >> 0x20U));
                    } else {
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                            = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                               | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                   ? 3U : 0U));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                            = (IData)((QData)((IData)(
                                                      (0xffffU 
                                                       & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))));
                        vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                            = (IData)(((QData)((IData)(
                                                       (0xffffU 
                                                        & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                       >> 0x20U));
                    }
                }
            } else {
                vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                    = (0xfffff8ffU & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]);
                if ((4U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x80U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x38U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x38U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x40U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x30U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x30U) 
                                           >> 0x20U));
                        }
                    } else {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x20U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x28U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x28U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 0x10U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x20U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x20U) 
                                           >> 0x20U));
                        }
                    }
                } else {
                    if ((2U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 8U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x18U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x18U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 4U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 0x10U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 0x10U) 
                                           >> 0x20U));
                        }
                    } else {
                        if ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])) {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 2U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           << 8U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                            << 8U) 
                                           >> 0x20U));
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                = ((0xffffff00U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                   | ((1U & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U])
                                       ? 1U : 0U));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U] 
                                = (IData)((QData)((IData)(
                                                          (0xffU 
                                                           & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))));
                            vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U] 
                                = (IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[0U]))) 
                                           >> 0x20U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_op 
        = (1U & ((vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U] 
                  >> 1U) | vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[4U]));
    vlTOPp->SimTop__DOT__core__DOT__csr_fet_clear = 
        ((~ (IData)(vlTOPp->SimTop__DOT__core__DOT__wri_nop)) 
         & (0U != (7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__st_pc = 0U;
    if ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                          >> 4U)))) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT__st_pc = 3U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT__st_pc = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT__st_pc = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__imm_now 
        = ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)
            ? ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)
                ? ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                    ? ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                        ? 0ULL : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                   ? 0ULL : ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                              ? ((1U 
                                                  & vlTOPp->SimTop__DOT__core__DOT__func)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                       >> 0xcU)))
                                                   ? 0ULL
                                                   : (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                         >> 0xfU)))))
                                                  : 0ULL)
                                              : 0ULL)))
                    : ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                        ? ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                            ? ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                ? ((1U & vlTOPp->SimTop__DOT__core__DOT__func)
                                    ? ((0xffffffffffe00000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                  >> 0x1fU))))) 
                                           << 0x15U)) 
                                       | (QData)((IData)(
                                                         ((0x100000U 
                                                           & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                              >> 0xbU)) 
                                                          | ((0xff000U 
                                                              & vlTOPp->SimTop__DOT__core__DOT__func) 
                                                             | ((0x800U 
                                                                 & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                      >> 0x14U))))))))
                                    : 0ULL) : 0ULL)
                            : 0ULL) : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                        ? ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                            ? ((1U 
                                                & vlTOPp->SimTop__DOT__core__DOT__func)
                                                ? (
                                                   (0xfffffffffffff000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                              >> 0x1fU))))) 
                                                       << 0xcU)) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                         >> 0x14U)))))
                                                : 0ULL)
                                            : 0ULL)
                                        : ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                            ? ((1U 
                                                & vlTOPp->SimTop__DOT__core__DOT__func)
                                                ? (
                                                   (0xffffffffffffe000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                              >> 0x1fU))))) 
                                                       << 0xdU)) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                          >> 0x13U)) 
                                                                      | ((0x800U 
                                                                          & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                                >> 7U))))))))
                                                : 0ULL)
                                            : 0ULL))))
                : 0ULL) : ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)
                            ? ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                                ? ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                                    ? 0ULL : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                               ? ((2U 
                                                   & vlTOPp->SimTop__DOT__core__DOT__func)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlTOPp->SimTop__DOT__core__DOT__func))))
                                                    : 0ULL)
                                                   : 0ULL)
                                               : 0ULL))
                                : ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                                    ? 0ULL : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlTOPp->SimTop__DOT__core__DOT__func)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   ((0xfffffffffffff000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU)) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                             >> 7U))))))
                                                    : 0ULL)
                                                   : 0ULL))))
                            : ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                                ? ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                                    ? ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                        ? 0ULL : ((2U 
                                                   & vlTOPp->SimTop__DOT__core__DOT__func)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   ((0xfffffffffffff000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU)) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                          >> 0x14U)))))
                                                    : 0ULL)
                                                   : 0ULL))
                                    : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                        ? ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                            ? ((1U 
                                                & vlTOPp->SimTop__DOT__core__DOT__func)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlTOPp->SimTop__DOT__core__DOT__func))))
                                                : 0ULL)
                                            : 0ULL)
                                        : ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                            ? ((1U 
                                                & vlTOPp->SimTop__DOT__core__DOT__func)
                                                ? (
                                                   (0xfffffffffffff000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                              >> 0x1fU))))) 
                                                       << 0xcU)) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                         >> 0x14U)))))
                                                : 0ULL)
                                            : 0ULL)))
                                : ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                                    ? 0ULL : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlTOPp->SimTop__DOT__core__DOT__func)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   ((0xfffffffffffff000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU)) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                                          >> 0x14U)))))
                                                    : 0ULL)
                                                   : 0ULL))))));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U] 
        = ((0x3ffffU & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U]) 
           | (0x7c0000U & (vlTOPp->SimTop__DOT__core__DOT__func 
                           << 0xbU)));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write = 0U;
    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                          >> 4U)))) {
                if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                          >> 4U)))) {
                if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read = 0U;
    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                          >> 4U)))) {
                if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read = 0U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                          >> 4U)))) {
                if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__csr_rd = 0U;
    if ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                if ((0U != (7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                  >> 0xcU)))) {
                                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__csr_rd 
                                        = (0xfffU & 
                                           (vlTOPp->SimTop__DOT__core__DOT__func 
                                            >> 0x14U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_rd 
        = ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)
            ? ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)
                ? ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                    ? ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                        ? 0U : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                 ? 0U : ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                          ? ((1U & vlTOPp->SimTop__DOT__core__DOT__func)
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                      >> 0xcU)))
                                                  ? 0U
                                                  : 6U)
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                     ? ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                         ? ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                             ? ((1U & vlTOPp->SimTop__DOT__core__DOT__func)
                                 ? 4U : 0U) : 0U) : 0U)
                     : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                         ? ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                             ? ((1U & vlTOPp->SimTop__DOT__core__DOT__func)
                                 ? 4U : 0U) : 0U) : 0U)))
                : 0U) : ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)
                          ? ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                              ? ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                                  ? ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                      ? 0U : ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                               ? ((1U 
                                                   & vlTOPp->SimTop__DOT__core__DOT__func)
                                                   ? 3U
                                                   : 0U)
                                               : 0U))
                                  : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                      ? ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                          ? ((1U & vlTOPp->SimTop__DOT__core__DOT__func)
                                              ? 1U : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->SimTop__DOT__core__DOT__func)
                                                     ? 3U
                                                     : 0U)
                                                    : 0U)))
                              : 0U) : ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                                        ? ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                                            ? ((4U 
                                                & vlTOPp->SimTop__DOT__core__DOT__func)
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->SimTop__DOT__core__DOT__func)
                                                     ? 3U
                                                     : 0U)
                                                    : 0U))
                                            : ((4U 
                                                & vlTOPp->SimTop__DOT__core__DOT__func)
                                                ? (
                                                   (2U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->SimTop__DOT__core__DOT__func)
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__func)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->SimTop__DOT__core__DOT__func)
                                                     ? 3U
                                                     : 0U)
                                                    : 0U)))
                                        : ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                                            ? 0U : 
                                           ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                             ? 0U : 
                                            ((2U & vlTOPp->SimTop__DOT__core__DOT__func)
                                              ? ((1U 
                                                  & vlTOPp->SimTop__DOT__core__DOT__func)
                                                  ? 5U
                                                  : 0U)
                                              : 0U))))));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 0U;
    if ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                if ((0U == (7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                  >> 0xcU)))) {
                                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr 
                                        = ((0x73U == vlTOPp->SimTop__DOT__core__DOT__func)
                                            ? 4U : 
                                           ((0x30200073U 
                                             == vlTOPp->SimTop__DOT__core__DOT__func)
                                             ? 3U : 5U));
                                } else {
                                    if ((0x4000U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                        if ((0x4000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 1U;
                                        }
                                    } else {
                                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    } else {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                    }
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
        }
    } else {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = 4U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 0ULL;
    if ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                if ((0U == (7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                  >> 0xcU)))) {
                                    if ((0x73U == vlTOPp->SimTop__DOT__core__DOT__func)) {
                                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code 
                                            = ((2U 
                                                & (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode))
                                                    ? 0xbULL
                                                    : 0xaULL)
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode))
                                                    ? 9ULL
                                                    : 8ULL));
                                    } else {
                                        if ((0x30200073U 
                                             != vlTOPp->SimTop__DOT__core__DOT__func)) {
                                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 0ULL;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    } else {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                    }
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                }
            }
        } else {
            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
        }
    } else {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                } else {
                    if ((4U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                        vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                    } else {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & (~ vlTOPp->SimTop__DOT__core__DOT__func))) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                            }
                        } else {
                            vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = 2ULL;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__dec_exe_st = ((0x7fff83U 
                                                   & vlTOPp->SimTop__DOT__core__DOT__dec_exe_st) 
                                                  | (0x7cU 
                                                     & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                        >> 0x12U)));
    vlTOPp->SimTop__DOT__core__DOT__dec_exe_st = ((0x7ff07fU 
                                                   & vlTOPp->SimTop__DOT__core__DOT__dec_exe_st) 
                                                  | (0xf80U 
                                                     & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                        >> 8U)));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width = 0U;
    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10 = 0U;
    if ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)) {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                          >> 4U)))) {
                if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10 
                                    = ((0U == (3U & 
                                               (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 0xdU)))
                                        ? 0x100U : 
                                       ((2U == (3U 
                                                & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                   >> 0xdU)))
                                         ? 2U : ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                      >> 0xdU)))
                                                  ? 3U
                                                  : 0x80U)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)) {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10 
                                    = ((0x3f8U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                  >> 0x16U)) 
                                       | (7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 0xcU)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10 
                                    = ((0x3f8U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                  >> 0x16U)) 
                                       | (7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 0xcU)));
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                if ((8U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10 
                                    = ((((5U == (7U 
                                                 & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                    >> 0xcU)))
                                          ? (0x7eU 
                                             & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 0x19U))
                                          : 0U) << 3U) 
                                       | (7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 0xcU)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                            if ((1U & vlTOPp->SimTop__DOT__core__DOT__func)) {
                                vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10 
                                    = ((((5U == (7U 
                                                 & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                    >> 0xcU)))
                                          ? (0x7eU 
                                             & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 0x19U))
                                          : 0U) << 3U) 
                                       | (7U & (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 0xcU)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__imm_calc 
        = (1U & ((0x40U & vlTOPp->SimTop__DOT__core__DOT__func)
                  ? ((vlTOPp->SimTop__DOT__core__DOT__func 
                      >> 5U) & ((~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                    >> 4U)) & ((8U 
                                                & vlTOPp->SimTop__DOT__core__DOT__func)
                                                ? (
                                                   (vlTOPp->SimTop__DOT__core__DOT__func 
                                                    >> 2U) 
                                                   & ((vlTOPp->SimTop__DOT__core__DOT__func 
                                                       >> 1U) 
                                                      & vlTOPp->SimTop__DOT__core__DOT__func))
                                                : (
                                                   (vlTOPp->SimTop__DOT__core__DOT__func 
                                                    >> 2U) 
                                                   & ((vlTOPp->SimTop__DOT__core__DOT__func 
                                                       >> 1U) 
                                                      & vlTOPp->SimTop__DOT__core__DOT__func)))))
                  : ((0x20U & vlTOPp->SimTop__DOT__core__DOT__func)
                      ? ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                          ? ((~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                 >> 3U)) & ((vlTOPp->SimTop__DOT__core__DOT__func 
                                             >> 2U) 
                                            & ((vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 1U) 
                                               & vlTOPp->SimTop__DOT__core__DOT__func)))
                          : ((~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                 >> 3U)) & ((~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 2U)) 
                                            & ((vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 1U) 
                                               & vlTOPp->SimTop__DOT__core__DOT__func))))
                      : ((0x10U & vlTOPp->SimTop__DOT__core__DOT__func)
                          ? ((8U & vlTOPp->SimTop__DOT__core__DOT__func)
                              ? ((~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                     >> 2U)) & ((vlTOPp->SimTop__DOT__core__DOT__func 
                                                 >> 1U) 
                                                & vlTOPp->SimTop__DOT__core__DOT__func))
                              : ((4U & vlTOPp->SimTop__DOT__core__DOT__func)
                                  ? ((vlTOPp->SimTop__DOT__core__DOT__func 
                                      >> 1U) & vlTOPp->SimTop__DOT__core__DOT__func)
                                  : ((vlTOPp->SimTop__DOT__core__DOT__func 
                                      >> 1U) & vlTOPp->SimTop__DOT__core__DOT__func)))
                          : ((~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                 >> 3U)) & ((~ (vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 2U)) 
                                            & ((vlTOPp->SimTop__DOT__core__DOT__func 
                                                >> 1U) 
                                               & vlTOPp->SimTop__DOT__core__DOT__func)))))));
    vlTOPp->SimTop__DOT__core__DOT__valA = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [(0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                   >> 7U))];
    vlTOPp->SimTop__DOT__core__DOT__valB = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [(0x1fU & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                   >> 2U))];
    vlTOPp->SimTop__DOT__oresp[0U] = 0U;
    vlTOPp->SimTop__DOT__oresp[1U] = 0U;
    vlTOPp->SimTop__DOT__oresp[2U] = 0U;
    if (VL_ONEHOT0_I((((3U == (IData)(vlTOPp->SimTop__DOT__ram__DOT__state)) 
                       << 1U) | (2U == (IData)(vlTOPp->SimTop__DOT__ram__DOT__state))))) {
        if ((2U == (IData)(vlTOPp->SimTop__DOT__ram__DOT__state))) {
            vlTOPp->SimTop__DOT__oresp[2U] = (2U | 
                                              vlTOPp->SimTop__DOT__oresp[2U]);
            vlTOPp->SimTop__DOT__oresp[2U] = ((2U & 
                                               vlTOPp->SimTop__DOT__oresp[2U]) 
                                              | (0U 
                                                 == (IData)(vlTOPp->SimTop__DOT__ram__DOT__count_down)));
            if ((0x40600008ULL == vlTOPp->SimTop__DOT__ram__DOT__addr)) {
                vlTOPp->SimTop__DOT__oresp[0U] = 0U;
                vlTOPp->SimTop__DOT__oresp[1U] = 0U;
            } else {
                if ((0x38000000ULL == vlTOPp->SimTop__DOT__ram__DOT__addr)) {
                    vlTOPp->SimTop__DOT__oresp[0U] 
                        = (IData)((QData)((IData)(vlTOPp->SimTop__DOT__ram__DOT__msip)));
                    vlTOPp->SimTop__DOT__oresp[1U] 
                        = (IData)(((QData)((IData)(vlTOPp->SimTop__DOT__ram__DOT__msip)) 
                                   >> 0x20U));
                } else {
                    if ((0x38004000ULL == vlTOPp->SimTop__DOT__ram__DOT__addr)) {
                        vlTOPp->SimTop__DOT__oresp[0U] 
                            = (IData)(vlTOPp->SimTop__DOT__ram__DOT__mtimecmp);
                        vlTOPp->SimTop__DOT__oresp[1U] 
                            = (IData)((vlTOPp->SimTop__DOT__ram__DOT__mtimecmp 
                                       >> 0x20U));
                    } else {
                        if ((0x3800bff8ULL == vlTOPp->SimTop__DOT__ram__DOT__addr)) {
                            vlTOPp->SimTop__DOT__oresp[0U] 
                                = (IData)(vlTOPp->SimTop__DOT__ram__DOT__mtime);
                            vlTOPp->SimTop__DOT__oresp[1U] 
                                = (IData)((vlTOPp->SimTop__DOT__ram__DOT__mtime 
                                           >> 0x20U));
                        } else {
                            if ((0x20003000ULL == vlTOPp->SimTop__DOT__ram__DOT__addr)) {
                                vlTOPp->SimTop__DOT__oresp[0U] 
                                    = (IData)(vlTOPp->SimTop__DOT__ram__DOT__ms_cnt);
                                vlTOPp->SimTop__DOT__oresp[1U] 
                                    = (IData)((vlTOPp->SimTop__DOT__ram__DOT__ms_cnt 
                                               >> 0x20U));
                            } else {
                                if ((0x23333008ULL 
                                     == vlTOPp->SimTop__DOT__ram__DOT__addr)) {
                                    vlSymsp->TOP____024unit.__Vdpiimwrap_get_switch_TOP____024unit(vlTOPp->__Vfunc_get_switch__5__Vfuncout);
                                    vlTOPp->SimTop__DOT__oresp[0U] 
                                        = (IData)((QData)((IData)(vlTOPp->__Vfunc_get_switch__5__Vfuncout)));
                                    vlTOPp->SimTop__DOT__oresp[1U] 
                                        = (IData)(((QData)((IData)(vlTOPp->__Vfunc_get_switch__5__Vfuncout)) 
                                                   >> 0x20U));
                                } else {
                                    vlSymsp->TOP____024unit.__Vdpiimwrap_ram_read_helper_TOP____024unit(1U, vlTOPp->SimTop__DOT__ram__DOT__idx, vlTOPp->__Vfunc_ram_read_helper__6__Vfuncout);
                                    vlTOPp->SimTop__DOT__oresp[0U] 
                                        = (IData)(vlTOPp->__Vfunc_ram_read_helper__6__Vfuncout);
                                    vlTOPp->SimTop__DOT__oresp[1U] 
                                        = (IData)((vlTOPp->__Vfunc_ram_read_helper__6__Vfuncout 
                                                   >> 0x20U));
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ VL_ONEHOT0_I((((0x23333008ULL 
                                         == vlTOPp->SimTop__DOT__ram__DOT__addr) 
                                        << 5U) | ((
                                                   (0x20003000ULL 
                                                    == vlTOPp->SimTop__DOT__ram__DOT__addr) 
                                                   << 4U) 
                                                  | (((0x3800bff8ULL 
                                                       == vlTOPp->SimTop__DOT__ram__DOT__addr) 
                                                      << 3U) 
                                                     | (((0x38004000ULL 
                                                          == vlTOPp->SimTop__DOT__ram__DOT__addr) 
                                                         << 2U) 
                                                        | (((0x38000000ULL 
                                                             == vlTOPp->SimTop__DOT__ram__DOT__addr) 
                                                            << 1U) 
                                                           | (0x40600008ULL 
                                                              == vlTOPp->SimTop__DOT__ram__DOT__addr)))))))))) {
                if (VL_UNLIKELY(Verilated::assertOn())) {
                    VL_WRITEF("[%0t] %%Error: ram.sv:239: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                              64,VL_TIME_UNITED_Q(1),
                              vlSymsp->name());
                    VL_STOP_MT("src/test/vsrc/common/ram.sv", 239, "");
                }
            }
        } else {
            if ((3U == (IData)(vlTOPp->SimTop__DOT__ram__DOT__state))) {
                vlTOPp->SimTop__DOT__oresp[2U] = (2U 
                                                  | vlTOPp->SimTop__DOT__oresp[2U]);
                vlTOPp->SimTop__DOT__oresp[2U] = ((2U 
                                                   & vlTOPp->SimTop__DOT__oresp[2U]) 
                                                  | (0U 
                                                     == (IData)(vlTOPp->SimTop__DOT__ram__DOT__count_down)));
            } else {
                vlTOPp->SimTop__DOT__oresp[0U] = 0U;
                vlTOPp->SimTop__DOT__oresp[1U] = 0U;
                vlTOPp->SimTop__DOT__oresp[2U] = 0U;
            }
        }
    } else {
        if (VL_UNLIKELY(Verilated::assertOn())) {
            VL_WRITEF("[%0t] %%Error: ram.sv:236: Assertion failed in %NSimTop.ram: 'unique if' statement violated\n",
                      64,VL_TIME_UNITED_Q(1),vlSymsp->name());
            VL_STOP_MT("src/test/vsrc/common/ram.sv", 236, "");
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
        = ((1U == (3U & (IData)(vlTOPp->SimTop__DOT__core__DOT__wri_fun3)))
            ? (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                << 0x3dU) | (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[4U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])) 
                                           >> 3U)))
            : ((2U == (3U & (IData)(vlTOPp->SimTop__DOT__core__DOT__wri_fun3)))
                ? ((((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                     << 0x3dU) | (((QData)((IData)(
                                                   vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[4U])) 
                                   << 0x1dU) | ((QData)((IData)(
                                                                vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])) 
                                                >> 3U))) 
                   | vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_value)
                : ((3U == (3U & (IData)(vlTOPp->SimTop__DOT__core__DOT__wri_fun3)))
                    ? ((~ (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                            << 0x3dU) | (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[4U])) 
                                          << 0x1dU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])) 
                                            >> 3U)))) 
                       & vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_value)
                    : (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                        << 0x3dU) | (((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[4U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U])) 
                                                   >> 3U))))));
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__write_data 
        = ((6U == (7U & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                         >> 0xfU))) ? vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_value
            : (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U])) 
                << 0x31U) | (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U])) 
                              << 0x11U) | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U])) 
                                           >> 0xfU))));
    vlTOPp->SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop 
        = ((IData)(vlTOPp->SimTop__DOT__core__DOT__mem_nop) 
           | (IData)(vlTOPp->SimTop__DOT__core__DOT__csr_fet_clear));
    vlTOPp->SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop 
        = ((IData)(vlTOPp->SimTop__DOT__core__DOT__exe_nop) 
           | (IData)(vlTOPp->SimTop__DOT__core__DOT__csr_fet_clear));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U] 
        = ((2U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U]) 
           | (IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U] 
        = ((1U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__mem_now[4U]) 
           | (0xfffffffeU & ((IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read) 
                             << 1U)));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U] 
        = ((0xffff8007U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[5U]) 
           | (0xfffffff8U & ((IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__csr_rd) 
                             << 3U)));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U] 
        = ((0x7c7fffU & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[7U]) 
           | (0xffff8000U & ((IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_rd) 
                             << 0xfU)));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[3U] 
        = ((0xfffffff8U & vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[3U]) 
           | (IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[1U] 
        = (IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code);
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__wri_now[2U] 
        = (IData)((vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code 
                   >> 0x20U));
    vlTOPp->SimTop__DOT__core__DOT__dec_exe_st = ((0x7fefffU 
                                                   & vlTOPp->SimTop__DOT__core__DOT__dec_exe_st) 
                                                  | ((IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width) 
                                                     << 0xcU));
    vlTOPp->SimTop__DOT__core__DOT__dec_exe_st = ((0x1fffU 
                                                   & vlTOPp->SimTop__DOT__core__DOT__dec_exe_st) 
                                                  | ((IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10) 
                                                     << 0xdU));
    vlTOPp->SimTop__DOT__core__DOT__dec_exe_st = ((0x7ffffeU 
                                                   & vlTOPp->SimTop__DOT__core__DOT__dec_exe_st) 
                                                  | (IData)(vlTOPp->SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__imm_calc));
    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
        = ((0x1000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
            ? ((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__valA)) 
               << 0x20U) : vlTOPp->SimTop__DOT__core__DOT__valA);
    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__B 
        = ((1U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
            ? vlTOPp->SimTop__DOT__core__DOT__dec_imm
            : vlTOPp->SimTop__DOT__core__DOT__valB);
    vlTOPp->SimTop__DOT____Vcellout__mux__iresps[0U] = 0U;
    vlTOPp->SimTop__DOT____Vcellout__mux__iresps[1U] = 0U;
    vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U] = 0U;
    vlTOPp->SimTop__DOT____Vcellout__mux__iresps[3U] = 0U;
    vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] = 0U;
    if (vlTOPp->SimTop__DOT__mux__DOT__busy) {
        if ((0U == vlTOPp->SimTop__DOT__mux__DOT__index)) {
            vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlTOPp->SimTop__DOT__oresp[0U];
            vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlTOPp->SimTop__DOT__oresp[1U];
            vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlTOPp->SimTop__DOT__oresp[2U];
            vlTOPp->SimTop__DOT____Vcellout__mux__iresps[0U] 
                = vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[0U];
            vlTOPp->SimTop__DOT____Vcellout__mux__iresps[1U] 
                = vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[1U];
            vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((0xfffffffcU & vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[2U]);
        }
        if ((1U == vlTOPp->SimTop__DOT__mux__DOT__index)) {
            vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlTOPp->SimTop__DOT__oresp[0U];
            vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlTOPp->SimTop__DOT__oresp[1U];
            vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlTOPp->SimTop__DOT__oresp[2U];
            vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((3U & vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | (0xfffffffcU & (vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                                     << 2U)));
            vlTOPp->SimTop__DOT____Vcellout__mux__iresps[3U] 
                = ((3U & (vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                          >> 0x1eU)) | (0xfffffffcU 
                                        & (vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                                           << 2U)));
            vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] 
                = ((3U & (vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                          >> 0x1eU)) | (0xfffffffcU 
                                        & (vlTOPp->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                                           << 2U)));
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[1U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[1U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[2U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[2U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[3U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[3U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[4U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[4U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[5U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[5U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[6U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[6U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[7U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[8U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[9U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[9U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xaU] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xaU];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xbU] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xbU];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xdU];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xeU];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xfU] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xfU];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x10U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x10U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x11U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x11U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x12U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x12U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x13U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x13U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x14U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x14U];
    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x15U] = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0x15U];
    if ((3U == (7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))) {
        vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
            = ((0xfffffff7U & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]) 
               | (8U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                        >> 4U)));
        vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
            = (0x80U | vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]);
        vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
            = (0xffffe7ffU & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]);
    } else {
        if ((4U == (7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))) {
            vlTOPp->SimTop__DOT__core__DOT__CSRs[8U] 
                = (IData)(vlTOPp->SimTop__DOT__core__DOT__wri_pc);
            vlTOPp->SimTop__DOT__core__DOT__CSRs[9U] 
                = (IData)((vlTOPp->SimTop__DOT__core__DOT__wri_pc 
                           >> 0x20U));
            vlTOPp->SimTop__DOT__core__DOT__CSRs[4U] 
                = (IData)((0x7fffffffffffffffULL & 
                           (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[2U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[1U])))));
            vlTOPp->SimTop__DOT__core__DOT__CSRs[5U] 
                = (IData)(((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[2U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[1U])))) 
                           >> 0x20U));
            vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                = ((0xffffff7fU & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]) 
                   | (0x80U & (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[0xcU] 
                               << 4U)));
            vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                = (0xfffffff7U & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]);
            vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                = ((0xffffe7ffU & vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU]) 
                   | (0xfffff800U & ((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode) 
                                     << 0xbU)));
        } else {
            if (((((((((0x304U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                              << 0x1dU) 
                                             | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                >> 3U)))) 
                       | (0x344U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                << 0x1dU) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                  >> 3U))))) 
                      | (0x305U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                               << 0x1dU) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                 >> 3U))))) 
                     | (0x300U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                              << 0x1dU) 
                                             | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                >> 3U))))) 
                    | (0x340U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                             << 0x1dU) 
                                            | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                               >> 3U))))) 
                   | (0x341U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                            << 0x1dU) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                              >> 3U))))) 
                  | (0x342U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                           << 0x1dU) 
                                          | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                             >> 3U))))) 
                 | (0xb00U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                          << 0x1dU) 
                                         | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                            >> 3U)))))) {
                if ((0x304U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                           << 0x1dU) 
                                          | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                             >> 3U))))) {
                    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x12U] 
                        = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                    vlTOPp->SimTop__DOT__core__DOT__CSRs[0x13U] 
                        = (IData)((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                   >> 0x20U));
                } else {
                    if ((0x344U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                               << 0x1dU) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                 >> 3U))))) {
                        vlTOPp->SimTop__DOT__core__DOT__CSRs[0x10U] 
                            = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                        vlTOPp->SimTop__DOT__core__DOT__CSRs[0x11U] 
                            = (IData)((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                       >> 0x20U));
                    } else {
                        if ((0x305U == (0xfffU & ((
                                                   vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                     >> 3U))))) {
                            vlTOPp->SimTop__DOT__core__DOT__CSRs[0xeU] 
                                = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                            vlTOPp->SimTop__DOT__core__DOT__CSRs[0xfU] 
                                = (IData)((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                           >> 0x20U));
                        } else {
                            if ((0x300U == (0xfffU 
                                            & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                << 0x1dU) 
                                               | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                  >> 3U))))) {
                                vlTOPp->SimTop__DOT__core__DOT__CSRs[0xcU] 
                                    = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                                vlTOPp->SimTop__DOT__core__DOT__CSRs[0xdU] 
                                    = (IData)((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                               >> 0x20U));
                            } else {
                                if ((0x340U == (0xfffU 
                                                & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                      >> 3U))))) {
                                    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xaU] 
                                        = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                                    vlTOPp->SimTop__DOT__core__DOT__CSRs[0xbU] 
                                        = (IData)((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                                   >> 0x20U));
                                } else {
                                    if ((0x341U == 
                                         (0xfffU & 
                                          ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                            << 0x1dU) 
                                           | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                              >> 3U))))) {
                                        vlTOPp->SimTop__DOT__core__DOT__CSRs[8U] 
                                            = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                                        vlTOPp->SimTop__DOT__core__DOT__CSRs[9U] 
                                            = (IData)(
                                                      (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                                       >> 0x20U));
                                    } else {
                                        if ((0x342U 
                                             == (0xfffU 
                                                 & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                                     << 0x1dU) 
                                                    | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                       >> 3U))))) {
                                            vlTOPp->SimTop__DOT__core__DOT__CSRs[4U] 
                                                = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                                            vlTOPp->SimTop__DOT__core__DOT__CSRs[5U] 
                                                = (IData)(
                                                          (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                                           >> 0x20U));
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__CSRs[2U] 
                                                = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                                            vlTOPp->SimTop__DOT__core__DOT__CSRs[3U] 
                                                = (IData)(
                                                          (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                                           >> 0x20U));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x343U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                           << 0x1dU) 
                                          | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                             >> 3U))))) {
                    vlTOPp->SimTop__DOT__core__DOT__CSRs[0U] 
                        = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                    vlTOPp->SimTop__DOT__core__DOT__CSRs[1U] 
                        = (IData)((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                   >> 0x20U));
                } else {
                    if ((0x180U == (0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[6U] 
                                               << 0x1dU) 
                                              | (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[5U] 
                                                 >> 3U))))) {
                        vlTOPp->SimTop__DOT__core__DOT__CSRs[6U] 
                            = (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data);
                        vlTOPp->SimTop__DOT__core__DOT__CSRs[7U] 
                            = (IData)((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data 
                                       >> 0x20U));
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] = (
                                                   (0x7ffU 
                                                    & vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U]) 
                                                   | (0xfffff800U 
                                                      & ((IData)(
                                                                 (((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])))) 
                                                         << 0xbU)));
    vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U] = (
                                                   (0x7ffU 
                                                    & ((IData)(
                                                               (((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U])))) 
                                                       >> 0x15U)) 
                                                   | (0xfffff800U 
                                                      & ((IData)(
                                                                 ((((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U]))) 
                                                                  >> 0x20U)) 
                                                         << 0xbU)));
    vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U] = (
                                                   (0x7ffU 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__core__DOT__mem_mem_st[2U]))) 
                                                                >> 0x20U)) 
                                                       >> 0x15U)) 
                                                   | (0xfffff800U 
                                                      & ((((~ (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_fetched)) 
                                                           & (~ (IData)(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop))) 
                                                          & (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_op)) 
                                                         << 0xbU)));
    vlTOPp->SimTop__DOT__core__DOT__exe_finished = 
        ((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__data_calculated) 
         | (IData)(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop));
    vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri0 
        = ((IData)(vlTOPp->SimTop__DOT__core__DOT__need_wait0) 
           & (((IData)(vlTOPp->SimTop__DOT__core__DOT__rd_prev0) 
               == (0x1fU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                            >> 7U))) | ((IData)(vlTOPp->SimTop__DOT__core__DOT__rd_prev0) 
                                        == (0x1fU & 
                                            (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                             >> 2U)))));
    vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri1 
        = ((IData)(vlTOPp->SimTop__DOT__core__DOT__need_wait1) 
           & (((IData)(vlTOPp->SimTop__DOT__core__DOT__rd_prev1) 
               == (0x1fU & (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                            >> 7U))) | ((IData)(vlTOPp->SimTop__DOT__core__DOT__rd_prev1) 
                                        == (0x1fU & 
                                            (vlTOPp->SimTop__DOT__core__DOT__dec_exe_st 
                                             >> 2U)))));
    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA 
        = ((1U & ((~ (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                      >> 0xdU)) & (IData)((vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                           >> 0x3fU))))
            ? (- vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA)
            : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA);
    if ((0x1000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB 
            = (0x3fU & (0x1fU & (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__B)));
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB 
            = ((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__B)) 
               << 0x20U);
    } else {
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB 
            = (0x3fU & (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__B));
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB 
            = vlTOPp->SimTop__DOT__core__DOT__execute__DOT__B;
    }
    vlTOPp->SimTop__DOT__dcvt__DOT__okay = (1U & ((
                                                   vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                                   >> 1U) 
                                                  & vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U]));
    vlTOPp->SimTop__DOT__icvt__DOT__inst__DOT__okay 
        = (1U & ((vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] 
                  >> 3U) & (vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U] 
                            >> 2U)));
    if (((0U == (0xfU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                          << 4U) | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                    >> 0x1cU)))) | 
         (3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode)))) {
        vlTOPp->SimTop__DOT__core__DOT__daddr_trans_finished = 1U;
    } else {
        vlTOPp->SimTop__DOT__core__DOT__daddr_trans_finished = 0U;
        if ((0x800U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U])) {
            if ((3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st))) {
                vlTOPp->SimTop__DOT__core__DOT__daddr_trans_finished = 1U;
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr 
        = ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st))
            ? ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st))
                ? ((0xfffffffffff000ULL & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                           << 2U)) 
                   | (QData)((IData)((0xfffU & ((vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U] 
                                                 << 0x15U) 
                                                | (vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                                   >> 0xbU))))))
                : ((0xfffffffffff000ULL & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                           << 2U)) 
                   | (QData)((IData)((0xff8U & ((vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U] 
                                                 << 0xcU) 
                                                | (0xff8U 
                                                   & (vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U] 
                                                      >> 0x14U))))))))
            : ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st))
                ? ((0xfffffffffff000ULL & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                           << 2U)) 
                   | (QData)((IData)((0xff8U & (vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U] 
                                                << 3U)))))
                : ((0xfffffffffff000ULL & (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U])) 
                                            << 0x2cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[6U])) 
                                              << 0xcU))) 
                   | (QData)((IData)((0xff8U & ((vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U] 
                                                 << 0x1aU) 
                                                | (0x3fffff8U 
                                                   & (vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U] 
                                                      >> 6U)))))))));
    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB 
        = ((1U & ((~ (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                      >> 0xdU)) & (IData)((vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB 
                                           >> 0x3fU))))
            ? (- vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB)
            : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB);
    vlTOPp->SimTop__DOT__dresp[0U] = (IData)((((QData)((IData)(
                                                               vlTOPp->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->SimTop__DOT____Vcellout__mux__iresps[0U]))));
    vlTOPp->SimTop__DOT__dresp[1U] = (IData)(((((QData)((IData)(
                                                                vlTOPp->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT____Vcellout__mux__iresps[0U]))) 
                                              >> 0x20U));
    vlTOPp->SimTop__DOT__dresp[2U] = (3U & (- (IData)((IData)(vlTOPp->SimTop__DOT__dcvt__DOT__okay))));
    vlTOPp->SimTop__DOT__icvt__DOT__dresp[0U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                               >> 2U))));
    vlTOPp->SimTop__DOT__icvt__DOT__dresp[1U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlTOPp->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                           << 0x3eU) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                                >> 2U))) 
                                                         >> 0x20U));
    vlTOPp->SimTop__DOT__icvt__DOT__dresp[2U] = (3U 
                                                 & (- (IData)((IData)(vlTOPp->SimTop__DOT__icvt__DOT__inst__DOT__okay))));
    if ((0U != (7U & (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                      >> 0xdU)))) {
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish 
            = ((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB) 
               | ((vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA 
                   < vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB) 
                  | (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__muldivfinished)));
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out 
            = ((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB)
                ? 0xffffffffffffffffULL : ((vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA 
                                            < vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB)
                                            ? 0ULL : 
                                           (((0x2000U 
                                              & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                              ? 0U : 
                                             (1U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                           >> 0x3fU))) 
                                               ^ (1U 
                                                  & (IData)(
                                                            (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB 
                                                             >> 0x3fU))))))
                                             ? (- (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[0U]))))
                                             : (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[0U]))))));
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem 
            = ((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB)
                ? ((0x1000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                               >> 0x3fU))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                     >> 0x20U))))
                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA)
                : ((vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA 
                    < vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB)
                    ? ((0x1000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                                   >> 0x3fU))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                         >> 0x20U))))
                        : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA)
                    : ((1U & ((IData)((vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                       >> 0x3fU)) & 
                              (~ (vlTOPp->SimTop__DOT__core__DOT__exe_exe_st 
                                  >> 0xdU)))) ? (- 
                                                 (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[4U])) 
                                                   << 0x3fU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[3U])) 
                                                      << 0x1fU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[2U])) 
                                                        >> 1U))))
                        : (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[4U])) 
                            << 0x3fU) | (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[3U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[2U])) 
                                            >> 1U))))));
    } else {
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish 
            = (((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA) 
                | (0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB)) 
               | (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__muldivfinished));
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out 
            = (((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA) 
                | (0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB))
                ? 0ULL : (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[4U])) 
                           << 0x3fU) | (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[3U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R[2U])) 
                                           >> 1U))));
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem = 0ULL;
    }
    if ((0x400000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
    } else {
        if ((0x200000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
            if ((0x100000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
            } else {
                if ((0x80000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                } else {
                    if ((0x40000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                    } else {
                        if ((0x20000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                        } else {
                            if ((0x10000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                                vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                            } else {
                                if ((0x8000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                    if ((0x4000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = VL_SHIFTRS_QQI(64,64,6, vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA, (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB));
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                                        }
                                    }
                                } else {
                                    if ((0x4000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                   - vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB);
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x100000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
            } else {
                if ((0x80000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                } else {
                    if ((0x40000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                    } else {
                        if ((0x20000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                        } else {
                            if ((0x10000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                if ((0x8000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                    if ((0x4000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans)))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans)))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans)))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans)))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    }
                                } else {
                                    if ((0x4000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                                        vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = 0ULL;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out = 0ULL;
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out;
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans)))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    }
                                }
                            } else {
                                if ((0x8000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                    if ((0x4000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                   & vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB);
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                   | vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB);
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                   >> (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB));
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                   ^ vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB);
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    }
                                } else {
                                    if ((0x4000U & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (QData)((IData)(
                                                                  (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                                   < vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB)));
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (QData)((IData)(
                                                                  VL_LTS_IQQ(1,64,64, vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA, vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB)));
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)) {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                   << (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB));
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        } else {
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                = (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA 
                                                   + vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB);
                                            vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->SimTop__DOT__core__DOT__exe_exe_st)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                                >> 0x3fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans 
                                                                       >> 0x20U))))
                                                    : vlTOPp->SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__execute__DOT__st_pc 
        = ((4U & (IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fun3))
            ? ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fun3))
                ? ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fun3))
                    ? ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out))
                        ? 0U : 3U) : ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out))
                                       ? 3U : 0U)) : 
               ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fun3))
                 ? ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out))
                     ? 0U : 3U) : ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out))
                                    ? 3U : 0U))) : 
           ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fun3))
             ? 0U : ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fun3))
                      ? ((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out)
                          ? 0U : 3U) : ((0ULL == vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out)
                                         ? 3U : 0U))));
    if (vlTOPp->SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop) {
        vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[0U] = 0U;
        vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[1U] = 0U;
        vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[2U] = 0U;
    } else {
        if ((1U == (3U & vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U]))) {
            vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[0U] 
                = (IData)((((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[0U]))));
            vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[1U] 
                = (IData)(((((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[0U]))) 
                           >> 0x20U));
            vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[2U] 
                = vlTOPp->SimTop__DOT__core__DOT__execute__DOT__st_pc;
        } else {
            vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[2U] 
                = (3U & vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U]);
            vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[0U] 
                = (IData)(((2U == (3U & vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U]))
                            ? (0xfffffffffffffffeULL 
                               & vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out)
                            : (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[0U])))));
            vlTOPp->SimTop__DOT__core__DOT__fet_fet_st[1U] 
                = (IData)((((2U == (3U & vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U]))
                             ? (0xfffffffffffffffeULL 
                                & vlTOPp->SimTop__DOT__core__DOT__execute__DOT__out)
                             : (((QData)((IData)(vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[0U])))) 
                           >> 0x20U));
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__fet_clear = (1U 
                                                 & ((~ (IData)(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop)) 
                                                    & (((1U 
                                                         == 
                                                         (3U 
                                                          & vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U])) 
                                                        & (3U 
                                                           == (IData)(vlTOPp->SimTop__DOT__core__DOT__execute__DOT__st_pc))) 
                                                       | (vlTOPp->SimTop__DOT__core__DOT__exe_fet_st[2U] 
                                                          >> 1U))));
    vlTOPp->SimTop__DOT__core__DOT____Vcellinp__decode__fet_clear 
        = ((IData)(vlTOPp->SimTop__DOT__core__DOT__fet_clear) 
           | (IData)(vlTOPp->SimTop__DOT__core__DOT__csr_fet_clear));
    vlTOPp->SimTop__DOT__core__DOT__fet_block = ((~ 
                                                  ((IData)(vlTOPp->SimTop__DOT__core__DOT__fet_clear) 
                                                   | (IData)(vlTOPp->SimTop__DOT__core__DOT__csr_fet_clear))) 
                                                 & ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri0)
                                                     ? 
                                                    (vlTOPp->SimTop__DOT__core__DOT__wri_finishedpc 
                                                     != vlTOPp->SimTop__DOT__core__DOT__pc_prev0)
                                                     : 
                                                    ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri1) 
                                                     & (vlTOPp->SimTop__DOT__core__DOT__wri_finishedpc 
                                                        != vlTOPp->SimTop__DOT__core__DOT__pc_prev1))));
    vlTOPp->SimTop__DOT__core__DOT__decode__DOT__dec_nop 
        = ((IData)(vlTOPp->SimTop__DOT__core__DOT__dec_nop) 
           | (IData)(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__decode__fet_clear));
    vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U] = (1U 
                                                   & ((~ (IData)(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_fetched)) 
                                                      & (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__fet_block))));
    vlTOPp->SimTop__DOT__core__DOT__update = ((((IData)(vlTOPp->SimTop__DOT__core__DOT__fetch__DOT__func_fetched) 
                                                | (IData)(vlTOPp->SimTop__DOT__core__DOT__fet_block)) 
                                               & (IData)(vlTOPp->SimTop__DOT__core__DOT__exe_finished)) 
                                              & (((IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_fetched) 
                                                  | (IData)(vlTOPp->SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop)) 
                                                 | (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__memory__DOT__mem_op))));
    if (((0U == (0xfU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                          << 4U) | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                    >> 0x1cU)))) | 
         (3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode)))) {
        vlTOPp->SimTop__DOT__core__DOT__iaddr_trans_finished = 1U;
    } else {
        vlTOPp->SimTop__DOT__core__DOT__iaddr_trans_finished = 0U;
        if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U] 
                      >> 0xbU)))) {
            if ((1U & vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U])) {
                if ((3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st))) {
                    vlTOPp->SimTop__DOT__core__DOT__iaddr_trans_finished = 1U;
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr 
        = ((2U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st))
            ? ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st))
                ? ((0xfffffffffff000ULL & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                           << 2U)) 
                   | (QData)((IData)((0xfffU & vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U]))))
                : ((0xfffffffffff000ULL & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                           << 2U)) 
                   | (QData)((IData)((0xff8U & ((vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U] 
                                                 << 0x17U) 
                                                | (0x7ffff8U 
                                                   & (vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U] 
                                                      >> 9U))))))))
            : ((1U & (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st))
                ? ((0xfffffffffff000ULL & (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__pte 
                                           << 2U)) 
                   | (QData)((IData)((0xff8U & ((vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U] 
                                                 << 0xeU) 
                                                | (0x3ff8U 
                                                   & (vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U] 
                                                      >> 0x12U)))))))
                : ((0xfffffffffff000ULL & (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U])) 
                                            << 0x2cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[6U])) 
                                              << 0xcU))) 
                   | (QData)((IData)((0xff8U & ((vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U] 
                                                 << 5U) 
                                                | (0x18U 
                                                   & (vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U] 
                                                      >> 0x1bU)))))))));
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__csr_en 
        = (1U & (~ (((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_nop) 
                     | (0U == (7U & vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[3U]))) 
                    | (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__update)))));
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__en 
        = (1U & (~ (((IData)(vlTOPp->SimTop__DOT__core__DOT__wri_nop) 
                     | (0U == (7U & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                     >> 0xfU)))) | 
                    (~ (IData)(vlTOPp->SimTop__DOT__core__DOT__update)))));
    if (((0U == (0xfU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                          << 4U) | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                    >> 0x1cU)))) | 
         (3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode)))) {
        vlTOPp->SimTop__DOT__dreq[0U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U];
        vlTOPp->SimTop__DOT__dreq[1U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U];
        vlTOPp->SimTop__DOT__dreq[2U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U];
        vlTOPp->SimTop__DOT__dreq[3U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U];
        vlTOPp->SimTop__DOT__dreq[4U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U];
    } else {
        vlTOPp->SimTop__DOT__dreq[0U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[0U];
        vlTOPp->SimTop__DOT__dreq[1U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[1U];
        vlTOPp->SimTop__DOT__dreq[2U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[2U];
        vlTOPp->SimTop__DOT__dreq[3U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[3U];
        vlTOPp->SimTop__DOT__dreq[4U] = vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U];
        vlTOPp->SimTop__DOT__dreq[4U] = (0x7ffU & vlTOPp->SimTop__DOT__dreq[4U]);
        if ((0x800U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U])) {
            if ((3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st))) {
                vlTOPp->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlTOPp->SimTop__DOT__dreq[2U]) 
                                                 | (0xfffff800U 
                                                    & ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr) 
                                                       << 0xbU)));
                vlTOPp->SimTop__DOT__dreq[3U] = ((0x7ffU 
                                                  & ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr) 
                                                     >> 0x15U)) 
                                                 | (0xfffff800U 
                                                    & ((IData)(
                                                               (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr 
                                                                >> 0x20U)) 
                                                       << 0xbU)));
                vlTOPp->SimTop__DOT__dreq[4U] = ((0x800U 
                                                  & vlTOPp->SimTop__DOT__dreq[4U]) 
                                                 | (0x7ffU 
                                                    & ((IData)(
                                                               (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr 
                                                                >> 0x20U)) 
                                                       >> 0x15U)));
                vlTOPp->SimTop__DOT__dreq[4U] = (0x800U 
                                                 | vlTOPp->SimTop__DOT__dreq[4U]);
            } else {
                vlTOPp->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlTOPp->SimTop__DOT__dreq[2U]) 
                                                 | (0xfffff800U 
                                                    & ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr) 
                                                       << 0xbU)));
                vlTOPp->SimTop__DOT__dreq[3U] = ((0x7ffU 
                                                  & ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr) 
                                                     >> 0x15U)) 
                                                 | (0xfffff800U 
                                                    & ((IData)(
                                                               (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr 
                                                                >> 0x20U)) 
                                                       << 0xbU)));
                vlTOPp->SimTop__DOT__dreq[4U] = ((0x800U 
                                                  & vlTOPp->SimTop__DOT__dreq[4U]) 
                                                 | (0x7ffU 
                                                    & ((IData)(
                                                               (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr 
                                                                >> 0x20U)) 
                                                       >> 0x15U)));
                vlTOPp->SimTop__DOT__dreq[4U] = (0x800U 
                                                 | vlTOPp->SimTop__DOT__dreq[4U]);
                vlTOPp->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlTOPp->SimTop__DOT__dreq[2U]);
                vlTOPp->SimTop__DOT__dreq[2U] = (0x300U 
                                                 | (0xfffff8ffU 
                                                    & vlTOPp->SimTop__DOT__dreq[2U]));
            }
        } else {
            if ((1U & vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U])) {
                if ((3U != (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st))) {
                    vlTOPp->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlTOPp->SimTop__DOT__dreq[2U]) 
                         | (0xfffff800U & ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr) 
                                           << 0xbU)));
                    vlTOPp->SimTop__DOT__dreq[3U] = 
                        ((0x7ffU & ((IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr) 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((IData)(
                                                             (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr 
                                                              >> 0x20U)) 
                                                     << 0xbU)));
                    vlTOPp->SimTop__DOT__dreq[4U] = 
                        ((0x800U & vlTOPp->SimTop__DOT__dreq[4U]) 
                         | (0x7ffU & ((IData)((vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr 
                                               >> 0x20U)) 
                                      >> 0x15U)));
                    vlTOPp->SimTop__DOT__dreq[4U] = 
                        (0x800U | vlTOPp->SimTop__DOT__dreq[4U]);
                    vlTOPp->SimTop__DOT__dreq[2U] = 
                        (0xffffff00U & vlTOPp->SimTop__DOT__dreq[2U]);
                    vlTOPp->SimTop__DOT__dreq[2U] = 
                        (0x300U | (0xfffff8ffU & vlTOPp->SimTop__DOT__dreq[2U]));
                }
            }
        }
    }
    if (((0U == (0xfU & ((vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[8U] 
                          << 4U) | (vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs[7U] 
                                    >> 0x1cU)))) | 
         (3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode)))) {
        vlTOPp->SimTop__DOT__ireq[0U] = vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U];
        vlTOPp->SimTop__DOT__ireq[1U] = vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U];
        vlTOPp->SimTop__DOT__ireq[2U] = vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U];
        if ((0x800U & vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U])) {
            vlTOPp->SimTop__DOT__ireq[2U] = 0U;
        }
    } else {
        vlTOPp->SimTop__DOT__ireq[0U] = vlTOPp->SimTop__DOT__core__DOT__ireq_in[0U];
        vlTOPp->SimTop__DOT__ireq[1U] = vlTOPp->SimTop__DOT__core__DOT__ireq_in[1U];
        vlTOPp->SimTop__DOT__ireq[2U] = vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U];
        vlTOPp->SimTop__DOT__ireq[2U] = 0U;
        if ((1U & (~ (vlTOPp->SimTop__DOT__core__DOT__dreq_in[4U] 
                      >> 0xbU)))) {
            if ((1U & vlTOPp->SimTop__DOT__core__DOT__ireq_in[2U])) {
                if ((3U == (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st))) {
                    vlTOPp->SimTop__DOT__ireq[0U] = (IData)(vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr);
                    vlTOPp->SimTop__DOT__ireq[1U] = (IData)(
                                                            (vlTOPp->SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr 
                                                             >> 0x20U));
                    vlTOPp->SimTop__DOT__ireq[2U] = 
                        (1U | vlTOPp->SimTop__DOT__ireq[2U]);
                }
            }
        }
    }
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x1fU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x1fU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x1eU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x1eU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x1dU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x1dU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x1cU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x1cU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x1bU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x1bU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x1aU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x1aU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x19U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x19U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x18U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x18U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x17U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x17U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x16U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x16U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x15U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x15U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x14U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x14U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x13U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x13U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x12U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x12U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x11U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x11U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0x10U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0x10U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0xfU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0xfU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0xeU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0xeU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0xdU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0xdU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0xcU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0xcU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0xbU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0xbU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0xaU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0xaU];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[9U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [9U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[8U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [8U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[7U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [7U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[6U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [6U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[5U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [5U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[4U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [4U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[3U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [3U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[2U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [2U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[1U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [1U];
    vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[0U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs
        [0U];
    if (((IData)(vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__en) 
         & (0U != (0x1fU & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                            >> 0x12U))))) {
        vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[(0x1fU 
                                                                                & (vlTOPp->SimTop__DOT__core__DOT__wri_wri_st[7U] 
                                                                                >> 0x12U))] 
            = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT__write_data;
    }
    vlTOPp->SimTop__DOT__dcreq[0U] = (0xfffffc00U & 
                                      ((IData)((((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__dreq[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__dreq[0U])))) 
                                       << 0xaU));
    vlTOPp->SimTop__DOT__dcreq[1U] = ((0x3ffU & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__dreq[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->SimTop__DOT__dreq[0U])))) 
                                                 >> 0x16U)) 
                                      | (0xfffffc00U 
                                         & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__dreq[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__dreq[0U]))) 
                                                     >> 0x20U)) 
                                            << 0xaU)));
    vlTOPp->SimTop__DOT__dcreq[2U] = ((0xfffc0000U 
                                       & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__dreq[4U])) 
                                                    << 0x35U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__dreq[3U])) 
                                                       << 0x15U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->SimTop__DOT__dreq[2U])) 
                                                         >> 0xbU)))) 
                                          << 0x12U)) 
                                      | ((0x3fc00U 
                                          & (vlTOPp->SimTop__DOT__dreq[2U] 
                                             << 0xaU)) 
                                         | (0x3ffU 
                                            & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->SimTop__DOT__dreq[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__dreq[0U]))) 
                                                        >> 0x20U)) 
                                               >> 0x16U))));
    vlTOPp->SimTop__DOT__dcreq[3U] = ((0x3ffffU & ((IData)(
                                                           (((QData)((IData)(
                                                                             vlTOPp->SimTop__DOT__dreq[4U])) 
                                                             << 0x35U) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__dreq[3U])) 
                                                                << 0x15U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__dreq[2U])) 
                                                                  >> 0xbU)))) 
                                                   >> 0xeU)) 
                                      | (0xfffc0000U 
                                         & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__dreq[4U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->SimTop__DOT__dreq[3U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->SimTop__DOT__dreq[2U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U)) 
                                            << 0x12U)));
    vlTOPp->SimTop__DOT__dcreq[4U] = ((0x400000U & 
                                       (vlTOPp->SimTop__DOT__dreq[4U] 
                                        << 0xbU)) | 
                                      ((0xffe00000U 
                                        & ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & vlTOPp->SimTop__DOT__dreq[2U]))) 
                                           << 0x15U)) 
                                       | ((0x1c0000U 
                                           & (vlTOPp->SimTop__DOT__dreq[2U] 
                                              << 0xaU)) 
                                          | (0x3ffffU 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__dreq[4U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->SimTop__DOT__dreq[3U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__dreq[2U])) 
                                                                >> 0xbU))) 
                                                         >> 0x20U)) 
                                                >> 0xeU)))));
    vlTOPp->SimTop__DOT__iresp = (((QData)((IData)(
                                                   (3U 
                                                    & vlTOPp->SimTop__DOT__icvt__DOT__dresp[2U]))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((4U 
                                                                 & vlTOPp->SimTop__DOT__ireq[0U])
                                                                 ? 
                                                                vlTOPp->SimTop__DOT__icvt__DOT__dresp[1U]
                                                                 : 
                                                                vlTOPp->SimTop__DOT__icvt__DOT__dresp[0U]))));
    __Vtemp14[0U] = 0U;
    __Vtemp14[1U] = 0U;
    __Vtemp14[2U] = (0xfffc0000U & ((IData)((((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__ireq[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->SimTop__DOT__ireq[0U])))) 
                                    << 0x12U));
    __Vtemp14[3U] = ((0x3ffffU & ((IData)((((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__ireq[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->SimTop__DOT__ireq[0U])))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlTOPp->SimTop__DOT__ireq[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlTOPp->SimTop__DOT__ireq[0U]))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp14[4U] = (0x80000U | (0x3ffffU & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__ireq[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->SimTop__DOT__ireq[0U]))) 
                                                      >> 0x20U)) 
                                             >> 0xeU)));
    VL_EXTEND_WW(150,149, __Vtemp15, __Vtemp14);
    vlTOPp->SimTop__DOT__icreq[0U] = __Vtemp15[0U];
    vlTOPp->SimTop__DOT__icreq[1U] = __Vtemp15[1U];
    vlTOPp->SimTop__DOT__icreq[2U] = __Vtemp15[2U];
    vlTOPp->SimTop__DOT__icreq[3U] = __Vtemp15[3U];
    vlTOPp->SimTop__DOT__icreq[4U] = ((0x400000U & 
                                       (vlTOPp->SimTop__DOT__ireq[2U] 
                                        << 0x16U)) 
                                      | __Vtemp15[4U]);
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x1fU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x1fU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x1eU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x1eU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x1dU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x1dU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x1cU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x1cU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x1bU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x1bU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x1aU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x1aU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x19U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x19U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x18U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x18U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x17U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x17U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x16U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x16U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x15U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x15U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x14U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x14U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x13U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x13U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x12U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x12U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x11U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x11U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0x10U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0x10U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0xfU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0xfU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0xeU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0xeU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0xdU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0xdU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0xcU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0xcU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0xbU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0xbU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0xaU] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0xaU];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[9U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [9U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[8U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [8U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[7U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [7U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[6U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [6U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[5U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [5U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[4U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [4U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[3U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [3U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[2U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [2U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[1U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [1U];
    vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[0U] 
        = vlTOPp->SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs
        [0U];
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
        = vlTOPp->SimTop__DOT__dcreq[0U];
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[1U] 
        = vlTOPp->SimTop__DOT__dcreq[1U];
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
        = vlTOPp->SimTop__DOT__dcreq[2U];
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[3U] 
        = vlTOPp->SimTop__DOT__dcreq[3U];
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
        = ((0xff800000U & (vlTOPp->SimTop__DOT__icreq[0U] 
                           << 0x17U)) | vlTOPp->SimTop__DOT__dcreq[4U]);
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
        = ((0x7fffffU & (vlTOPp->SimTop__DOT__icreq[0U] 
                         >> 9U)) | (0xff800000U & (
                                                   vlTOPp->SimTop__DOT__icreq[1U] 
                                                   << 0x17U)));
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[6U] 
        = ((0x7fffffU & (vlTOPp->SimTop__DOT__icreq[1U] 
                         >> 9U)) | (0xff800000U & (
                                                   vlTOPp->SimTop__DOT__icreq[2U] 
                                                   << 0x17U)));
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
        = ((0x7fffffU & (vlTOPp->SimTop__DOT__icreq[2U] 
                         >> 9U)) | (0xff800000U & (
                                                   vlTOPp->SimTop__DOT__icreq[3U] 
                                                   << 0x17U)));
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[8U] 
        = ((0x7fffffU & (vlTOPp->SimTop__DOT__icreq[3U] 
                         >> 9U)) | (0xff800000U & (
                                                   vlTOPp->SimTop__DOT__icreq[4U] 
                                                   << 0x17U)));
    vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
        = (0x7fffffU & (vlTOPp->SimTop__DOT__icreq[4U] 
                        >> 9U));
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x1fU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x1fU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x1eU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x1eU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x1dU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x1dU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x1cU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x1cU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x1bU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x1bU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x1aU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x1aU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x19U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x19U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x18U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x18U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x17U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x17U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x16U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x16U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x15U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x15U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x14U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x14U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x13U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x13U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x12U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x12U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x11U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x11U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0x10U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0x10U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0xfU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0xfU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0xeU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0xeU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0xdU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0xdU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0xcU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0xcU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0xbU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0xbU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0xaU] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0xaU];
    vlTOPp->SimTop__DOT__core__DOT__Regs[9U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [9U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[8U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [8U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[7U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [7U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[6U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [6U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[5U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [5U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[4U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [4U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[3U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [3U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[2U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [2U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[1U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [1U];
    vlTOPp->SimTop__DOT__core__DOT__Regs[0U] = vlTOPp->SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs
        [0U];
    vlTOPp->SimTop__DOT__mux__DOT__select = 0U;
    vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(1,32,32, 2U, vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) {
            if ((1U & ((0x12dU >= (0x1ffU & ((IData)(0x96U) 
                                             + ((IData)(0x97U) 
                                                * vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        ? (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                           (0xfU & (((IData)(0x96U) 
                                     + ((IData)(0x97U) 
                                        * vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x96U) 
                                                    + 
                                                    ((IData)(0x97U) 
                                                     * vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        : (IData)(vlTOPp->SimTop__DOT__mux__DOT____Vxrand3)))) {
                vlTOPp->SimTop__DOT__mux__DOT__select 
                    = vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i;
                goto __Vlabel1;
            }
            vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlTOPp->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if (vlTOPp->SimTop__DOT__mux__DOT__busy) {
        vlTOPp->SimTop__DOT__oreq[0U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlTOPp->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                (0xfU 
                                                 & (((IData)(0x97U) 
                                                     * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlTOPp->SimTop__DOT__mux__DOT__index))))
                                          : vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[0U]);
        vlTOPp->SimTop__DOT__oreq[1U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlTOPp->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(1U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlTOPp->SimTop__DOT__mux__DOT__index))))
                                          : vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[1U]);
        vlTOPp->SimTop__DOT__oreq[2U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlTOPp->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlTOPp->SimTop__DOT__mux__DOT__index))))
                                          : vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[2U]);
        vlTOPp->SimTop__DOT__oreq[3U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlTOPp->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(3U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlTOPp->SimTop__DOT__mux__DOT__index))))
                                          : vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[3U]);
        vlTOPp->SimTop__DOT__oreq[4U] = (0x7fffffU 
                                         & ((0x12dU 
                                             >= (0x1ffU 
                                                 & ((IData)(0x97U) 
                                                    * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x97U) 
                                                      * vlTOPp->SimTop__DOT__mux__DOT__index)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlTOPp->SimTop__DOT__mux__DOT__index))))) 
                                                | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0x97U) 
                                                         * vlTOPp->SimTop__DOT__mux__DOT__index) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlTOPp->SimTop__DOT__mux__DOT__index))))
                                             : vlTOPp->SimTop__DOT__mux__DOT____Vxrand1[4U]));
    } else {
        vlTOPp->SimTop__DOT__oreq[0U] = 0U;
        vlTOPp->SimTop__DOT__oreq[1U] = 0U;
        vlTOPp->SimTop__DOT__oreq[2U] = 0U;
        vlTOPp->SimTop__DOT__oreq[3U] = 0U;
        vlTOPp->SimTop__DOT__oreq[4U] = 0U;
    }
    if ((0x12dU >= (0x1ffU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select)))) {
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select))))) 
               | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                  (0xfU & (((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select) 
                           >> 5U))] >> (0x1fU & ((IData)(0x97U) 
                                                 * vlTOPp->SimTop__DOT__mux__DOT__select))));
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select))))) 
               | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                           * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select))));
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select))))) 
               | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                           * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select))));
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[3U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(4U) + (0xfU & (((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlTOPp->SimTop__DOT__mux__DOT__select))))) 
               | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                           * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlTOPp->SimTop__DOT__mux__DOT__select))));
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x97U) 
                                              * vlTOPp->SimTop__DOT__mux__DOT__select)))
                              ? 0U : (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                                      ((IData)(5U) 
                                       + (0xfU & (((IData)(0x97U) 
                                                   * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x97U) 
                                                * vlTOPp->SimTop__DOT__mux__DOT__select))))) 
                            | (vlTOPp->SimTop__DOT____Vcellinp__mux__ireqs[
                               ((IData)(4U) + (0xfU 
                                               & (((IData)(0x97U) 
                                                   * vlTOPp->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x97U) 
                                            * vlTOPp->SimTop__DOT__mux__DOT__select)))));
    } else {
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[0U] 
            = vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[0U];
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[1U] 
            = vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[1U];
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[2U] 
            = vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[2U];
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[3U] 
            = vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[3U];
        vlTOPp->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & vlTOPp->SimTop__DOT__mux__DOT____Vxrand2[4U]);
    }
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffffff00ULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | (IData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0xaU))))))));
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffff00ffULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0xbU))))))) 
                                               << 8U));
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xffffffffff00ffffULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0xcU))))))) 
                                               << 0x10U));
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xffffffff00ffffffULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0xdU))))))) 
                                               << 0x18U));
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xffffff00ffffffffULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0xeU))))))) 
                                               << 0x20U));
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xffff00ffffffffffULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0xfU))))))) 
                                               << 0x28U));
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xff00ffffffffffffULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0x10U))))))) 
                                               << 0x30U));
    vlTOPp->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffffffULL 
                                             & vlTOPp->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->SimTop__DOT__oreq[2U] 
                                                                                >> 0x11U))))))) 
                                               << 0x38U));
}

void VSimTop::_eval_initial(VSimTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop::_eval_initial\n"); );
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSimTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop::final\n"); );
    // Variables
    VSimTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSimTop::_eval_settle(VSimTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop::_eval_settle\n"); );
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VSimTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    io_perfInfo_clean = VL_RAND_RESET_I(1);
    io_perfInfo_dump = VL_RAND_RESET_I(1);
    io_uart_out_valid = VL_RAND_RESET_I(1);
    io_uart_out_ch = VL_RAND_RESET_I(8);
    io_uart_in_valid = VL_RAND_RESET_I(1);
    io_uart_in_ch = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(151, SimTop__DOT__oreq);
    VL_RAND_RESET_W(66, SimTop__DOT__oresp);
    SimTop__DOT__trint = VL_RAND_RESET_I(1);
    SimTop__DOT__swint = VL_RAND_RESET_I(1);
    SimTop__DOT__exint = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, SimTop__DOT__ireq);
    SimTop__DOT__iresp = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(140, SimTop__DOT__dreq);
    VL_RAND_RESET_W(66, SimTop__DOT__dresp);
    VL_RAND_RESET_W(151, SimTop__DOT__icreq);
    VL_RAND_RESET_W(151, SimTop__DOT__dcreq);
    VL_RAND_RESET_W(132, SimTop__DOT____Vcellout__mux__iresps);
    VL_RAND_RESET_W(302, SimTop__DOT____Vcellinp__mux__ireqs);
    SimTop__DOT__core__DOT__dec_nop = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__exe_nop = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__mem_nop = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__wri_nop = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__dec_imm = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__func = VL_RAND_RESET_I(32);
    SimTop__DOT__core__DOT__dec_pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, SimTop__DOT__core__DOT__ireq_in);
    VL_RAND_RESET_W(66, SimTop__DOT__core__DOT__fet_fet_st);
    SimTop__DOT__core__DOT__update = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__wri_finishedpc = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__dec_exe_st = VL_RAND_RESET_I(23);
    SimTop__DOT__core__DOT__exe_exe_st = VL_RAND_RESET_I(23);
    VL_RAND_RESET_W(130, SimTop__DOT__core__DOT__exe_mem_st);
    VL_RAND_RESET_W(247, SimTop__DOT__core__DOT__exe_wri_st);
    VL_RAND_RESET_W(66, SimTop__DOT__core__DOT__exe_fet_st);
    SimTop__DOT__core__DOT__exe_fun3 = VL_RAND_RESET_I(3);
    SimTop__DOT__core__DOT__exe_pc = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__fet_block = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__fet_clear = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT____Vcellinp__decode__fet_clear = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, SimTop__DOT__core__DOT__mem_mem_st);
    VL_RAND_RESET_W(247, SimTop__DOT__core__DOT__mem_wri_st);
    SimTop__DOT__core__DOT__mem_pc = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__mem_fun3 = VL_RAND_RESET_I(3);
    SimTop__DOT__core__DOT__valA = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__valB = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__exe_finished = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT____Vcellinp__execute__exe_nop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(247, SimTop__DOT__core__DOT__wri_wri_st);
    VL_RAND_RESET_W(130, SimTop__DOT__core__DOT__wri_mem_st);
    SimTop__DOT__core__DOT__wri_pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(140, SimTop__DOT__core__DOT__dreq_in);
    SimTop__DOT__core__DOT__wri_fun3 = VL_RAND_RESET_I(3);
    SimTop__DOT__core__DOT____Vcellinp__memory__mem_nop = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            SimTop__DOT__core__DOT__Regs[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    VL_RAND_RESET_W(704, SimTop__DOT__core__DOT__CSRs);
    SimTop__DOT__core__DOT__mode = VL_RAND_RESET_I(2);
    SimTop__DOT__core__DOT__csr_fet_clear = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            SimTop__DOT__core__DOT____Vcellout__writeback__OutRegs[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    SimTop__DOT__core__DOT__pc_prev0 = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__pc_prev1 = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__rd_prev0 = VL_RAND_RESET_I(5);
    SimTop__DOT__core__DOT__rd_prev1 = VL_RAND_RESET_I(5);
    SimTop__DOT__core__DOT__need_wait0 = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__need_wait1 = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__iaddr_trans_finished = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__daddr_trans_finished = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__fetch__DOT__pc_now = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__fetch__DOT__func_fetched = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__fetch__DOT__func_tmp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(130, SimTop__DOT__core__DOT__decode__DOT__mem_now);
    VL_RAND_RESET_W(247, SimTop__DOT__core__DOT__decode__DOT__wri_now);
    SimTop__DOT__core__DOT__decode__DOT__st_pc = VL_RAND_RESET_I(2);
    SimTop__DOT__core__DOT__decode__DOT__imm_now = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__code = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_csr = VL_RAND_RESET_I(3);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__st_rd = VL_RAND_RESET_I(3);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_write = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__mem_read = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__imm_calc = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__csr_rd = VL_RAND_RESET_I(12);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__width = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__decode__DOT____Vcellout__Controller__fun10 = VL_RAND_RESET_I(10);
    SimTop__DOT__core__DOT__decode__DOT__dec_nop = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__execute__DOT__out = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__cnt = VL_RAND_RESET_I(7);
    SimTop__DOT__core__DOT__execute__DOT__reseted = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__execute__DOT__B = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__st_pc = VL_RAND_RESET_I(2);
    SimTop__DOT__core__DOT__execute__DOT__data_calculated = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realA = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realB = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__ans = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__realBl = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__shiftB = VL_RAND_RESET_I(6);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_out = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__rem = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__md_finish = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absA = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__absB = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__R);
    VL_RAND_RESET_W(65, SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__D);
    SimTop__DOT__core__DOT__execute__DOT__ALU__DOT__muldiv__DOT__muldivfinished = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__memory__DOT__mem_data = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__memory__DOT__mem_op = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__memory__DOT__mem_fetched = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__memory__DOT__raw_data = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__writeback__DOT__en = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__writeback__DOT__csr_en = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__writeback__DOT__csr_value = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__writeback__DOT__write_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            SimTop__DOT__core__DOT__writeback__DOT____Vcellout__RegFile__OutRegs[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            SimTop__DOT__core__DOT__writeback__DOT__RegFile__DOT__Regs[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    VL_RAND_RESET_W(704, SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__CSRs);
    SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__mode = VL_RAND_RESET_I(2);
    SimTop__DOT__core__DOT__writeback__DOT__CSRs__DOT__real_write_data = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri0 = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__HazardDetectior__DOT__wait_wri1 = VL_RAND_RESET_I(1);
    SimTop__DOT__core__DOT__HazardDetectior__DOT__iaddr_trans_st = VL_RAND_RESET_I(2);
    SimTop__DOT__core__DOT__HazardDetectior__DOT__daddr_trans_st = VL_RAND_RESET_I(2);
    SimTop__DOT__core__DOT__HazardDetectior__DOT__iphys_addr = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__HazardDetectior__DOT__dphys_addr = VL_RAND_RESET_Q(64);
    SimTop__DOT__core__DOT__HazardDetectior__DOT__pte = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(66, SimTop__DOT__icvt__DOT__dresp);
    SimTop__DOT__icvt__DOT__inst__DOT__okay = VL_RAND_RESET_I(1);
    SimTop__DOT__dcvt__DOT__okay = VL_RAND_RESET_I(1);
    SimTop__DOT__mux__DOT____Vxrand3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(151, SimTop__DOT__mux__DOT____Vxrand2);
    VL_RAND_RESET_W(151, SimTop__DOT__mux__DOT____Vxrand1);
    SimTop__DOT__mux__DOT__busy = VL_RAND_RESET_I(1);
    SimTop__DOT__mux__DOT__index = 0;
    SimTop__DOT__mux__DOT__select = 0;
    VL_RAND_RESET_W(151, SimTop__DOT__mux__DOT__saved_req);
    VL_RAND_RESET_W(151, SimTop__DOT__mux__DOT__selected_req);
    SimTop__DOT__mux__DOT__unnamedblk1__DOT__i = 0;
    SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(66, SimTop__DOT__mux__DOT____Vlvbound4);
    VL_RAND_RESET_W(151, SimTop__DOT__ram__DOT__saved_oreq);
    SimTop__DOT__ram__DOT__state = VL_RAND_RESET_I(2);
    SimTop__DOT__ram__DOT__count_down = VL_RAND_RESET_I(8);
    SimTop__DOT__ram__DOT__size = VL_RAND_RESET_I(4);
    SimTop__DOT__ram__DOT__addr = VL_RAND_RESET_Q(64);
    SimTop__DOT__ram__DOT__idx = VL_RAND_RESET_Q(64);
    SimTop__DOT__ram__DOT__wrap1 = VL_RAND_RESET_Q(64);
    SimTop__DOT__ram__DOT__wrap2 = VL_RAND_RESET_Q(64);
    SimTop__DOT__ram__DOT__cyc_cnt = 0;
    SimTop__DOT__ram__DOT__ms_cnt = 0;
    SimTop__DOT__ram__DOT__wmask = VL_RAND_RESET_Q(64);
    SimTop__DOT__ram__DOT__mtime = VL_RAND_RESET_Q(64);
    SimTop__DOT__ram__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    SimTop__DOT__ram__DOT__msip = VL_RAND_RESET_I(1);
    __Vfunc_get_switch__5__Vfuncout = 0;
    __Vfunc_ram_read_helper__6__Vfuncout = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
