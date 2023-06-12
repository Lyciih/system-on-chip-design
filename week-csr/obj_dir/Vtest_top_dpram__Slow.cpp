// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_dpram.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_dpram) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_dpram::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_dpram::~Vtest_top_dpram() {
}

void Vtest_top_dpram::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__we_i = VL_RAND_RESET_I(1);
    __PVT__request_i = VL_RAND_RESET_I(1);
    __PVT__addr_i = VL_RAND_RESET_I(32);
    __PVT__data_i = VL_RAND_RESET_Q(64);
    __PVT__data_o = VL_RAND_RESET_Q(64);
    __PVT__inst_ce_i = VL_RAND_RESET_I(1);
    __PVT__pc_i = VL_RAND_RESET_I(32);
    __PVT__inst_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<3145728; ++__Vi0) {
            __PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __Vlvbound1 = VL_RAND_RESET_I(8);
    __Vlvbound2 = VL_RAND_RESET_I(8);
    __Vlvbound3 = VL_RAND_RESET_I(8);
    __Vlvbound4 = VL_RAND_RESET_I(8);
    __Vlvbound5 = VL_RAND_RESET_I(8);
    __Vlvbound6 = VL_RAND_RESET_I(8);
    __Vlvbound7 = VL_RAND_RESET_I(8);
    __Vlvbound8 = VL_RAND_RESET_I(8);
    __Vlvbound9 = VL_RAND_RESET_I(8);
}
