// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_fetch.h for the primary calling header

#include "Vinst_fetch_rom.h"
#include "Vinst_fetch__Syms.h"

#include "verilated_dpi.h"

//==========

void Vinst_fetch_rom::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vinst_fetch_rom::writeByte\n"); );
    // Variables
    IData/*31:0*/ unnamedblk1__DOT__t_addr;
    Vinst_fetch__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    unnamedblk1__DOT__t_addr = byte_addr;
    if ((0x200000U > byte_addr)) {
        vlSymsp->TOP__inst_fetch__rom0.__PVT__mem[(0x1fffffU 
                                                   & unnamedblk1__DOT__t_addr)] 
            = val;
    }
}

VL_INLINE_OPT void Vinst_fetch_rom::_sequent__TOP__inst_fetch__rom0__1(Vinst_fetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vinst_fetch_rom::_sequent__TOP__inst_fetch__rom0__1\n"); );
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__inst_fetch__rom0.__PVT__inst_o = 
        ((IData)(vlSymsp->TOP__inst_fetch.__PVT__ce_wire)
          ? ((vlSymsp->TOP__inst_fetch__rom0.__PVT__mem
              [(0x1ffffcU & vlSymsp->TOP__inst_fetch.__PVT__pc_wire)] 
              << 0x18U) | ((vlSymsp->TOP__inst_fetch__rom0.__PVT__mem
                            [(0x1fffffU & ((IData)(1U) 
                                           + (0x1ffffcU 
                                              & vlSymsp->TOP__inst_fetch.__PVT__pc_wire)))] 
                            << 0x10U) | ((vlSymsp->TOP__inst_fetch__rom0.__PVT__mem
                                          [(0x1fffffU 
                                            & ((IData)(2U) 
                                               + (0x1ffffcU 
                                                  & vlSymsp->TOP__inst_fetch.__PVT__pc_wire)))] 
                                          << 8U) | 
                                         vlSymsp->TOP__inst_fetch__rom0.__PVT__mem
                                         [(0x1fffffU 
                                           & ((IData)(3U) 
                                              + (0x1ffffcU 
                                                 & vlSymsp->TOP__inst_fetch.__PVT__pc_wire)))])))
          : 0U);
}
