// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_core_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*3:0*/ Vtest_top_core_top::__Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[64];

VL_CTOR_IMP(Vtest_top_core_top) {
    VL_CELL(regfile0, Vtest_top_regfile);
    VL_CELL(__PVT__exe0__DOT__shift_i_type, Vtest_top_shift);
    VL_CELL(__PVT__exe0__DOT__shift_r_type, Vtest_top_shift);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_core_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_core_top::~Vtest_top_core_top() {
}

void Vtest_top_core_top::_settle__TOP__test_top__core_top0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_settle__TOP__test_top__core_top0__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mie_external) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mip_external));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mie_timer) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mip_timer));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mie_software) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mip_software));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    ((0U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x19U))) 
                                                     & (0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 0x14U))))) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall = 1U;
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
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (0x1fU & (
                                                   (0x40U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         ((0x4000U 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((0x2000U 
                                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                            ? 
                                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 7U)
                                                            : 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 0U))
                                                           : 
                                                          ((0x2000U 
                                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                            ? 
                                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 7U)
                                                            : 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 0U)))
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)))
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         ((0x4000U 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((0x2000U 
                                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U))
                                                            : 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)))
                                                           : 
                                                          ((0x2000U 
                                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U))
                                                            : 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U))))
                                                          : 0U)
                                                         : 0U)))
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         ((0x4000U 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((0x2000U 
                                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U))
                                                            : 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)))
                                                           : 
                                                          ((0x2000U 
                                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U))
                                                            : 
                                                           ((0x1000U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U)
                                                             : 
                                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                             >> 7U))))
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U))))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((0x40U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 5U) 
                                                   & ((0x10U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((~ 
                                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 2U)) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                & ((0x4000U 
                                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                                    ? 
                                                                   ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                     >> 0xdU) 
                                                                    | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                       >> 0xcU))
                                                                    : 
                                                                   ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                     >> 0xdU) 
                                                                    | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                       >> 0xcU)))))))
                                                       : 
                                                      ((8U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 2U) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))
                                                        : 
                                                       ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 2U) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))))
                                                : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 4U) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((4U 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           : 
                                                          ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((4U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         : 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
        = ((IData)(vlTOPp->rst_i) ? 0x13U : ((0x40U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((0x20U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0x13U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                         : 
                                                        ((0x1000U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                          : 0x13U))
                                                        : vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       : 0x13U)
                                                      : 0x13U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 0x13U)
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U))))
                                                  : 0x13U)
                                              : ((0x20U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0x13U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U))))
                                                  : 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0x13U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)))))));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    ((0x18U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x19U))) 
                                                     & (2U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 0x14U))))) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret = 1U;
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
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_we = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_we 
                                        = (1U & ((0x4000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xdU) 
                                                  | (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0xcU))
                                                  : 
                                                 ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xdU) 
                                                  | (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0xcU))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_waddr = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_waddr 
                                                = (0xfffU 
                                                   & ((0x1000U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)
                                                       : 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_waddr 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x14U));
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_waddr 
                                                = (0xfffU 
                                                   & ((0x1000U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)
                                                       : 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_waddr 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x14U));
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
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o 
                        = (1U & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? ((0x20U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                         : 
                                                        ((0x1000U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                          : 0U))
                                                        : vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o)
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U))))
                                               : 0U)
                                           : ((0x20U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                       : 0U)
                                                      : 0U)))))));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                                                  : 0U)
                                              : 0U)));
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
                                                }
                                            } else {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
                                                }
                                            } else {
                                                if (
                                                    VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 0U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
                                                }
                                            } else {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     == vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o = 1U;
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
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                        = ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 3U)) & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 2U)) 
                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 1U) 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                & ((0x4000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)
                                                     : 
                                                    ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0xcU) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)
                                                     : 
                                                    ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0xcU) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o))))))));
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                = ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                    >> 1U) & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)));
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000000U 
                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_ready;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                = ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                    >> 1U) & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)));
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                        = (1U & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                     : 0U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                     : 0U)))
                                                  : 0U)
                                              : 0U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                        : 0U) : 0U)
                                : 0U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : 0U))) : 0U);
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                        : 0U) : 0U);
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000000U 
                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_ready)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U);
                                        }
                                    } else {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                    = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U))));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                          >> 5U)))) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__compare_sub_type_i 
                                                    = 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     - vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
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
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o 
        = ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
            ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 0x14U)))))
            : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 0x14U))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__load_addr_offset 
        = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x14U)));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000000U 
                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_stallreq_o 
                                                = (1U 
                                                   & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_ready)));
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
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
           + ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 0x1fU)))) 
                              << 0xcU)) | ((0x800U 
                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 7U))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_inst_addr 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_inst_addr);
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((0x40U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 5U) 
                                                   & ((0x10U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((~ 
                                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 2U)) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                & ((~ 
                                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                     >> 0xeU)) 
                                                                   & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                       >> 0xdU) 
                                                                      | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                         >> 0xcU)))))))
                                                       : 
                                                      ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((4U 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           : 
                                                          ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))))
                                                : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((0x40U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 5U) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 4U)) 
                                                      & ((~ 
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 3U)) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 2U)) 
                                                            & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                >> 1U) 
                                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))))
                                                : (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 5U) 
                                                   & ((0x10U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((~ 
                                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 2U)) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                                                       : 
                                                      ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((~ 
                                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 2U)) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
            = (0x1fU & ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                         ? ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? 0U : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U))))
                             : 0U) : ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                       ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U))))
                                       : 0U)));
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
            = (0x1fU & ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                         ? ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0xfU)
                                                      : 0U)))
                                                   : 0U)
                                               : 0U)))
                                 : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                                  : 0U)
                                              : ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                                  : 0U))))
                             : 0U) : ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                       ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U))))
                                       : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)))))));
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr 
                                                = (0xfffU 
                                                   & ((0x1000U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)
                                                       : 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x14U));
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr 
                                                = (0xfffU 
                                                   & ((0x1000U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)
                                                       : 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x14U));
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
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o;
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0xcU)))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0xcU)))
                                                     ? 3U
                                                     : 0U)))
                                                  : 0U)
                                              : 0U)));
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xdU
                                                     : 0xcU))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 0xbU)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xaU
                                                     : 9U)))
                                                  : 0U)
                                              : 0U)));
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_wdata = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_waddr = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_wdata 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_wdata;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_waddr 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_waddr;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_we 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we));
    vlSymsp->TOP__test_top__core_top0.__PVT__epc_we 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__mstatus_ie_clear 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__cause_we 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl_pipe_ctrl_int_enable 
        = (1U & ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                  ? ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                         >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                        >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))
                  : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                      >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                    >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__mstatus_ie_set 
        = (1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_sepc 
        = ((0x141U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we));
    vlSymsp->TOP__test_top__core_top0.__PVT__isr_addr 
        = ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
            ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                         ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                  ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__csr_interrupt_ctrl_mepc)))
            : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                    ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                             ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_type)
                                      ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec)
                                          ? ((0xfffffffcU 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec) 
                                             + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__cause) 
                                                << 2U))
                                          : (0xfffffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec))
                                      : (0xfffffffcU 
                                         & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec))))
                : 0U));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o = 0U;
    } else {
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__Vtableidx1 
        = ((0x20U & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception 
                     << 5U)) | ((0x10U & (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mstatus_ie) 
                                             & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                                 | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                            << 4U) 
                                           | (0xfffffff0U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception 
                                                 << 3U))) 
                                          | (vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception 
                                             << 4U))) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt 
        = vlSymsp->TOP__test_top__core_top0.__Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt
        [vlSymsp->TOP__test_top__core_top0.__Vtableidx1];
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                  + 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | ((0xfe0U 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            >> 7U)))))
                                                  : 0U)
                                              : 0U)));
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o 
                                        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                           + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__load_addr_offset);
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o 
                                                    = 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__load_addr_offset);
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_stallreq_o)
                                           ? 0xfU : 
                                          (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_inst_is_load_o) 
                                            & (((0x1fU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xfU)) 
                                                == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o)) 
                                               | ((0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o))))
                                            ? 7U : 0U)));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                           + ((0xfff00000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                 >> 0x1fU)))) 
                                                  << 0x14U)) 
                                              | ((0xff000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x14U))))));
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                           + ((0xfffff000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                 >> 0x1fU)))) 
                                                  << 0xcU)) 
                                              | (0xfffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0x14U))));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset;
                                                }
                                            } else {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset;
                                                }
                                            }
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset;
                                                }
                                            } else {
                                                if (
                                                    VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o = 0U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset;
                                                }
                                            } else {
                                                if (
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     == vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o 
                                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset;
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
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl_csr_mepc 
        = vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_inst_addr;
    if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl_csr_mepc 
                        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception)
                            ? ((IData)(4U) + vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_inst_addr)
                            : vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_inst_addr);
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_exe_rdata 
        = ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr) 
             == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr)) 
            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))
            ? vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_wdata
            : ((0x800U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                ? ((0x400U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                    ? ((0x200U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                        ? ((0x100U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                            ? ((0x80U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                ? 0U : ((0x40U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                         ? 0U : ((0x20U 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 0x16U)
                                                      : 0U)))
                                                   : 0U))))
                            : 0U) : ((0x100U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                      ? 0U : ((0x80U 
                                               & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                               ? ((0x40U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : (IData)(
                                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle 
                                                                    >> 0x20U)))))))))
                                               : ((0x40U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle)))))))))))
                    : ((0x200U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                        ? ((0x100U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                            ? ((0x80U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                ? ((0x40U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                    ? 0U : ((0x20U 
                                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                              ? 0U : 
                                             ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : (IData)(
                                                               (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle 
                                                                >> 0x20U)))))))))
                                : ((0x40U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                    ? 0U : ((0x20U 
                                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                              ? 0U : 
                                             ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle)))))))))
                            : 0U) : 0U)) : ((0x400U 
                                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                             ? 0U : 
                                            ((0x200U 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                              ? ((0x100U 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? 0U
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__pmpaddr0))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? 0U
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__pmpcfg0)))))
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mideleg
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__medeleg)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? 0x40001100U
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus))))))))
                                                  : 0U)
                                              : ((0x100U 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? 0U
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__satp)))))))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? 0U
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__scause)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__sepc
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__sscratch))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__stvec
                                                          : 0U))
                                                        : 0U))))))
                                                  : 0U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata 
        = ((((0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                        >> 0x14U)) == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_waddr)) 
            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_we))
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_wdata
            : vlSymsp->TOP__test_top__core_top0.__PVT__csr_exe_rdata);
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_wdata = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_wdata 
                                        = ((0x4000U 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                            ? ((0x2000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                ? (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o) 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata)
                                                    : 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    | vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata))
                                                : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                                                    : 0U))
                                            : ((0x2000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                ? (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o) 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata)
                                                    : 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    | vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata))
                                                : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                                                    : 0U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vtest_top_core_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_ctor_var_reset\n"); );
    // Body
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__ram_we_o = VL_RAND_RESET_I(1);
    __PVT__ram_request_o = VL_RAND_RESET_I(1);
    __PVT__ram_op_o = VL_RAND_RESET_I(4);
    __PVT__ram_addr_o = VL_RAND_RESET_I(32);
    __PVT__ram_wdata_o = VL_RAND_RESET_I(32);
    __PVT__ram_rdata_i = VL_RAND_RESET_I(32);
    __PVT__timer_irq_i = VL_RAND_RESET_I(1);
    __PVT__software_irq_i = VL_RAND_RESET_I(1);
    __PVT__pc_wire_o = VL_RAND_RESET_I(32);
    __PVT__ce_wire_o = VL_RAND_RESET_I(1);
    __PVT__if_inst_i = VL_RAND_RESET_I(32);
    __PVT__pc_wire = VL_RAND_RESET_I(32);
    __PVT__ce_wire = VL_RAND_RESET_I(1);
    __PVT__ctrl_stall_o = VL_RAND_RESET_I(6);
    __PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__id_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_id_inst_is_load_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_id_rd_o = VL_RAND_RESET_I(5);
    __PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__exe_pipe_ctrl_stallreq_o = VL_RAND_RESET_I(1);
    __PVT__exe_pipe_ctrl_jump_enable_o = VL_RAND_RESET_I(1);
    __PVT__exe_pipe_ctrl_jump_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_csr_raddr = VL_RAND_RESET_I(12);
    __PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__mem_halt_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_exe_mem_we = VL_RAND_RESET_I(1);
    __PVT__exe_exe_mem_waddr = VL_RAND_RESET_I(12);
    __PVT__exe_exe_mem_wdata = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_we = VL_RAND_RESET_I(1);
    __PVT__exe_mem_mem_waddr = VL_RAND_RESET_I(12);
    __PVT__exe_mem_mem_wdata = VL_RAND_RESET_I(32);
    __PVT__mem_wb_we = VL_RAND_RESET_I(1);
    __PVT__mem_wb_waddr = VL_RAND_RESET_I(12);
    __PVT__mem_wb_wdata = VL_RAND_RESET_I(32);
    __PVT__wb_csr_we = VL_RAND_RESET_I(1);
    __PVT__wb_csr_waddr = VL_RAND_RESET_I(12);
    __PVT__wb_csr_wdata = VL_RAND_RESET_I(32);
    __PVT__wb_csr_instret_incr = VL_RAND_RESET_I(1);
    __PVT__csr_exe_rdata = VL_RAND_RESET_I(32);
    __PVT__id_exe_exe_exception = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_exception = VL_RAND_RESET_I(32);
    __PVT__mem_interrupt_ctrl_exception = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_inst_addr = VL_RAND_RESET_I(32);
    __PVT__mem_interrupt_ctrl_inst_addr = VL_RAND_RESET_I(32);
    __PVT__mstatus_ie = VL_RAND_RESET_I(1);
    __PVT__mie_external = VL_RAND_RESET_I(1);
    __PVT__mie_timer = VL_RAND_RESET_I(1);
    __PVT__mie_software = VL_RAND_RESET_I(1);
    __PVT__mip_external = VL_RAND_RESET_I(1);
    __PVT__mip_timer = VL_RAND_RESET_I(1);
    __PVT__mip_software = VL_RAND_RESET_I(1);
    __PVT__mtvec = VL_RAND_RESET_I(32);
    __PVT__csr_interrupt_ctrl_mepc = VL_RAND_RESET_I(32);
    __PVT__interrupt_ctrl_csr_mepc = VL_RAND_RESET_I(32);
    __PVT__interrupt_type = VL_RAND_RESET_I(1);
    __PVT__cause_we = VL_RAND_RESET_I(1);
    __PVT__cause = VL_RAND_RESET_I(4);
    __PVT__epc_we = VL_RAND_RESET_I(1);
    __PVT__mepc = VL_RAND_RESET_I(1);
    __PVT__mstatus_ie_clear = VL_RAND_RESET_I(1);
    __PVT__mstatus_ie_set = VL_RAND_RESET_I(1);
    __PVT__interrupt_ctrl_pipe_ctrl_int_enable = VL_RAND_RESET_I(1);
    __PVT__isr_addr = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__op1_o_final = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__op2_o_final = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__except_mret = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__except_ecall = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__i_op2_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__b_type_offset = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__load_addr_offset = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__compare_sub_type_i = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__compare_sub_type_r = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__m_d_op = VL_RAND_RESET_I(2);
    __PVT__exe0__DOT__rs1_signed_i = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__rs2_signed_i = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__m_d_high_result = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__m_d_low_result = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__m_d_ready = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__m_d_count = VL_RAND_RESET_I(6);
    __PVT__exe0__DOT__csr_rdata = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, __PVT__exe0__DOT__m_d__DOT__long_temp);
    __PVT__exe0__DOT__m_d__DOT__rs1_temp = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__m_d__DOT__rs2_temp = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__m_d__DOT__rs1_is_neg = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__m_d__DOT__rs2_is_neg = VL_RAND_RESET_I(1);
    __PVT__csr0__DOT__irq_external_i = VL_RAND_RESET_I(1);
    __PVT__csr0__DOT__mcycle = VL_RAND_RESET_Q(64);
    __PVT__csr0__DOT__minstret = VL_RAND_RESET_Q(64);
    __PVT__csr0__DOT__mstatus = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__mie = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__mtvec = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__mscratch = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__mepc = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__mtval = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__medeleg = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__mideleg = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__pmpcfg0 = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__pmpaddr0 = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__stvec = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__sscratch = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__sepc = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__w_sepc = VL_RAND_RESET_I(1);
    __PVT__csr0__DOT__scause = VL_RAND_RESET_I(32);
    __PVT__csr0__DOT__satp = VL_RAND_RESET_I(32);
    __PVT__interrupt_ctrl0__DOT__S = VL_RAND_RESET_I(4);
    __PVT__interrupt_ctrl0__DOT__S_nxt = VL_RAND_RESET_I(4);
    __PVT__interrupt_ctrl0__DOT__eip = VL_RAND_RESET_I(1);
    __PVT__interrupt_ctrl0__DOT__tip = VL_RAND_RESET_I(1);
    __PVT__interrupt_ctrl0__DOT__sip = VL_RAND_RESET_I(1);
    __PVT__interrupt_ctrl0__DOT__exception = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[0] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[1] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[2] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[3] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[4] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[5] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[6] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[7] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[8] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[9] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[10] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[11] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[12] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[13] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[14] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[15] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[16] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[17] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[18] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[19] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[20] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[21] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[22] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[23] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[24] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[25] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[26] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[27] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[28] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[29] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[30] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[31] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[32] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[33] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[34] = 8U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[35] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[36] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[37] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[38] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[39] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[40] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[41] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[42] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[43] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[44] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[45] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[46] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[47] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[48] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[49] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[50] = 8U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[51] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[52] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[53] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[54] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[55] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[56] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[57] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[58] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[59] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[60] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[61] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[62] = 2U;
    __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[63] = 2U;
}
