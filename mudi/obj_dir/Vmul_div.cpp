// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_div.h for the primary calling header

#include "Vmul_div.h"
#include "Vmul_div__Syms.h"

//==========

void Vmul_div::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmul_div::eval\n"); );
    Vmul_div__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mul_div.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmul_div::_eval_initial_loop(Vmul_div__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mul_div.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmul_div::_sequent__TOP__1(Vmul_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_sequent__TOP__1\n"); );
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp17[3];
    QData/*63:0*/ __Vtemp3;
    QData/*63:0*/ __Vtemp7;
    // Body
    if ((1U == (IData)(vlTOPp->op))) {
        if ((0U == (IData)(vlTOPp->count))) {
            if (vlTOPp->rs1_signed) {
                if (VL_GTS_III(1,32,32, 0U, vlTOPp->rs1)) {
                    vlTOPp->mul_div__DOT__rs1_temp 
                        = ((IData)(1U) + (~ vlTOPp->rs1));
                    vlTOPp->mul_div__DOT__rs1_is_neg = 1U;
                } else {
                    vlTOPp->mul_div__DOT__rs1_temp 
                        = vlTOPp->rs1;
                    vlTOPp->mul_div__DOT__rs1_is_neg = 0U;
                }
            } else {
                vlTOPp->mul_div__DOT__rs1_temp = vlTOPp->rs1;
                vlTOPp->mul_div__DOT__rs1_is_neg = 0U;
            }
            vlTOPp->count = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->count)));
            vlTOPp->stall = 1U;
            if (vlTOPp->rs2_signed) {
                if (VL_GTS_III(1,32,32, 0U, vlTOPp->rs2)) {
                    vlTOPp->mul_div__DOT__rs2_temp 
                        = ((IData)(1U) + (~ vlTOPp->rs2));
                    vlTOPp->mul_div__DOT__rs2_is_neg = 1U;
                } else {
                    vlTOPp->mul_div__DOT__rs2_temp 
                        = vlTOPp->rs2;
                    vlTOPp->mul_div__DOT__rs2_is_neg = 0U;
                }
            } else {
                vlTOPp->mul_div__DOT__rs2_temp = vlTOPp->rs2;
                vlTOPp->mul_div__DOT__rs2_is_neg = 0U;
            }
            VL_EXTEND_WI(65,32, __Vtemp2, vlTOPp->mul_div__DOT__rs2_temp);
            vlTOPp->mul_div__DOT__long_temp[0U] = __Vtemp2[0U];
            vlTOPp->mul_div__DOT__long_temp[1U] = __Vtemp2[1U];
            vlTOPp->mul_div__DOT__long_temp[2U] = __Vtemp2[2U];
            if ((1U & vlTOPp->mul_div__DOT__long_temp[0U])) {
                __Vtemp3 = (0x1ffffffffULL & ((((QData)((IData)(
                                                                vlTOPp->mul_div__DOT__long_temp[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mul_div__DOT__long_temp[1U]))) 
                                              + (QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp))));
                vlTOPp->mul_div__DOT__long_temp[1U] 
                    = (IData)((0x1ffffffffULL & ((((QData)((IData)(
                                                                   vlTOPp->mul_div__DOT__long_temp[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mul_div__DOT__long_temp[1U]))) 
                                                 + (QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp)))));
                vlTOPp->mul_div__DOT__long_temp[2U] 
                    = (IData)((__Vtemp3 >> 0x20U));
            }
            vlTOPp->high = vlTOPp->mul_div__DOT__long_temp[1U];
            vlTOPp->low = vlTOPp->mul_div__DOT__long_temp[0U];
        } else {
            if ((0x20U > (IData)(vlTOPp->count))) {
                VL_SHIFTR_WWI(65,65,32, __Vtemp6, vlTOPp->mul_div__DOT__long_temp, 1U);
                vlTOPp->mul_div__DOT__long_temp[0U] 
                    = __Vtemp6[0U];
                vlTOPp->mul_div__DOT__long_temp[1U] 
                    = __Vtemp6[1U];
                vlTOPp->mul_div__DOT__long_temp[2U] 
                    = (1U & __Vtemp6[2U]);
                if ((1U & vlTOPp->mul_div__DOT__long_temp[0U])) {
                    __Vtemp7 = (0x1ffffffffULL & ((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mul_div__DOT__long_temp[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mul_div__DOT__long_temp[1U]))) 
                                                  + (QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp))));
                    vlTOPp->mul_div__DOT__long_temp[1U] 
                        = (IData)((0x1ffffffffULL & 
                                   ((((QData)((IData)(
                                                      vlTOPp->mul_div__DOT__long_temp[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->mul_div__DOT__long_temp[1U]))) 
                                    + (QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp)))));
                    vlTOPp->mul_div__DOT__long_temp[2U] 
                        = (IData)((__Vtemp7 >> 0x20U));
                }
                vlTOPp->count = (0x3fU & ((IData)(1U) 
                                          + (IData)(vlTOPp->count)));
                vlTOPp->high = vlTOPp->mul_div__DOT__long_temp[1U];
                vlTOPp->low = vlTOPp->mul_div__DOT__long_temp[0U];
                if ((0x20U == (IData)(vlTOPp->count))) {
                    VL_SHIFTR_WWI(65,65,32, __Vtemp11, vlTOPp->mul_div__DOT__long_temp, 1U);
                    vlTOPp->mul_div__DOT__long_temp[0U] 
                        = __Vtemp11[0U];
                    vlTOPp->mul_div__DOT__long_temp[1U] 
                        = __Vtemp11[1U];
                    vlTOPp->mul_div__DOT__long_temp[2U] 
                        = (1U & __Vtemp11[2U]);
                    vlTOPp->high = vlTOPp->mul_div__DOT__long_temp[1U];
                    vlTOPp->ready = 1U;
                    vlTOPp->stall = 0U;
                    vlTOPp->low = vlTOPp->mul_div__DOT__long_temp[0U];
                    if (((IData)(vlTOPp->mul_div__DOT__rs1_is_neg) 
                         ^ (IData)(vlTOPp->mul_div__DOT__rs2_is_neg))) {
                        vlTOPp->low = ((IData)(1U) 
                                       + (~ vlTOPp->mul_div__DOT__long_temp[0U]));
                    }
                }
            }
        }
    } else {
        if ((2U == (IData)(vlTOPp->op))) {
            if ((0U == (IData)(vlTOPp->count))) {
                vlTOPp->count = (0x3fU & ((IData)(1U) 
                                          + (IData)(vlTOPp->count)));
                if (vlTOPp->rs1_signed) {
                    if (VL_GTS_III(1,32,32, 0U, vlTOPp->rs1)) {
                        vlTOPp->mul_div__DOT__rs1_temp 
                            = ((IData)(1U) + (~ vlTOPp->rs1));
                        vlTOPp->mul_div__DOT__rs1_is_neg = 1U;
                    } else {
                        vlTOPp->mul_div__DOT__rs1_temp 
                            = vlTOPp->rs1;
                        vlTOPp->mul_div__DOT__rs1_is_neg = 0U;
                    }
                } else {
                    vlTOPp->mul_div__DOT__rs1_temp 
                        = vlTOPp->rs1;
                    vlTOPp->mul_div__DOT__rs1_is_neg = 0U;
                }
                vlTOPp->stall = 1U;
                if (vlTOPp->rs2_signed) {
                    if (VL_GTS_III(1,32,32, 0U, vlTOPp->rs2)) {
                        vlTOPp->mul_div__DOT__rs2_temp 
                            = ((IData)(1U) + (~ vlTOPp->rs2));
                        vlTOPp->mul_div__DOT__rs2_is_neg = 1U;
                    } else {
                        vlTOPp->mul_div__DOT__rs2_temp 
                            = vlTOPp->rs2;
                        vlTOPp->mul_div__DOT__rs2_is_neg = 0U;
                    }
                } else {
                    vlTOPp->mul_div__DOT__rs2_temp 
                        = vlTOPp->rs2;
                    vlTOPp->mul_div__DOT__rs2_is_neg = 0U;
                }
                vlTOPp->mul_div__DOT__long_temp[0U] 
                    = (0xfffffffeU & ((IData)((QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp))) 
                                      << 1U));
                vlTOPp->mul_div__DOT__long_temp[1U] 
                    = ((1U & ((IData)((QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       ((QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp)) 
                                                        >> 0x20U)) 
                                               << 1U)));
                vlTOPp->mul_div__DOT__long_temp[2U] 
                    = (1U & ((IData)(((QData)((IData)(vlTOPp->mul_div__DOT__rs1_temp)) 
                                      >> 0x20U)) >> 0x1fU));
                if ((vlTOPp->mul_div__DOT__long_temp[1U] 
                     >= vlTOPp->mul_div__DOT__rs2_temp)) {
                    vlTOPp->mul_div__DOT__long_temp[1U] 
                        = (vlTOPp->mul_div__DOT__long_temp[1U] 
                           - vlTOPp->mul_div__DOT__rs2_temp);
                    vlTOPp->mul_div__DOT__long_temp[0U] 
                        = (1U | vlTOPp->mul_div__DOT__long_temp[0U]);
                }
                vlTOPp->high = vlTOPp->mul_div__DOT__long_temp[1U];
                vlTOPp->low = vlTOPp->mul_div__DOT__long_temp[0U];
            } else {
                if ((0x20U > (IData)(vlTOPp->count))) {
                    VL_SHIFTL_WWI(65,65,32, __Vtemp17, vlTOPp->mul_div__DOT__long_temp, 1U);
                    vlTOPp->mul_div__DOT__long_temp[0U] 
                        = __Vtemp17[0U];
                    vlTOPp->mul_div__DOT__long_temp[1U] 
                        = __Vtemp17[1U];
                    vlTOPp->mul_div__DOT__long_temp[2U] 
                        = (1U & __Vtemp17[2U]);
                    if ((vlTOPp->mul_div__DOT__long_temp[1U] 
                         >= vlTOPp->mul_div__DOT__rs2_temp)) {
                        vlTOPp->mul_div__DOT__long_temp[1U] 
                            = (vlTOPp->mul_div__DOT__long_temp[1U] 
                               - vlTOPp->mul_div__DOT__rs2_temp);
                        vlTOPp->mul_div__DOT__long_temp[0U] 
                            = (1U | vlTOPp->mul_div__DOT__long_temp[0U]);
                    }
                    vlTOPp->count = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlTOPp->count)));
                    vlTOPp->high = vlTOPp->mul_div__DOT__long_temp[1U];
                    vlTOPp->low = vlTOPp->mul_div__DOT__long_temp[0U];
                    if ((0x20U == (IData)(vlTOPp->count))) {
                        if (((IData)(vlTOPp->mul_div__DOT__rs1_is_neg) 
                             ^ (IData)(vlTOPp->mul_div__DOT__rs2_is_neg))) {
                            vlTOPp->low = ((IData)(1U) 
                                           + (~ vlTOPp->mul_div__DOT__long_temp[0U]));
                        }
                        vlTOPp->ready = 1U;
                        vlTOPp->stall = 0U;
                    }
                }
            }
        } else {
            vlTOPp->high = 0U;
            vlTOPp->low = 0U;
            vlTOPp->ready = 0U;
            vlTOPp->stall = 0U;
            vlTOPp->count = 0U;
        }
    }
}

void Vmul_div::_eval(Vmul_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_eval\n"); );
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vmul_div::_change_request(Vmul_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_change_request\n"); );
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmul_div::_change_request_1(Vmul_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_change_request_1\n"); );
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmul_div::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((op & 0xfcU))) {
        Verilated::overWidthError("op");}
    if (VL_UNLIKELY((rs1_signed & 0xfeU))) {
        Verilated::overWidthError("rs1_signed");}
    if (VL_UNLIKELY((rs2_signed & 0xfeU))) {
        Verilated::overWidthError("rs2_signed");}
}
#endif  // VL_DEBUG
