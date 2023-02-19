// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu4.h for the primary calling header

#include "Valu4.h"
#include "Valu4__Syms.h"

//==========

VL_CTOR_IMP(Valu4) {
    Valu4__Syms* __restrict vlSymsp = __VlSymsp = new Valu4__Syms(this, name());
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Valu4::__Vconfigure(Valu4__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Valu4::~Valu4() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Valu4::_eval_initial(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval_initial\n"); );
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::final\n"); );
    // Variables
    Valu4__Syms* __restrict vlSymsp = this->__VlSymsp;
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu4::_eval_settle(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval_settle\n"); );
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Valu4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(4);
    b = VL_RAND_RESET_I(4);
    c_in = VL_RAND_RESET_I(1);
    op = VL_RAND_RESET_I(2);
    result = VL_RAND_RESET_I(4);
    c_out = VL_RAND_RESET_I(1);
    alu4__DOT__c1 = VL_RAND_RESET_I(1);
    alu4__DOT__c2 = VL_RAND_RESET_I(1);
    alu4__DOT__c3 = VL_RAND_RESET_I(1);
    alu4__DOT__al0__DOT__g4__DOT__s1 = VL_RAND_RESET_I(1);
    alu4__DOT__al1__DOT__g4__DOT__s1 = VL_RAND_RESET_I(1);
    alu4__DOT__al2__DOT__g4__DOT__s1 = VL_RAND_RESET_I(1);
    alu4__DOT__al3__DOT__g4__DOT__s1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
