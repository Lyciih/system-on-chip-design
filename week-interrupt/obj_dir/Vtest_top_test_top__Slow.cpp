// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_test_top) {
    VL_CELL(core_top0, Vtest_top_core_top);
    VL_CELL(dpram0, Vtest_top_dpram);
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

void Vtest_top_test_top::_final_TOP__test_top(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_final_TOP__test_top\n"); );
    // Variables
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_FCLOSE_I(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd); vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd = 0;
}

void Vtest_top_test_top::_initial__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_initial__TOP__test_top__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count = 0U;
    vlSymsp->TOP__test_top.__Vcellout__timer0__second_count = 0U;
    vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish = 0U;
    vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd = VL_FOPEN_NN(
                                                                      std::string("./log/console.log")
                                                                      , 
                                                                      std::string("w"));
}

void Vtest_top_test_top::_settle__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0U] = 0U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0U] = 0xfff00000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1U] = 0x200000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1U] = 0xfff00000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2U] = 0x2000000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2U] = 0xff000000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[3U] = 0x400000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[3U] = 0xfff00000U;
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry 
        = (0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
           [0U]);
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
    vlSymsp->TOP__test_top.__PVT__device_rdata[3U] 
        = vlSymsp->TOP__test_top.__Vcellout__timer0__second_count;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[3U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [3U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[3U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [3U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[3U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [3U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[3U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [3U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_req[0U];
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
    vlSymsp->TOP__test_top.__PVT__host_gnt[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o
        [0U];
}

void Vtest_top_test_top::_settle__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o;
    vlSymsp->TOP__test_top.__PVT__host_wdata[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o;
    vlSymsp->TOP__test_top.__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_we[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_wdata[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_addr[0U];
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

void Vtest_top_test_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    halt_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__halt_from_console = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vcellinp__u_bus__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vcellinp__u_bus__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vcellinp__u_bus__device_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vcellout__u_bus__device_wdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vcellout__u_bus__device_we_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vcellout__u_bus__device_addr_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vcellout__u_bus__device_req_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__host_rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_we_i[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_addr_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__host_gnt_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_req_i[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __Vcellout__timer0__second_count = VL_RAND_RESET_I(32);
    __Vcellout__clint0__data_o = VL_RAND_RESET_I(32);
    __PVT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    __PVT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(2);
    u_bus__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    u_bus__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    __PVT__console0__DOT__sim_finish = VL_RAND_RESET_I(3);
    __PVT__console0__DOT__log_fd = 0;
    __PVT__timer0__DOT__clk_count = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__clint0__DOT__mtime_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__clint0__DOT__mtimecmp_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__clint0__DOT__msip_mem = VL_RAND_RESET_I(32);
    __PVT__clint0__DOT__carry = VL_RAND_RESET_I(1);
}
