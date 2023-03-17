// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__Vdly__pc_wire = vlSymsp->TOP__test_top.__PVT__pc_wire;
    vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top.__PVT__pc_wire);
    vlSymsp->TOP__test_top.__Vdly__pc_wire = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                               ? ((IData)(4U) 
                                                  + vlSymsp->TOP__test_top.__PVT__pc_wire)
                                               : 0U);
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o;
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o;
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : (0x1fU 
                                              & ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U))))
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U)
                                                      : 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U)
                                                      : 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U)))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U)
                                                      : 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U)
                                                      : 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U))))
                                                   : 0U))));
    }
    vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o = 
        ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlTOPp->rst_i)) 
                                       & ((0x13U == 
                                           (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                          | (0x33U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o = 0x13U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o = 0U;
        vlSymsp->TOP__test_top.__PVT__if_id_inst_o = 0x13U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                               ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                               : ((
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                   : 
                                                  ((IData)(vlTOPp->rst_i)
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                     ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                                       ? 0U
                                                       : 
                                                      (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                                          == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                         & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                        & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                                        ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                        : 
                                                       ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                                         ? 
                                                        vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                        [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                                         : 0U)))
                                                      : 0U))))));
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
            = ((IData)(vlTOPp->rst_i) ? 0x13U : ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                  ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                   : 0x13U)));
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                               ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                               : ((
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                   : 
                                                  ((IData)(vlTOPp->rst_i)
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                      ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                      : 0U))))));
        vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
            = vlSymsp->TOP__test_top__rom0.__PVT__inst_o;
    }
    vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
        = ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
            ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U)))))
            : ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))));
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__pc_wire = vlSymsp->TOP__test_top.__Vdly__pc_wire;
    vlSymsp->TOP__test_top.__PVT__ce_wire = (1U & (~ (IData)(vlTOPp->rst_i)));
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o = 
        ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o;
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o;
    }
}

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
    } else {
        if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
            if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                    = ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                        : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? ((IData)(vlTOPp->rst_i)
                                ? 0U : ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp
                                        [(0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x14U))]
                                         : vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp
                                        [(0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x14U))]))
                            : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
            } else {
                if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                            = ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                ? 1U : 0U);
                    } else {
                        vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_i 
                            = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                            = ((0x80000000U & vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_i)
                                ? 1U : 0U);
                    }
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                        = ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? ((IData)(vlTOPp->rst_i)
                                ? 0U : ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp
                                        [(0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x14U))]
                                         : vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp
                                        [(0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x14U))]))
                            : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                }
            }
        } else {
            if ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                        = ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                   & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                   | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                            : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                ? ((IData)(vlTOPp->rst_i)
                                    ? 0U : ((0x4000U 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp
                                            [(0x1fU 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]
                                             : vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp
                                            [(0x1fU 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]))
                                : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                   ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
                } else {
                    if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                = ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                    < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                    ? 1U : 0U);
                        } else {
                            vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_r 
                                = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                   - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                            vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                = ((0x80000000U & vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_r)
                                    ? 1U : 0U);
                        }
                    } else {
                        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                            = ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                ? ((IData)(vlTOPp->rst_i)
                                    ? 0U : ((0x4000U 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp
                                            [(0x1fU 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]
                                             : vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp
                                            [(0x1fU 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]))
                                : ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                    ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                       - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                    : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                       + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
                    }
                }
            } else {
                vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o 
            = vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o;
        if ((0x13U != (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
            if ((0x33U != (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o 
            = ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                : ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o 
            = ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                ? 0U : ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                         ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                     >> 0x14U)) : 0U));
    }
    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & ((0x13U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                                     & (0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))));
    vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : (0x1fU & ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                  ? 
                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xfU)
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U))));
    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                                     | (0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))));
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((IData)(vlTOPp->rst_i) 
                                                  | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o;
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
    }
}
