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
            tracep->chgBit(oldp+1,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+2,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
            tracep->chgBit(oldp+4,(vlSymsp->TOP__test_top.__PVT__ce_wire));
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
            tracep->chgIData(oldp+8,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                       ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                                ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                                    ? 
                                                   vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                   [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                                    : 0U)))),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
            tracep->chgCData(oldp+14,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgCData(oldp+17,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+18,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgCData(oldp+20,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+21,(((6U == (7U & 
                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xcU)))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : 0U)),5);
            tracep->chgBit(oldp+22,((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xcU)))));
            tracep->chgIData(oldp+23,(((6U == (7U & 
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
            tracep->chgCData(oldp+24,(((6U == (7U & 
                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xcU)))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U)),5);
            tracep->chgCData(oldp+25,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+26,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+27,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+28,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+29,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+30,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x19U))),7);
            tracep->chgIData(oldp+31,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+32,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+33,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+34,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+35,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+36,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+38,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+39,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+40,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+41,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+42,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+44,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+45,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+46,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+47,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+48,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+49,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+50,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+51,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+55,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+56,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+57,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+61,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+63,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+64,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
            tracep->chgBit(oldp+65,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
            tracep->chgCData(oldp+66,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+67,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+68,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
            tracep->chgCData(oldp+69,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+70,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+71,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        }
        tracep->chgBit(oldp+72,(vlTOPp->rst_i));
        tracep->chgBit(oldp+73,(vlTOPp->clk_i));
        tracep->chgIData(oldp+74,(((IData)(vlTOPp->rst_i)
                                    ? 0x13U : ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                : 0x13U))),32);
        tracep->chgIData(oldp+75,(((IData)(vlTOPp->rst_i)
                                    ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                              & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                             & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                             ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                             : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
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
                                                    (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                                                        == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                       & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                                                      ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                      : 
                                                     ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                                                       ? 
                                                      vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                      [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                                       : 0U)))
                                                    : 0U)
                                                   : 0U)))))),32);
        tracep->chgIData(oldp+76,(((IData)(vlTOPp->rst_i)
                                    ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                              & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                             & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                             ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                             : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
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
                                                   : 0U)))))),32);
        tracep->chgBit(oldp+77,(((~ (IData)(vlTOPp->rst_i)) 
                                 & ((0x13U == (0x7fU 
                                               & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                    & (6U == (7U & 
                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xcU)))))));
        tracep->chgCData(oldp+78,(((IData)(vlTOPp->rst_i)
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
        tracep->chgIData(oldp+79,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                    ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                                               == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                              & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                             & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                                             ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                             : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                                                 ? 
                                                vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                                 : 0U)))),32);
        tracep->chgIData(oldp+80,(((IData)(vlTOPp->rst_i)
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
                                                 (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                                                     == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                   : 
                                                  ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                                                    ? 
                                                   vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                   [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                                    : 0U)))
                                                 : 0U)
                                             : 0U))),32);
        tracep->chgIData(oldp+81,(((IData)(vlTOPp->rst_i)
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
        tracep->chgIData(oldp+82,(((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0xcU)))
                                    ? ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                        ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                                                   == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                  & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                                                 ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                 : 
                                                ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                                                  ? 
                                                 vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                 [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                                  : 0U)))
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
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
