// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtest_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtest_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtest_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtest_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+54,"rst_i", false,-1);
        tracep->declBit(c+55,"clk_i", false,-1);
        tracep->declBit(c+54,"test_top rst_i", false,-1);
        tracep->declBit(c+55,"test_top clk_i", false,-1);
        tracep->declBus(c+35,"test_top pc_wire", false,-1, 31,0);
        tracep->declBit(c+36,"test_top ce_wire", false,-1);
        tracep->declBus(c+35,"test_top if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+37,"test_top if_inst_o", false,-1, 31,0);
        tracep->declBus(c+38,"test_top if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+39,"test_top if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+56,"test_top id_inst_o", false,-1, 31,0);
        tracep->declBus(c+57,"test_top id_op1_o", false,-1, 31,0);
        tracep->declBus(c+58,"test_top id_op2_o", false,-1, 31,0);
        tracep->declBit(c+59,"test_top id_reg_we_o", false,-1);
        tracep->declBus(c+60,"test_top id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+61,"test_top id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+1,"test_top id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+59,"test_top id_reg1_re_o", false,-1);
        tracep->declBit(c+66,"test_top id_reg2_re_o", false,-1);
        tracep->declBus(c+62,"test_top reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+67,"test_top reg2_data_o", false,-1, 31,0);
        tracep->declBus(c+40,"test_top id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+41,"test_top id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+42,"test_top id_exe_reg_we_o", false,-1);
        tracep->declBus(c+43,"test_top id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+44,"test_top id_exe_inst_o", false,-1, 31,0);
        tracep->declBit(c+55,"test_top pc_reg0 clk_i", false,-1);
        tracep->declBit(c+54,"test_top pc_reg0 rst_i", false,-1);
        tracep->declBus(c+35,"test_top pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+36,"test_top pc_reg0 ce_o", false,-1);
        tracep->declBit(c+55,"test_top if_id0 clk_i", false,-1);
        tracep->declBit(c+54,"test_top if_id0 rst_i", false,-1);
        tracep->declBus(c+35,"test_top if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+37,"test_top if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+38,"test_top if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+39,"test_top if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+54,"test_top id0 rst_i", false,-1);
        tracep->declBus(c+38,"test_top id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+39,"test_top id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+62,"test_top id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+67,"test_top id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+61,"test_top id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+1,"test_top id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+59,"test_top id0 reg1_re_o", false,-1);
        tracep->declBit(c+66,"test_top id0 reg2_re_o", false,-1);
        tracep->declBus(c+56,"test_top id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+57,"test_top id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+58,"test_top id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+59,"test_top id0 reg_we_o", false,-1);
        tracep->declBus(c+60,"test_top id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+63,"test_top id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+64,"test_top id0 op2_o_final", false,-1, 31,0);
        tracep->declBus(c+45,"test_top id0 opcode", false,-1, 6,0);
        tracep->declBus(c+46,"test_top id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+68,"test_top id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+47,"test_top id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+66,"test_top id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+65,"test_top id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+48,"test_top id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+47,"test_top id0 i_reg_we_o", false,-1);
        tracep->declBus(c+49,"test_top id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+39,"test_top id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+62,"test_top id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+67,"test_top id0 inst_type_i reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"test_top id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+68,"test_top id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+47,"test_top id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+66,"test_top id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+65,"test_top id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+48,"test_top id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+47,"test_top id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+49,"test_top id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+50,"test_top id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+51,"test_top id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+52,"test_top id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBit(c+55,"test_top regfile0 clk_i", false,-1);
        tracep->declBit(c+54,"test_top regfile0 rst_i", false,-1);
        tracep->declBit(c+59,"test_top regfile0 re1_i", false,-1);
        tracep->declBus(c+61,"test_top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+66,"test_top regfile0 re2_i", false,-1);
        tracep->declBus(c+1,"test_top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+62,"test_top regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+67,"test_top regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+2+i*1,"test_top regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+34,"test_top regfile0 i", false,-1, 31,0);
        tracep->declBit(c+54,"test_top id_exe0 rst_i", false,-1);
        tracep->declBit(c+55,"test_top id_exe0 clk_i", false,-1);
        tracep->declBus(c+57,"test_top id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+58,"test_top id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+59,"test_top id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+60,"test_top id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+56,"test_top id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+40,"test_top id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+41,"test_top id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+42,"test_top id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+43,"test_top id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+44,"test_top id_exe0 inst_o", false,-1, 31,0);
        tracep->declBit(c+55,"test_top rom0 clk_i", false,-1);
        tracep->declBit(c+36,"test_top rom0 ce_i", false,-1);
        tracep->declBus(c+35,"test_top rom0 addr_i", false,-1, 31,0);
        tracep->declBus(c+37,"test_top rom0 inst_o", false,-1, 31,0);
        tracep->declBus(c+53,"test_top rom0 addr4", false,-1, 20,0);
    }
}

void Vtest_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtest_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtest_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[0]),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[1]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[2]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[3]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[4]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[5]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[6]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[7]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[8]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[9]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[10]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[11]),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[12]),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[13]),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[14]),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[15]),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[16]),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[17]),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[18]),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[19]),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[20]),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[21]),32);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[22]),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[23]),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[24]),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[25]),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[26]),32);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[27]),32);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[28]),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[29]),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[30]),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__regs[31]),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__test_top.__PVT__regfile0__DOT__i),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        tracep->fullBit(oldp+36,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        tracep->fullIData(oldp+37,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+42,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+43,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        tracep->fullCData(oldp+45,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+46,(((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xcU)))
                                     ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->fullBit(oldp+47,((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xcU)))));
        tracep->fullIData(oldp+48,(((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xcU)))
                                     ? ((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U)))
                                     : 0U)),32);
        tracep->fullCData(oldp+49,(((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xcU)))
                                     ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->fullCData(oldp+50,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->fullCData(oldp+51,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+52,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->fullIData(oldp+53,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
        tracep->fullBit(oldp+54,(vlTOPp->rst_i));
        tracep->fullBit(oldp+55,(vlTOPp->clk_i));
        tracep->fullIData(oldp+56,(((IData)(vlTOPp->rst_i)
                                     ? 0x13U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                 ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                 : 0x13U))),32);
        tracep->fullIData(oldp+57,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+58,(((IData)(vlTOPp->rst_i)
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
        tracep->fullBit(oldp+59,(((~ (IData)(vlTOPp->rst_i)) 
                                  & ((0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                     & (6U == (7U & 
                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xcU)))))));
        tracep->fullCData(oldp+60,(((IData)(vlTOPp->rst_i)
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
        tracep->fullCData(oldp+61,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        tracep->fullIData(oldp+62,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
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
        tracep->fullIData(oldp+63,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+64,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+65,(((6U == (7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
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
        tracep->fullBit(oldp+66,(0U));
        tracep->fullIData(oldp+67,(0U),32);
        tracep->fullCData(oldp+68,(0U),5);
    }
}
