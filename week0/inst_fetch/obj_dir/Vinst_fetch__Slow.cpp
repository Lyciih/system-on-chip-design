// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_fetch.h for the primary calling header

#include "Vinst_fetch.h"
#include "Vinst_fetch__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vinst_fetch) {
    Vinst_fetch__Syms* __restrict vlSymsp = __VlSymsp = new Vinst_fetch__Syms(this, name());
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(inst_fetch, Vinst_fetch_inst_fetch);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vinst_fetch::__Vconfigure(Vinst_fetch__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vinst_fetch::~Vinst_fetch() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vinst_fetch::_eval_initial(Vinst_fetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch::_eval_initial\n"); );
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vinst_fetch::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch::final\n"); );
    // Variables
    Vinst_fetch__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vinst_fetch::_eval_settle(Vinst_fetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch::_eval_settle\n"); );
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_sequent__TOP__1(vlSymsp);
}

void Vinst_fetch::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    inst_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
