// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_fetch.h for the primary calling header

#include "Vinst_fetch_inst_fetch.h"
#include "Vinst_fetch__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vinst_fetch_inst_fetch) {
    VL_CELL(rom0, Vinst_fetch_rom);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vinst_fetch_inst_fetch::__Vconfigure(Vinst_fetch__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vinst_fetch_inst_fetch::~Vinst_fetch_inst_fetch() {
}

void Vinst_fetch_inst_fetch::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vinst_fetch_inst_fetch::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    inst_o = VL_RAND_RESET_I(32);
    __PVT__pc_wire = VL_RAND_RESET_I(32);
    __PVT__ce_wire = VL_RAND_RESET_I(1);
    __Vdly__pc_wire = VL_RAND_RESET_I(32);
}
