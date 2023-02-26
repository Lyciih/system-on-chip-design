// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "Vmul.h"
#include "Vmul__Syms.h"

//==========

void Vmul::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmul::eval\n"); );
    Vmul__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mul.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmul::_eval_initial_loop(Vmul__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
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
            VL_FATAL_MT("mul.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmul::_sequent__TOP__1(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_sequent__TOP__1\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__mul__DOT__cnt;
    WData/*64:0*/ __Vdly__mul__DOT__result[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp7[3];
    // Body
    __Vdly__mul__DOT__cnt = vlTOPp->mul__DOT__cnt;
    __Vdly__mul__DOT__result[0U] = vlTOPp->mul__DOT__result[0U];
    __Vdly__mul__DOT__result[1U] = vlTOPp->mul__DOT__result[1U];
    __Vdly__mul__DOT__result[2U] = vlTOPp->mul__DOT__result[2U];
    vlTOPp->ready_o = (2U == (IData)(vlTOPp->mul__DOT__S));
    vlTOPp->result_o = ((2U == (IData)(vlTOPp->mul__DOT__S))
                         ? vlTOPp->mul__DOT__result[0U]
                         : vlTOPp->result_o);
    if (((0U == (IData)(vlTOPp->mul__DOT__S)) & (IData)(vlTOPp->req_i))) {
        if ((1U & (~ ((~ (IData)((0U != vlTOPp->a_i))) 
                      | (~ (IData)((0U != vlTOPp->b_i))))))) {
            vlTOPp->mul__DOT__reg32 = vlTOPp->a_i;
        }
    }
    if (((0U == (IData)(vlTOPp->mul__DOT__S)) & (IData)(vlTOPp->req_i))) {
        if ((1U & (~ ((~ (IData)((0U != vlTOPp->a_i))) 
                      | (~ (IData)((0U != vlTOPp->b_i))))))) {
            __Vdly__mul__DOT__cnt = 0x1fU;
        }
    } else {
        if ((1U == (IData)(vlTOPp->mul__DOT__S))) {
            __Vdly__mul__DOT__cnt = (0x3fU & ((IData)(vlTOPp->mul__DOT__cnt) 
                                              - (IData)(1U)));
        }
    }
    if (((0U == (IData)(vlTOPp->mul__DOT__S)) & (IData)(vlTOPp->req_i))) {
        VL_EXTEND_WI(65,32, __Vtemp3, vlTOPp->b_i);
        if ((1U & ((~ (IData)((0U != vlTOPp->a_i))) 
                   | (~ (IData)((0U != vlTOPp->b_i)))))) {
            __Vdly__mul__DOT__result[0U] = 0U;
            __Vdly__mul__DOT__result[1U] = 0U;
            __Vdly__mul__DOT__result[2U] = 0U;
        } else {
            __Vdly__mul__DOT__result[0U] = __Vtemp3[0U];
            __Vdly__mul__DOT__result[1U] = __Vtemp3[1U];
            __Vdly__mul__DOT__result[2U] = __Vtemp3[2U];
        }
    } else {
        if ((1U == (IData)(vlTOPp->mul__DOT__S))) {
            VL_EXTEND_WQ(65,64, __Vtemp6, (vlTOPp->mul__DOT__result_tmp 
                                           >> 1U));
            VL_EXTEND_WQ(65,64, __Vtemp7, (((QData)((IData)(
                                                            vlTOPp->mul__DOT__result[2U])) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mul__DOT__result[1U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mul__DOT__result[0U])) 
                                                 >> 1U))));
            if (vlTOPp->mul__DOT__mul_add) {
                __Vdly__mul__DOT__result[0U] = __Vtemp6[0U];
                __Vdly__mul__DOT__result[1U] = __Vtemp6[1U];
                __Vdly__mul__DOT__result[2U] = __Vtemp6[2U];
            } else {
                __Vdly__mul__DOT__result[0U] = __Vtemp7[0U];
                __Vdly__mul__DOT__result[1U] = __Vtemp7[1U];
                __Vdly__mul__DOT__result[2U] = __Vtemp7[2U];
            }
        }
    }
    vlTOPp->mul__DOT__cnt = __Vdly__mul__DOT__cnt;
    vlTOPp->mul__DOT__result[0U] = __Vdly__mul__DOT__result[0U];
    vlTOPp->mul__DOT__result[1U] = __Vdly__mul__DOT__result[1U];
    vlTOPp->mul__DOT__result[2U] = __Vdly__mul__DOT__result[2U];
    vlTOPp->mul__DOT__mul_add = (1U & vlTOPp->mul__DOT__result[0U]);
    vlTOPp->mul__DOT__result_tmp = (((QData)((IData)(
                                                     (vlTOPp->mul__DOT__reg32 
                                                      + 
                                                      vlTOPp->mul__DOT__result[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mul__DOT__result[0U])));
    vlTOPp->mul__DOT__S = ((1U & ((IData)(vlTOPp->rst_i) 
                                  | (~ (IData)(vlTOPp->req_i))))
                            ? 0U : (IData)(vlTOPp->mul__DOT__S_nxt));
}

VL_INLINE_OPT void Vmul::_combo__TOP__3(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_combo__TOP__3\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mul__DOT__S_nxt = ((0U == (IData)(vlTOPp->mul__DOT__S))
                                ? ((1U & ((~ (IData)(
                                                     (0U 
                                                      != vlTOPp->a_i))) 
                                          | (~ (IData)(
                                                       (0U 
                                                        != vlTOPp->b_i)))))
                                    ? 2U : 1U) : ((1U 
                                                   == (IData)(vlTOPp->mul__DOT__S))
                                                   ? 
                                                  ((0U 
                                                    != (IData)(vlTOPp->mul__DOT__cnt))
                                                    ? 1U
                                                    : 2U)
                                                   : 0U));
}

void Vmul::_eval(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vmul::_change_request(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_change_request\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmul::_change_request_1(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_change_request_1\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmul::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((req_i & 0xfeU))) {
        Verilated::overWidthError("req_i");}
}
#endif  // VL_DEBUG
