// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


void Vtest_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtest_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[0]),32);
            tracep->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[1]),32);
            tracep->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[2]),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[3]),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[4]),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[5]),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[6]),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[7]),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[8]),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[9]),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[10]),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[11]),32);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[12]),32);
            tracep->chgIData(oldp+14,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[13]),32);
            tracep->chgIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[14]),32);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[15]),32);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[16]),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[17]),32);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[18]),32);
            tracep->chgIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[19]),32);
            tracep->chgIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[20]),32);
            tracep->chgIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[21]),32);
            tracep->chgIData(oldp+23,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[22]),32);
            tracep->chgIData(oldp+24,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[23]),32);
            tracep->chgIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[24]),32);
            tracep->chgIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[25]),32);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[26]),32);
            tracep->chgIData(oldp+28,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[27]),32);
            tracep->chgIData(oldp+29,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[28]),32);
            tracep->chgIData(oldp+30,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[29]),32);
            tracep->chgIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[30]),32);
            tracep->chgIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[31]),32);
            tracep->chgIData(oldp+33,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+34,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
            tracep->chgBit(oldp+35,(vlSymsp->TOP__test_top.__PVT__ce_wire));
            tracep->chgIData(oldp+36,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+38,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
            tracep->chgIData(oldp+39,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+40,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+41,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+42,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
            tracep->chgCData(oldp+44,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+45,(((6U == (7U & 
                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xcU)))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : 0U)),5);
            tracep->chgBit(oldp+46,((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xcU)))));
            tracep->chgIData(oldp+47,(((6U == (7U & 
                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xcU)))
                                        ? ((0xfffff000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 0x1fU)))) 
                                               << 0xcU)) 
                                           | (0xfffU 
                                              & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0x14U)))
                                        : 0U)),32);
            tracep->chgCData(oldp+48,(((6U == (7U & 
                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xcU)))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U)),5);
            tracep->chgCData(oldp+49,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+50,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+51,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgIData(oldp+52,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
        }
        tracep->chgBit(oldp+53,(vlTOPp->rst_i));
        tracep->chgBit(oldp+54,(vlTOPp->clk_i));
        tracep->chgIData(oldp+55,(((IData)(vlTOPp->rst_i)
                                    ? 0x13U : ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                : 0x13U))),32);
        tracep->chgIData(oldp+56,(((IData)(vlTOPp->rst_i)
                                    ? 0U : ((IData)(vlTOPp->rst_i)
                                             ? 0U : 
                                            ((0x13U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                              ? ((6U 
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
                                              : 0U)))),32);
        tracep->chgIData(oldp+57,(((IData)(vlTOPp->rst_i)
                                    ? 0U : ((IData)(vlTOPp->rst_i)
                                             ? 0U : 
                                            ((0x13U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                              ? ((6U 
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
                                              : 0U)))),32);
        tracep->chgBit(oldp+58,(((~ (IData)(vlTOPp->rst_i)) 
                                 & ((0x13U == (0x7fU 
                                               & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                    & (6U == (7U & 
                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xcU)))))));
        tracep->chgCData(oldp+59,(((IData)(vlTOPp->rst_i)
                                    ? 0U : ((0x13U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                             ? ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xcU)))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                    >> 7U))
                                                 : 0U)
                                             : 0U))),5);
        tracep->chgCData(oldp+60,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        tracep->chgIData(oldp+61,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                    ? 0U : (((~ (IData)(vlTOPp->rst_i)) 
                                             & ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                                & (6U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0xcU)))))
                                             ? vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs
                                            [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                             : 0U))),32);
        tracep->chgIData(oldp+62,(((IData)(vlTOPp->rst_i)
                                    ? 0U : ((0x13U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                             ? ((6U 
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
                                             : 0U))),32);
        tracep->chgIData(oldp+63,(((IData)(vlTOPp->rst_i)
                                    ? 0U : ((0x13U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                             ? ((6U 
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
                                             : 0U))),32);
        tracep->chgIData(oldp+64,(((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0xcU)))
                                    ? ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                        ? 0U : (((~ (IData)(vlTOPp->rst_i)) 
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
                                    : 0U)),32);
    }
}

void Vtest_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
