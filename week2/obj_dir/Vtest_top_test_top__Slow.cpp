// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_test_top) {
    VL_CELL(rom0, Vtest_top_rom);
    VL_CELL(regfile0, Vtest_top_regfile);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_test_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_test_top::~Vtest_top_test_top() {
}

void Vtest_top_test_top::_settle__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 0U;
    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = 0U;
    vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x13U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                                         ? ((6U == 
                                             (7U & 
                                              (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0xcU)))
                                             ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o 
            = vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o;
        if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
            if ((6U != (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                              >> 0xcU)))) {
                vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
            = ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? ((6U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0xcU))) ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                               | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                    : 0U) : 0U);
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o;
    }
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((IData)(vlTOPp->rst_i) 
                                                  | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o 
            = ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                ? ((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                 >> 0xcU))) ? (0x1fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xfU))
                    : 0U) : 0U);
    }
    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                                     & (6U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 0xcU)))));
}

void Vtest_top_test_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    __PVT__pc_wire = VL_RAND_RESET_I(32);
    __PVT__ce_wire = VL_RAND_RESET_I(1);
    __PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    __PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    __Vdly__pc_wire = VL_RAND_RESET_I(32);
}
