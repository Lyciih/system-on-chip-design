// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_div.h for the primary calling header

#include "Vmul_div.h"
#include "Vmul_div__Syms.h"

//==========

VL_CTOR_IMP(Vmul_div) {
    Vmul_div__Syms* __restrict vlSymsp = __VlSymsp = new Vmul_div__Syms(this, name());
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmul_div::__Vconfigure(Vmul_div__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmul_div::~Vmul_div() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmul_div::_eval_initial(Vmul_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_eval_initial\n"); );
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vmul_div::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::final\n"); );
    // Variables
    Vmul_div__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmul_div::_eval_settle(Vmul_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_eval_settle\n"); );
    Vmul_div* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmul_div::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_div::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    op = VL_RAND_RESET_I(2);
    rs1 = VL_RAND_RESET_I(32);
    rs1_signed = VL_RAND_RESET_I(1);
    rs2 = VL_RAND_RESET_I(32);
    rs2_signed = VL_RAND_RESET_I(1);
    high = VL_RAND_RESET_I(32);
    low = VL_RAND_RESET_I(32);
    ready = VL_RAND_RESET_I(1);
    stall = VL_RAND_RESET_I(1);
    mul_div__DOT__count = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(65, mul_div__DOT__long_temp);
    mul_div__DOT__rs1_temp = VL_RAND_RESET_I(32);
    mul_div__DOT__rs2_temp = VL_RAND_RESET_I(32);
    mul_div__DOT__rs1_is_neg = VL_RAND_RESET_I(1);
    mul_div__DOT__rs2_is_neg = VL_RAND_RESET_I(1);
}
