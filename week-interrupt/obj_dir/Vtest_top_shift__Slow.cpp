// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_shift.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_shift) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_shift::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_shift::~Vtest_top_shift() {
}

void Vtest_top_shift::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_top_shift::_ctor_var_reset\n"); );
    // Body
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__value_i = VL_RAND_RESET_I(32);
    __PVT__shamt_i = VL_RAND_RESET_I(5);
    __PVT__direct_i = VL_RAND_RESET_I(1);
    __PVT__arithmetic_i = VL_RAND_RESET_I(1);
    __PVT__value_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__shift_l_temp[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__shift_r_temp[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
