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
                                         ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                         : 0U));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o 
            = vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o;
        if ((0x13U != (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
            vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[1U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[2U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[3U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[4U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[5U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[6U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[7U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[8U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[9U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xaU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xbU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xcU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xdU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xeU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xfU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x10U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x11U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x12U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x13U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x14U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x15U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x16U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x17U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x18U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x19U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1aU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1bU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1cU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1dU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1eU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1fU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[1U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[2U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[3U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[4U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[5U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[6U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[7U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[8U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[9U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xaU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xbU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xcU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xdU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xeU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xfU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x10U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x11U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x12U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x13U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x14U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x15U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x16U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x17U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x18U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x19U] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1aU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1bU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1cU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1dU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1eU] = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1fU] = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0U] 
            = vlSymsp->TOP__test_top.__PVT__id_exe_op1_o;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0U] 
            = vlSymsp->TOP__test_top.__PVT__id_exe_op1_o;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[1U] 
            = (0xfffffffeU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 1U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[2U] 
            = (0xfffffffcU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 2U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[3U] 
            = (0xfffffff8U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 3U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[4U] 
            = (0xfffffff0U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 4U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[5U] 
            = (0xffffffe0U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 5U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[6U] 
            = (0xffffffc0U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 6U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[7U] 
            = (0xffffff80U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 7U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[8U] 
            = (0xffffff00U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 8U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[9U] 
            = (0xfffffe00U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 9U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xaU] 
            = (0xfffffc00U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0xaU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xbU] 
            = (0xfffff800U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0xbU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xcU] 
            = (0xfffff000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0xcU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xdU] 
            = (0xffffe000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0xdU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xeU] 
            = (0xffffc000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0xeU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0xfU] 
            = (0xffff8000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0xfU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x10U] 
            = (0xffff0000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x10U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x11U] 
            = (0xfffe0000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x11U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x12U] 
            = (0xfffc0000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x12U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x13U] 
            = (0xfff80000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x13U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x14U] 
            = (0xfff00000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x14U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x15U] 
            = (0xffe00000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x15U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x16U] 
            = (0xffc00000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x16U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x17U] 
            = (0xff800000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x17U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x18U] 
            = (0xff000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x18U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x19U] 
            = (0xfe000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x19U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1aU] 
            = (0xfc000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x1aU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1bU] 
            = (0xf8000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x1bU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1cU] 
            = (0xf0000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x1cU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1dU] 
            = (0xe0000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x1dU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1eU] 
            = (0xc0000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x1eU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0x1fU] 
            = (0x80000000U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              << 0x1fU));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[1U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0x80000000U & vlSymsp->TOP__test_top.__PVT__id_exe_op1_o) 
                   | (0x7fffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                     >> 1U))) : (0x7fffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 1U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[2U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xc0000000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x1eU)) | (0x3fffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 2U)))
                : (0x3fffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                  >> 2U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[3U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xe0000000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x1dU)) | (0x1fffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 3U)))
                : (0x1fffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                  >> 3U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[4U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xf0000000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x1cU)) | (0xfffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 4U)))
                : (0xfffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                 >> 4U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[5U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xf8000000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x1bU)) | (0x7ffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 5U)))
                : (0x7ffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                 >> 5U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[6U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfc000000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x1aU)) | (0x3ffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 6U)))
                : (0x3ffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                 >> 6U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[7U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfe000000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x19U)) | (0x1ffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 7U)))
                : (0x1ffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                 >> 7U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[8U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xff000000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x18U)) | (0xffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 8U)))
                : (0xffffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                >> 8U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[9U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xff800000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x17U)) | (0x7fffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 9U)))
                : (0x7fffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                >> 9U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xaU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffc00000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x16U)) | (0x3fffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xaU)))
                : (0x3fffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                >> 0xaU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xbU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffe00000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x15U)) | (0x1fffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xbU)))
                : (0x1fffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                >> 0xbU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xcU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfff00000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x14U)) | (0xfffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xcU)))
                : (0xfffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               >> 0xcU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xdU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfff80000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x13U)) | (0x7ffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xdU)))
                : (0x7ffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               >> 0xdU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xeU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffc0000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x12U)) | (0x3ffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xeU)))
                : (0x3ffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               >> 0xeU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0xfU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffe0000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x11U)) | (0x1ffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xfU)))
                : (0x1ffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               >> 0xfU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x10U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffff0000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x10U)))
                : (0xffffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              >> 0x10U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x11U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffff8000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0xfU)) | (0x7fffU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   >> 0x11U)))
                : (0x7fffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              >> 0x11U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x12U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffffc000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0xeU)) | (0x3fffU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   >> 0x12U)))
                : (0x3fffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              >> 0x12U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x13U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffffe000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0xdU)) | (0x1fffU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   >> 0x13U)))
                : (0x1fffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              >> 0x13U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x14U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffff000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0xcU)) | (0xfffU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   >> 0x14U)))
                : (0xfffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                             >> 0x14U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x15U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffff800U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0xbU)) | (0x7ffU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   >> 0x15U)))
                : (0x7ffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                             >> 0x15U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x16U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffffc00U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 0xaU)) | (0x3ffU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   >> 0x16U)))
                : (0x3ffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                             >> 0x16U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x17U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffffe00U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 9U)) | (0x1ffU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 >> 0x17U)))
                : (0x1ffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                             >> 0x17U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x18U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffffff00U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 8U)) | (0xffU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 >> 0x18U)))
                : (0xffU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            >> 0x18U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x19U] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffffff80U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 7U)) | (0x7fU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 >> 0x19U)))
                : (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            >> 0x19U)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1aU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffffffc0U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 6U)) | (0x3fU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 >> 0x1aU)))
                : (0x3fU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            >> 0x1aU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1bU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xffffffe0U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 5U)) | (0x1fU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 >> 0x1bU)))
                : (0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            >> 0x1bU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1cU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffffff0U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 4U)) | (0xfU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 >> 0x1cU)))
                : (0xfU & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           >> 0x1cU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1dU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffffff8U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 3U)) | (7U & 
                                              (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                               >> 0x1dU)))
                : (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                         >> 0x1dU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1eU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffffffcU & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 2U)) | (3U & 
                                              (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                               >> 0x1eU)))
                : (3U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                         >> 0x1eU)));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0x1fU] 
            = ((0x40000000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0xfffffffeU & ((- (IData)((1U & 
                                               (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                >> 0x1fU)))) 
                                   << 1U)) | (1U & 
                                              (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                               >> 0x1fU)))
                : (1U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                         >> 0x1fU)));
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o;
    }
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((IData)(vlTOPp->rst_i) 
                                                  | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o);
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
    vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x13U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                         ? (0x1fU & 
                                            (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xfU))
                                         : 0U));
    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & (0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)));
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift_result 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x4000U 
                                           & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                           ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp
                                          [(0x1fU & 
                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x14U))]
                                           : vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp
                                          [(0x1fU & 
                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x14U))]));
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
                            ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift_result
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
                        vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub 
                            = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                            = ((0x80000000U & vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub)
                                ? 1U : 0U);
                    }
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                        = ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift_result
                            : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                }
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
        }
    }
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
    __PVT__id0__DOT__i_op2_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__shift_result = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__compare_sub = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__exe0__DOT__shift0__DOT__shift_l_temp[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__exe0__DOT__shift0__DOT__shift_r_temp[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vdly__pc_wire = VL_RAND_RESET_I(32);
}
