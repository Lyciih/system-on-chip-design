// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__device_rdata[0U] 
        = vlSymsp->TOP__test_top__dpram0.__PVT__data_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[3U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [3U];
    if (((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i
            [((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))];
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    }
    vlSymsp->TOP__test_top.__PVT__host_rdata[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o
        [0U];
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__console0__DOT__sim_finish;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v3;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v3;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    // Body
    __Vdlyvset__clint0__DOT__mtime_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtime_mem__v2 = 0U;
    __Vdly__console0__DOT__sim_finish = vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 0U;
    vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count 
        = ((IData)(1U) + vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count);
    if ((0x2710U == vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count)) {
        vlSymsp->TOP__test_top.__Vcellout__timer0__second_count 
            = ((IData)(1U) + vlSymsp->TOP__test_top.__Vcellout__timer0__second_count);
        vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count = 0U;
    }
    if (vlTOPp->rst_i) {
        __Vdlyvset__clint0__DOT__mtime_mem__v0 = 1U;
    } else {
        if ((1U & (~ vlSymsp->TOP__test_top.__PVT__device_we
                   [2U]))) {
            __Vdlyvval__clint0__DOT__mtime_mem__v2 
                = ((IData)(1U) + vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                   [0U]);
            __Vdlyvset__clint0__DOT__mtime_mem__v2 = 1U;
            __Vdlyvval__clint0__DOT__mtime_mem__v3 
                = (vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                   [1U] + (IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_we
            [2U]) {
            if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                        [2U]))) {
                vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem 
                    = vlSymsp->TOP__test_top.__PVT__device_wdata
                    [2U];
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__console0__DOT__sim_finish = 0U;
    } else {
        if ((vlSymsp->TOP__test_top.__PVT__device_req
             [1U] & vlSymsp->TOP__test_top.__PVT__device_we
             [1U])) {
            if (VL_UNLIKELY((4U == (0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                    [1U])))) {
                VL_FWRITEF(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd,"%c",
                           8,(0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                              [1U]));
                VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                                  [1U]));
                if (vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd) { VL_FFLUSH_I(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd); }
            } else {
                if ((8U == (0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [1U]))) {
                    if ((vlSymsp->TOP__test_top.__PVT__device_wdata
                         [1U] & (0U == (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish)))) {
                        __Vdly__console0__DOT__sim_finish = 1U;
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish))) {
        __Vdly__console0__DOT__sim_finish = (7U & ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish)));
    }
    vlSymsp->TOP__test_top.__PVT__halt_from_console 
        = (2U <= (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish));
    if (vlTOPp->rst_i) {
        __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 1U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_we
            [2U]) {
            if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                        [2U]))) {
                if ((0x4000U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [2U]))) {
                    __Vdlyvval__clint0__DOT__mtimecmp_mem__v2 
                        = vlSymsp->TOP__test_top.__PVT__device_wdata
                        [2U];
                    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 1U;
                } else {
                    if ((0x4004U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [2U]))) {
                        __Vdlyvval__clint0__DOT__mtimecmp_mem__v3 
                            = vlSymsp->TOP__test_top.__PVT__device_wdata
                            [2U];
                        __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__device_rdata[3U] 
        = vlSymsp->TOP__test_top.__Vcellout__timer0__second_count;
    if (__Vdlyvset__clint0__DOT__mtime_mem__v0) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtime_mem__v2) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0U] 
            = __Vdlyvval__clint0__DOT__mtime_mem__v2;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1U] 
            = __Vdlyvval__clint0__DOT__mtime_mem__v3;
    }
    vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish 
        = __Vdly__console0__DOT__sim_finish;
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v0) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v2) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v3) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    }
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry 
        = (0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
           [0U]);
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__6(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__6\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__host_req[0U] = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((8U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                           >> 1U))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                           >> 1U) 
                                                          | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))
                                                         : 
                                                        ((~ 
                                                          ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                           >> 2U)) 
                                                         & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                             >> 1U) 
                                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))))));
    vlSymsp->TOP__test_top.__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o;
    vlSymsp->TOP__test_top.__PVT__host_wdata[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o;
    vlSymsp->TOP__test_top.__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_req[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_we[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_wdata[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_addr[0U];
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
        [0U]) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
        = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
           & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    }
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 2U;
    }
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [3U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [3U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 3U;
    }
    vlSymsp->TOP__test_top.__PVT__host_gnt[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o
        [0U];
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0U] 
        = ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1U] 
        = ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2U] 
        = ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[3U] 
        = ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0U] 
        = ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1U] 
        = ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2U] 
        = ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[3U] 
        = ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0U] 
        = ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1U] 
        = ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2U] 
        = ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[3U] 
        = ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req)) 
           & ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
              & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
              [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]));
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0U] 
        = ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1U] 
        = ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2U] 
        = ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[3U] 
        = ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))
            ? ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U) : 0U);
    vlSymsp->TOP__test_top.__PVT__device_we[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_we[1U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_we[2U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_we[3U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [3U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[0U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[1U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[2U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[3U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [3U];
    vlSymsp->TOP__test_top.__PVT__device_req[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_req[1U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_req[2U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_req[3U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [3U];
    vlSymsp->TOP__test_top.__PVT__device_addr[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_addr[1U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_addr[2U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_addr[3U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [3U];
    if (vlSymsp->TOP__test_top.__PVT__device_req[2U]) {
        if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                    [2U]))) {
            vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                = vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem;
        } else {
            if ((0x4000U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                             [2U]))) {
                vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                    = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                    [0U];
            } else {
                if ((0x4004U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [2U]))) {
                    vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                        = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                        [1U];
                } else {
                    if ((0xbff8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [2U]))) {
                        vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                            = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                            [0U];
                    } else {
                        if ((0xbffcU == (0xffffU & 
                                         vlSymsp->TOP__test_top.__PVT__device_addr
                                         [2U]))) {
                            vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                                = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                [1U];
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__Vcellout__clint0__data_o = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__device_rdata[2U] 
        = vlSymsp->TOP__test_top.__Vcellout__clint0__data_o;
}
