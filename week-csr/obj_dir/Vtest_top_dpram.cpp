// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_dpram.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtest_top_dpram::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram::writeByte\n"); );
    // Variables
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__dpram0.__Vlvbound9 = val;
    if (VL_LIKELY((0x2fffffU >= (0x3fffffU & byte_addr)))) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[(0x3fffffU 
                                                   & byte_addr)] 
            = vlSymsp->TOP__test_top__dpram0.__Vlvbound9;
    }
}

VL_INLINE_OPT void Vtest_top_dpram::_settle__TOP__test_top__dpram0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram::_settle__TOP__test_top__dpram0__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__dpram0.__PVT__data_o = 
        ((IData)(vlTOPp->rst_i) ? 0ULL : (vlSymsp->TOP__test_top.__PVT__device_req
                                          [0U] ? (((QData)((IData)(
                                                                   ((((0x2fffffU 
                                                                       >= 
                                                                       (0x3fffffU 
                                                                        & ((IData)(4U) 
                                                                           + 
                                                                           (0x3ffffcU 
                                                                            & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                            [0U]))))
                                                                       ? 
                                                                      vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                      [
                                                                      (0x3fffffU 
                                                                       & ((IData)(4U) 
                                                                          + 
                                                                          (0x3ffffcU 
                                                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                           [0U])))]
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((0x2fffffU 
                                                                          >= 
                                                                          (0x3fffffU 
                                                                           & ((IData)(5U) 
                                                                              + 
                                                                              (0x3ffffcU 
                                                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                               [0U]))))
                                                                          ? 
                                                                         vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                         [
                                                                         (0x3fffffU 
                                                                          & ((IData)(5U) 
                                                                             + 
                                                                             (0x3ffffcU 
                                                                              & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                              [0U])))]
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((0x2fffffU 
                                                                             >= 
                                                                             (0x3fffffU 
                                                                              & ((IData)(6U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U]))))
                                                                             ? 
                                                                            vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                            [
                                                                            (0x3fffffU 
                                                                             & ((IData)(6U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U])))]
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((0x2fffffU 
                                                                              >= 
                                                                              (0x3fffffU 
                                                                               & ((IData)(7U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U]))))
                                                                              ? 
                                                                             vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                             [
                                                                             (0x3fffffU 
                                                                              & ((IData)(7U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U])))]
                                                                              : 0U)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((0x2fffffU 
                                                                        >= 
                                                                        (0x3ffffcU 
                                                                         & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                         [0U]))
                                                                        ? 
                                                                       vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                       [
                                                                       (0x3ffffcU 
                                                                        & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                        [0U])]
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((0x2fffffU 
                                                                           >= 
                                                                           (0x3fffffU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U]))))
                                                                           ? 
                                                                          vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                          [
                                                                          (0x3fffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (0x3ffffcU 
                                                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                               [0U])))]
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((0x2fffffU 
                                                                              >= 
                                                                              (0x3fffffU 
                                                                               & ((IData)(2U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U]))))
                                                                              ? 
                                                                             vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                             [
                                                                             (0x3fffffU 
                                                                              & ((IData)(2U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U])))]
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((0x2fffffU 
                                                                               >= 
                                                                               (0x3fffffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U]))))
                                                                               ? 
                                                                              vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                                              [
                                                                              (0x3fffffU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                (0x3ffffcU 
                                                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                                                [0U])))]
                                                                               : 0U)))))))
                                           : 0ULL));
}

VL_INLINE_OPT void Vtest_top_dpram::_sequent__TOP__test_top__dpram0__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram::_sequent__TOP__test_top__dpram0__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*0:0*/ __Vdlyvset__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*0:0*/ __Vdlyvset__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    CData/*0:0*/ __Vdlyvset__mem__v3;
    CData/*7:0*/ __Vdlyvval__mem__v4;
    CData/*0:0*/ __Vdlyvset__mem__v4;
    CData/*7:0*/ __Vdlyvval__mem__v5;
    CData/*0:0*/ __Vdlyvset__mem__v5;
    CData/*7:0*/ __Vdlyvval__mem__v6;
    CData/*0:0*/ __Vdlyvset__mem__v6;
    CData/*7:0*/ __Vdlyvval__mem__v7;
    CData/*0:0*/ __Vdlyvset__mem__v7;
    IData/*21:0*/ __Vdlyvdim0__mem__v0;
    IData/*21:0*/ __Vdlyvdim0__mem__v1;
    IData/*21:0*/ __Vdlyvdim0__mem__v2;
    IData/*21:0*/ __Vdlyvdim0__mem__v3;
    IData/*21:0*/ __Vdlyvdim0__mem__v4;
    IData/*21:0*/ __Vdlyvdim0__mem__v5;
    IData/*21:0*/ __Vdlyvdim0__mem__v6;
    IData/*21:0*/ __Vdlyvdim0__mem__v7;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    __Vdlyvset__mem__v4 = 0U;
    __Vdlyvset__mem__v5 = 0U;
    __Vdlyvset__mem__v6 = 0U;
    __Vdlyvset__mem__v7 = 0U;
    if (((vlSymsp->TOP__test_top.__PVT__device_we[0U] 
          & (~ (IData)(vlTOPp->rst_i))) & vlSymsp->TOP__test_top.__PVT__device_req
         [0U])) {
        vlSymsp->TOP__test_top__dpram0.__Vlvbound1 
            = (0xffU & (IData)((vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U] >> 0x38U)));
        if ((0x2fffffU >= (0x3fffffU & ((IData)(4U) 
                                        + (0x3ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))))) {
            __Vdlyvval__mem__v0 = vlSymsp->TOP__test_top__dpram0.__Vlvbound1;
            __Vdlyvset__mem__v0 = 1U;
            __Vdlyvdim0__mem__v0 = (0x3fffffU & ((IData)(4U) 
                                                 + 
                                                 (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])));
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound2 
            = (0xffU & (IData)((vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U] >> 0x30U)));
        if ((0x2fffffU >= (0x3fffffU & ((IData)(5U) 
                                        + (0x3ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))))) {
            __Vdlyvval__mem__v1 = vlSymsp->TOP__test_top__dpram0.__Vlvbound2;
            __Vdlyvset__mem__v1 = 1U;
            __Vdlyvdim0__mem__v1 = (0x3fffffU & ((IData)(5U) 
                                                 + 
                                                 (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])));
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound3 
            = (0xffU & (IData)((vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U] >> 0x28U)));
        if ((0x2fffffU >= (0x3fffffU & ((IData)(6U) 
                                        + (0x3ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))))) {
            __Vdlyvval__mem__v2 = vlSymsp->TOP__test_top__dpram0.__Vlvbound3;
            __Vdlyvset__mem__v2 = 1U;
            __Vdlyvdim0__mem__v2 = (0x3fffffU & ((IData)(6U) 
                                                 + 
                                                 (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])));
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound4 
            = (0xffU & (IData)((vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U] >> 0x20U)));
        if ((0x2fffffU >= (0x3fffffU & ((IData)(7U) 
                                        + (0x3ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))))) {
            __Vdlyvval__mem__v3 = vlSymsp->TOP__test_top__dpram0.__Vlvbound4;
            __Vdlyvset__mem__v3 = 1U;
            __Vdlyvdim0__mem__v3 = (0x3fffffU & ((IData)(7U) 
                                                 + 
                                                 (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])));
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound5 
            = (0xffU & (IData)((vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U] >> 0x18U)));
        if ((0x2fffffU >= (0x3ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                           [0U]))) {
            __Vdlyvval__mem__v4 = vlSymsp->TOP__test_top__dpram0.__Vlvbound5;
            __Vdlyvset__mem__v4 = 1U;
            __Vdlyvdim0__mem__v4 = (0x3ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                    [0U]);
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound6 
            = (0xffU & (IData)((vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U] >> 0x10U)));
        if ((0x2fffffU >= (0x3fffffU & ((IData)(1U) 
                                        + (0x3ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))))) {
            __Vdlyvval__mem__v5 = vlSymsp->TOP__test_top__dpram0.__Vlvbound6;
            __Vdlyvset__mem__v5 = 1U;
            __Vdlyvdim0__mem__v5 = (0x3fffffU & ((IData)(1U) 
                                                 + 
                                                 (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])));
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound7 
            = (0xffU & (IData)((vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U] >> 8U)));
        if ((0x2fffffU >= (0x3fffffU & ((IData)(2U) 
                                        + (0x3ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))))) {
            __Vdlyvval__mem__v6 = vlSymsp->TOP__test_top__dpram0.__Vlvbound7;
            __Vdlyvset__mem__v6 = 1U;
            __Vdlyvdim0__mem__v6 = (0x3fffffU & ((IData)(2U) 
                                                 + 
                                                 (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])));
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound8 
            = (0xffU & (IData)(vlSymsp->TOP__test_top.__PVT__device_wdata
                               [0U]));
        if ((0x2fffffU >= (0x3fffffU & ((IData)(3U) 
                                        + (0x3ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))))) {
            __Vdlyvval__mem__v7 = vlSymsp->TOP__test_top__dpram0.__Vlvbound8;
            __Vdlyvset__mem__v7 = 1U;
            __Vdlyvdim0__mem__v7 = (0x3fffffU & ((IData)(3U) 
                                                 + 
                                                 (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])));
        }
    }
    if (__Vdlyvset__mem__v0) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v0] 
            = __Vdlyvval__mem__v0;
    }
    if (__Vdlyvset__mem__v1) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v1] 
            = __Vdlyvval__mem__v1;
    }
    if (__Vdlyvset__mem__v2) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v2] 
            = __Vdlyvval__mem__v2;
    }
    if (__Vdlyvset__mem__v3) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v3] 
            = __Vdlyvval__mem__v3;
    }
    if (__Vdlyvset__mem__v4) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v4] 
            = __Vdlyvval__mem__v4;
    }
    if (__Vdlyvset__mem__v5) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v5] 
            = __Vdlyvval__mem__v5;
    }
    if (__Vdlyvset__mem__v6) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v6] 
            = __Vdlyvval__mem__v6;
    }
    if (__Vdlyvset__mem__v7) {
        vlSymsp->TOP__test_top__dpram0.__PVT__mem[__Vdlyvdim0__mem__v7] 
            = __Vdlyvval__mem__v7;
    }
}
