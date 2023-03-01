// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__Vdly__pc_wire = vlSymsp->TOP__test_top.__PVT__pc_wire;
    vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top.__PVT__pc_wire);
    vlSymsp->TOP__test_top.__Vdly__pc_wire = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                               ? ((IData)(4U) 
                                                  + vlSymsp->TOP__test_top.__PVT__pc_wire)
                                               : 0U);
    vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlTOPp->rst_i)
                                           ? 0U : (
                                                   (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                    ? 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 0xcU)))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                        >> 7U))
                                                     : 0U)
                                                    : 0U)));
    vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o = 
        ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlTOPp->rst_i)) 
                                       & ((0x13U == 
                                           (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                          & (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xcU))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o = 0x13U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o = 0U;
        vlSymsp->TOP__test_top.__PVT__if_id_inst_o = 0x13U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlTOPp->rst_i)
                                               ? 0U
                                               : ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((0xfffff000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                       >> 0x1fU)))) 
                                                        << 0xcU)) 
                                                    | (0xfffU 
                                                       & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x14U)))
                                                    : 0U)
                                                   : 0U)));
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
            = ((IData)(vlTOPp->rst_i) ? 0x13U : ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                  ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                  : 0x13U));
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlTOPp->rst_i)
                                               ? 0U
                                               : ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                                     ? 0U
                                                     : 
                                                    (((~ (IData)(vlTOPp->rst_i)) 
                                                      & ((0x13U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                                         & (6U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 0xcU)))))
                                                      ? 
                                                     vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs
                                                     [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                                      : 0U))
                                                    : 0U)
                                                   : 0U)));
        vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
            = vlSymsp->TOP__test_top__rom0.__PVT__inst_o;
    }
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__pc_wire = vlSymsp->TOP__test_top.__Vdly__pc_wire;
    vlSymsp->TOP__test_top.__PVT__ce_wire = (1U & (~ (IData)(vlTOPp->rst_i)));
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x13U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                         ? ((6U == 
                                             (7U & 
                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xcU)))
                                             ? (0x1fU 
                                                & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0xfU))
                                             : 0U) : 0U));
}
