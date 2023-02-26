// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_fetch.h for the primary calling header

#include "Vinst_fetch_inst_fetch.h"
#include "Vinst_fetch__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vinst_fetch_inst_fetch::_sequent__TOP__inst_fetch__1(Vinst_fetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vinst_fetch_inst_fetch::_sequent__TOP__inst_fetch__1\n"); );
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__inst_fetch.__Vdly__pc_wire = vlSymsp->TOP__inst_fetch.__PVT__pc_wire;
    vlSymsp->TOP__inst_fetch.__Vdly__pc_wire = ((IData)(vlSymsp->TOP__inst_fetch.__PVT__ce_wire)
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSymsp->TOP__inst_fetch.__PVT__pc_wire)
                                                 : 0U);
}

VL_INLINE_OPT void Vinst_fetch_inst_fetch::_sequent__TOP__inst_fetch__2(Vinst_fetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vinst_fetch_inst_fetch::_sequent__TOP__inst_fetch__2\n"); );
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__inst_fetch.__PVT__pc_wire = vlSymsp->TOP__inst_fetch.__Vdly__pc_wire;
    vlSymsp->TOP__inst_fetch.__PVT__ce_wire = (1U & 
                                               (~ (IData)(vlTOPp->rst_i)));
}
