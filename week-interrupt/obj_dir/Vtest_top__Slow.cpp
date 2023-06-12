// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top) {
    Vtest_top__Syms* __restrict vlSymsp = __VlSymsp = new Vtest_top__Syms(this, name());
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(test_top, Vtest_top_test_top);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtest_top::~Vtest_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtest_top::_eval_initial(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_eval_initial\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0__regfile0._initial__TOP__test_top__core_top0__regfile0__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__test_top._initial__TOP__test_top__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vtest_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::final\n"); );
    // Variables
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top._final_TOP__test_top(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtest_top::_eval_settle(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_eval_settle\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top._settle__TOP__test_top__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__test_top__core_top0._settle__TOP__test_top__core_top0__1(vlSymsp);
    vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type._settle__TOP__test_top__core_top0__exe0__DOT__shift_i_type__1(vlSymsp);
    vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type._settle__TOP__test_top__core_top0__exe0__DOT__shift_i_type__1(vlSymsp);
    vlSymsp->TOP__test_top__core_top0__regfile0._settle__TOP__test_top__core_top0__regfile0__2(vlSymsp);
    vlSymsp->TOP__test_top._settle__TOP__test_top__3(vlSymsp);
    vlSymsp->TOP__test_top__core_top0._settle__TOP__test_top__core_top0__2(vlSymsp);
    vlSymsp->TOP__test_top__dpram0._settle__TOP__test_top__dpram0__1(vlSymsp);
    vlSymsp->TOP__test_top._settle__TOP__test_top__4(vlSymsp);
    vlSymsp->TOP__test_top__core_top0._settle__TOP__test_top__core_top0__3(vlSymsp);
}

void Vtest_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    halt_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
