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
    if (((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] = 0ULL;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound10 
            = ((2U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp]
                : 0ULL);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound10;
    }
    vlSymsp->TOP__test_top.__PVT__host_rdata[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o
        [0U];
}

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__host_wdata[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_wdata[0U];
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0ULL);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0U] = 0ULL;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0ULL);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1U] = 0ULL;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0ULL);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2U] = 0ULL;
    }
    vlSymsp->TOP__test_top.__PVT__device_wdata[0U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[1U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[2U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [2U];
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__6(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__6\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__console0__DOT__sim_finish;
    // Body
    __Vdly__console0__DOT__sim_finish = vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish;
    vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count 
        = (1ULL + vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count);
    if ((0x2710ULL == vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count)) {
        vlSymsp->TOP__test_top.__Vcellout__timer0__second_count 
            = (1ULL + vlSymsp->TOP__test_top.__Vcellout__timer0__second_count);
        vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count = 0ULL;
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
                           8,(0xffU & (IData)(vlSymsp->TOP__test_top.__PVT__device_wdata
                                              [1U])));
                VL_WRITEF("%c",8,(0xffU & (IData)(vlSymsp->TOP__test_top.__PVT__device_wdata
                                                  [1U])));
                if (vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd) { VL_FFLUSH_I(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd); }
            } else {
                if ((8U == (0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [1U]))) {
                    if (((IData)(vlSymsp->TOP__test_top.__PVT__device_wdata
                                 [1U]) & (0U == (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish)))) {
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
    vlSymsp->TOP__test_top.__PVT__device_rdata[2U] 
        = vlSymsp->TOP__test_top.__Vcellout__timer0__second_count;
    vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish 
        = __Vdly__console0__DOT__sim_finish;
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__7(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__7\n"); );
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
    vlSymsp->TOP__test_top.__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_req[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_we[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_addr[0U];
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
        [0U]) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound12 
        = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
           & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound12;
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
    vlSymsp->TOP__test_top.__PVT__host_gnt[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o
        [0U];
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2U] = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req));
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2U] = 0U;
    }
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2U] = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__device_we[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_we[1U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_we[2U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_addr[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_addr[1U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_addr[2U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_req[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_req[1U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_req[2U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [2U];
}
