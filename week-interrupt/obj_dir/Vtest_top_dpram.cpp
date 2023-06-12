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
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__dpram0.__PVT__data_o = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [0U]) {
            vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                = (((QData)((IData)(((((0x2fffffU >= 
                                        (0x3fffffU 
                                         & ((IData)(4U) 
                                            + (0x3ffffcU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))))
                                        ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                       [(0x3fffffU 
                                         & ((IData)(4U) 
                                            + (0x3ffffcU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U])))]
                                        : 0U) << 0x18U) 
                                     | ((((0x2fffffU 
                                           >= (0x3fffffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  (0x3ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U]))))
                                           ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                          [(0x3fffffU 
                                            & ((IData)(5U) 
                                               + (0x3ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])))]
                                           : 0U) << 0x10U) 
                                        | ((((0x2fffffU 
                                              >= (0x3fffffU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     (0x3ffffcU 
                                                      & vlSymsp->TOP__test_top.__PVT__device_addr
                                                      [0U]))))
                                              ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                             [(0x3fffffU 
                                               & ((IData)(6U) 
                                                  + 
                                                  (0x3ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U])))]
                                              : 0U) 
                                            << 8U) 
                                           | ((0x2fffffU 
                                               >= (0x3fffffU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__device_addr
                                                       [0U]))))
                                               ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                              [(0x3fffffU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (0x3ffffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__device_addr
                                                    [0U])))]
                                               : 0U)))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x2fffffU 
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
                                                           : 0U)))))));
            vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                = ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                    ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                        ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                            ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                     ? ((0U == (3U 
                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                [0U]))
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))
                                         : ((1U == 
                                             (3U & 
                                              vlSymsp->TOP__test_top.__PVT__device_addr
                                              [0U]))
                                             ? (0xffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                           >> 8U)))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))
                                                 ? 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                            >> 0x10U)))
                                                 : 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                            >> 0x18U))))))
                                     : ((0U == (3U 
                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                [0U]))
                                         ? (0xffU & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))
                                         : ((1U == 
                                             (3U & 
                                              vlSymsp->TOP__test_top.__PVT__device_addr
                                              [0U]))
                                             ? (0xffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                           >> 8U)))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))
                                                 ? 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                            >> 0x10U)))
                                                 : 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                            >> 0x18U))))))))
                        : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                            ? ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U])) ? (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp)
                                    : ((1U == (3U & 
                                               vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))
                                        ? (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                   >> 8U))
                                        : ((2U == (3U 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U]))
                                            ? (IData)(
                                                      (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                       >> 0x10U))
                                            : (IData)(
                                                      (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                       >> 0x18U)))))
                                : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U])) ? 
                                   ((0xffff0000U & 
                                     ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                             >> 0xfU))))) 
                                      << 0x10U)) | 
                                    (0xffffU & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp)))
                                    : ((1U == (3U & 
                                               vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))
                                        ? ((0xffff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                      >> 0x17U))))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                         >> 8U))))
                                        : ((2U == (3U 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U]))
                                            ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                          >> 0x1fU))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                             >> 0x10U))))
                                            : ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                          >> 0x27U))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                             >> 0x18U))))))))
                            : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U])) ? 
                                   ((0xffffff00U & 
                                     ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                             >> 7U))))) 
                                      << 8U)) | (0xffU 
                                                 & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp)))
                                    : ((1U == (3U & 
                                               vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))
                                        ? ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                      >> 0xfU))))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                         >> 8U))))
                                        : ((2U == (3U 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U]))
                                            ? ((0xffffff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                          >> 0x17U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                             >> 0x10U))))
                                            : ((0xffffff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                          >> 0x1fU))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                             >> 0x18U)))))))
                                : 0U))) : 0U);
        } else {
            vlSymsp->TOP__test_top__dpram0.__PVT__data_o = 0U;
        }
    }
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
        vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
            = ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                           [0U])) ? ((0xffffffffffffff00ULL 
                                      & vlSymsp->TOP__test_top__dpram0.__PVT__data_temp) 
                                     | (QData)((IData)(
                                                       (0xffU 
                                                        & vlSymsp->TOP__test_top.__PVT__device_wdata
                                                        [0U]))))
                    : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                               [0U])) ? ((0xffffffffffff0000ULL 
                                          & vlSymsp->TOP__test_top__dpram0.__PVT__data_temp) 
                                         | (QData)((IData)(
                                                           ((0xff00U 
                                                             & (vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                [0U] 
                                                                << 8U)) 
                                                            | (0xffU 
                                                               & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))))))
                        : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                   [0U])) ? ((0xffffffffff000000ULL 
                                              & vlSymsp->TOP__test_top__dpram0.__PVT__data_temp) 
                                             | (QData)((IData)(
                                                               ((0xff0000U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                    [0U] 
                                                                    << 0x10U)) 
                                                                | (0xffffU 
                                                                   & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))))))
                            : (((QData)((IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                 >> 0x20U))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xff000000U 
                                                              & (vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                 [0U] 
                                                                 << 0x18U)) 
                                                             | (0xffffffU 
                                                                & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp)))))))))
                : ((2U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                    ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                               [0U])) ? ((0xffffffffffff0000ULL 
                                          & vlSymsp->TOP__test_top__dpram0.__PVT__data_temp) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & vlSymsp->TOP__test_top.__PVT__device_wdata
                                                            [0U]))))
                        : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                   [0U])) ? ((0xffffffffff000000ULL 
                                              & vlSymsp->TOP__test_top__dpram0.__PVT__data_temp) 
                                             | (QData)((IData)(
                                                               ((0xffff00U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                    [0U] 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))))))
                            : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                       [0U])) ? (((QData)((IData)(
                                                                  (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                   >> 0x20U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & (vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                        [0U] 
                                                                        << 0x10U)) 
                                                                    | (0xffffU 
                                                                       & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))))))
                                : (((QData)((IData)(
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                >> 0x28U))))) 
                                    << 0x28U) | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                   [0U]))) 
                                                  << 0x18U) 
                                                 | (QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp)))))))))
                    : ((3U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                        ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                   [0U])) ? (((QData)((IData)(
                                                              (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                               >> 0x20U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__device_wdata
                                                               [0U])))
                            : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                       [0U])) ? (((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                              >> 0x28U))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                     [0U])) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))))))
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U])) ? 
                                   (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                 >> 0x30U))))) 
                                     << 0x30U) | (((QData)((IData)(
                                                                   vlSymsp->TOP__test_top.__PVT__device_wdata
                                                                   [0U])) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp))))))
                                    : (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__test_top__dpram0.__PVT__data_temp 
                                                                    >> 0x38U))))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         vlSymsp->TOP__test_top.__PVT__device_wdata
                                                         [0U])) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp)))))))))
                        : vlSymsp->TOP__test_top__dpram0.__PVT__data_temp)));
        vlSymsp->TOP__test_top__dpram0.__Vlvbound1 
            = (0xffU & (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
                                >> 0x38U)));
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
            = (0xffU & (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
                                >> 0x30U)));
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
            = (0xffU & (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
                                >> 0x28U)));
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
            = (0xffU & (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
                                >> 0x20U)));
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
            = (0xffU & (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
                                >> 0x18U)));
        if ((0x2fffffU >= (0x3ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                           [0U]))) {
            __Vdlyvval__mem__v4 = vlSymsp->TOP__test_top__dpram0.__Vlvbound5;
            __Vdlyvset__mem__v4 = 1U;
            __Vdlyvdim0__mem__v4 = (0x3ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                    [0U]);
        }
        vlSymsp->TOP__test_top__dpram0.__Vlvbound6 
            = (0xffU & (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
                                >> 0x10U)));
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
            = (0xffU & (IData)((vlSymsp->TOP__test_top__dpram0.__PVT__data_write 
                                >> 8U)));
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
            = (0xffU & (IData)(vlSymsp->TOP__test_top__dpram0.__PVT__data_write));
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
