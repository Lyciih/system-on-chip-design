// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_fetch.h for the primary calling header

#include "Vinst_fetch_rom.h"
#include "Vinst_fetch__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vinst_fetch_rom) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vinst_fetch_rom::__Vconfigure(Vinst_fetch__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vinst_fetch_rom::~Vinst_fetch_rom() {
}

void Vinst_fetch_rom::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vinst_fetch_rom::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__ce_i = VL_RAND_RESET_I(1);
    __PVT__addr_i = VL_RAND_RESET_I(32);
    __PVT__inst_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2097152; ++__Vi0) {
            __PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
}
