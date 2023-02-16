// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder4.h for the primary calling header

#include "Vadder4.h"
#include "Vadder4__Syms.h"

//==========

VL_CTOR_IMP(Vadder4) {
    Vadder4__Syms* __restrict vlSymsp = __VlSymsp = new Vadder4__Syms(this, name());
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vadder4::__Vconfigure(Vadder4__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vadder4::~Vadder4() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vadder4::_eval_initial(Vadder4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_eval_initial\n"); );
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadder4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::final\n"); );
    // Variables
    Vadder4__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadder4::_eval_settle(Vadder4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_eval_settle\n"); );
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vadder4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(4);
    b = VL_RAND_RESET_I(4);
    c_in = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(4);
    c_out = VL_RAND_RESET_I(1);
    adder4__DOT__c = VL_RAND_RESET_I(3);
    adder4__DOT__fa1__DOT__s1 = VL_RAND_RESET_I(1);
    adder4__DOT__fa2__DOT__s1 = VL_RAND_RESET_I(1);
    adder4__DOT__fa2__DOT__c2 = VL_RAND_RESET_I(1);
    adder4__DOT__fa3__DOT__s1 = VL_RAND_RESET_I(1);
    adder4__DOT__fa3__DOT__c2 = VL_RAND_RESET_I(1);
    adder4__DOT__fa4__DOT__s1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__adder4__DOT__c = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
