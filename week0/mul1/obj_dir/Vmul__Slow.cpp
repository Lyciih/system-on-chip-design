// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "Vmul.h"
#include "Vmul__Syms.h"

//==========

VL_CTOR_IMP(Vmul) {
    Vmul__Syms* __restrict vlSymsp = __VlSymsp = new Vmul__Syms(this, name());
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmul::__Vconfigure(Vmul__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmul::~Vmul() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmul::_settle__TOP__2(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_settle__TOP__2\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mul__DOT__mul_add = (1U & vlTOPp->mul__DOT__result[0U]);
    vlTOPp->mul__DOT__result_tmp = (((QData)((IData)(
                                                     (vlTOPp->mul__DOT__reg32 
                                                      + 
                                                      vlTOPp->mul__DOT__result[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mul__DOT__result[0U])));
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

void Vmul::_eval_initial(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval_initial\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vmul::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::final\n"); );
    // Variables
    Vmul__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmul::_eval_settle(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval_settle\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vmul::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    a_i = VL_RAND_RESET_I(32);
    b_i = VL_RAND_RESET_I(32);
    req_i = VL_RAND_RESET_I(1);
    ready_o = VL_RAND_RESET_I(1);
    result_o = VL_RAND_RESET_I(32);
    mul__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, mul__DOT__result);
    mul__DOT__cnt = VL_RAND_RESET_I(6);
    mul__DOT__S = VL_RAND_RESET_I(2);
    mul__DOT__S_nxt = VL_RAND_RESET_I(2);
    mul__DOT__mul_add = VL_RAND_RESET_I(1);
    mul__DOT__result_tmp = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
