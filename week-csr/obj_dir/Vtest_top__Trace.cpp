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
            tracep->chgIData(oldp+0,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
            tracep->chgIData(oldp+14,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
            tracep->chgBit(oldp+15,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
            tracep->chgCData(oldp+16,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
            tracep->chgQData(oldp+18,(vlSymsp->TOP__test_top.__Vcellout__timer0__second_count),64);
            tracep->chgQData(oldp+20,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count),64);
            tracep->chgIData(oldp+22,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+23,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
            tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_inst_is_load_o) 
                                     & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o)) 
                                        | ((0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                           == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o))))));
            tracep->chgIData(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+26,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+27,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+28,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+29,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
            tracep->chgIData(oldp+30,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
            tracep->chgBit(oldp+31,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_inst_is_load_o));
            tracep->chgCData(oldp+32,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o),5);
            tracep->chgCData(oldp+33,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+34,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+35,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgIData(oldp+36,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
            tracep->chgBit(oldp+38,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
            tracep->chgCData(oldp+39,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
            tracep->chgCData(oldp+40,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+41,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+42,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgBit(oldp+43,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we));
            tracep->chgSData(oldp+44,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_waddr),12);
            tracep->chgIData(oldp+45,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_wdata),32);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we));
            tracep->chgSData(oldp+47,(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr),12);
            tracep->chgIData(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_wdata),32);
            tracep->chgCData(oldp+49,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+50,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+51,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+52,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+53,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgCData(oldp+55,((0x1fU & ((0x4000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)))
                                                 : 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)))))),5);
            tracep->chgCData(oldp+56,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+57,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+58,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+59,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+60,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0xeU))));
            tracep->chgBit(oldp+61,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x1eU))));
            tracep->chgIData(oldp+62,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset),32);
            tracep->chgIData(oldp+63,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                       + ((0xfff00000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x1fU)))) 
                                              << 0x14U)) 
                                          | ((0xff000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                             | ((0x800U 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x14U))))))),32);
            tracep->chgIData(oldp+64,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0xfe0U & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))),32);
            tracep->chgIData(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__load_addr_offset),32);
            tracep->chgBit(oldp+66,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x19U))));
            tracep->chgIData(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_high_result),32);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_low_result),32);
            tracep->chgBit(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_ready));
            tracep->chgCData(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_count),6);
            tracep->chgSData(oldp+71,((0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x14U))),12);
            tracep->chgWData(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__long_temp),65);
            tracep->chgIData(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs1_temp),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs2_temp),32);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs1_is_neg));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs2_is_neg));
            tracep->chgBit(oldp+79,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0xeU))));
            tracep->chgCData(oldp+80,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgQData(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
            tracep->chgQData(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
            tracep->chgIData(oldp+85,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus),32);
            tracep->chgBit(oldp+86,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+87,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie),32);
            tracep->chgBit(oldp+88,(((0x304U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
            tracep->chgBit(oldp+90,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+91,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
            tracep->chgBit(oldp+92,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+93,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
            tracep->chgBit(oldp+94,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
            tracep->chgBit(oldp+96,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+97,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__medeleg),32);
            tracep->chgBit(oldp+98,(((0x302U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+99,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mideleg),32);
            tracep->chgBit(oldp+100,(((0x303U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+101,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__pmpcfg0),32);
            tracep->chgBit(oldp+102,(((0x3a0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+103,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__pmpaddr0),32);
            tracep->chgBit(oldp+104,(((0x3b0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+105,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__stvec),32);
            tracep->chgBit(oldp+106,(((0x105U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+107,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__sscratch),32);
            tracep->chgBit(oldp+108,(((0x140U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+109,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__sepc),32);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_sepc));
            tracep->chgIData(oldp+111,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__scause),32);
            tracep->chgBit(oldp+112,(((0x142U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+113,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__satp),32);
            tracep->chgBit(oldp+114,(((0x180U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
            tracep->chgIData(oldp+115,((0x3ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),22);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+117,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+118,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+123,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+140,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+142,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+144,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+145,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+147,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
            tracep->chgCData(oldp+148,((0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+149,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
            tracep->chgBit(oldp+150,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
            tracep->chgIData(oldp+151,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
            tracep->chgBit(oldp+152,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
            tracep->chgQData(oldp+153,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),64);
            tracep->chgQData(oldp+155,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),64);
            tracep->chgBit(oldp+157,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
            tracep->chgBit(oldp+158,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
            tracep->chgIData(oldp+160,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
            tracep->chgIData(oldp+161,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
            tracep->chgIData(oldp+162,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
            tracep->chgBit(oldp+163,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
            tracep->chgBit(oldp+165,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
            tracep->chgQData(oldp+166,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),64);
            tracep->chgQData(oldp+168,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),64);
            tracep->chgQData(oldp+170,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),64);
            tracep->chgBit(oldp+172,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgIData(oldp+174,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgBit(oldp+175,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
            tracep->chgQData(oldp+176,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),64);
            tracep->chgQData(oldp+178,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),64);
            tracep->chgBit(oldp+180,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
            tracep->chgIData(oldp+183,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+184,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+185,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgBit(oldp+186,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
            tracep->chgQData(oldp+189,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),64);
            tracep->chgQData(oldp+191,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),64);
            tracep->chgQData(oldp+193,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),64);
            tracep->chgQData(oldp+195,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),64);
            tracep->chgQData(oldp+197,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),64);
            tracep->chgQData(oldp+199,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),64);
            tracep->chgBit(oldp+201,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+202,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
            tracep->chgCData(oldp+203,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
            tracep->chgBit(oldp+204,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [1U]));
            tracep->chgBit(oldp+205,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [1U]));
            tracep->chgIData(oldp+206,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [1U]),32);
            tracep->chgQData(oldp+207,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [1U]),64);
            tracep->chgCData(oldp+209,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [1U])),8);
            tracep->chgBit(oldp+210,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [2U]));
            tracep->chgBit(oldp+211,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [2U]));
            tracep->chgIData(oldp+212,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [2U]),32);
            tracep->chgQData(oldp+213,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [2U]),64);
            tracep->chgBit(oldp+215,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o));
            tracep->chgIData(oldp+216,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o),32);
            tracep->chgQData(oldp+217,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o),64);
            tracep->chgQData(oldp+219,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                       [0U]),64);
            tracep->chgCData(oldp+221,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
            tracep->chgBit(oldp+222,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o));
            tracep->chgIData(oldp+223,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o),32);
            tracep->chgIData(oldp+224,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
            tracep->chgIData(oldp+225,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_addr_o),32);
            tracep->chgBit(oldp+226,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+227,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+229,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+230,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+231,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+232,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+233,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+235,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+236,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
            tracep->chgIData(oldp+237,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
            tracep->chgIData(oldp+238,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
            tracep->chgBit(oldp+239,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
            tracep->chgCData(oldp+240,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
            tracep->chgBit(oldp+241,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_stallreq_o));
            tracep->chgSData(oldp+242,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr),12);
            tracep->chgCData(oldp+243,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+244,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+245,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o),32);
            tracep->chgBit(oldp+246,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_we));
            tracep->chgSData(oldp+247,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_waddr),12);
            tracep->chgIData(oldp+248,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_wdata),32);
            tracep->chgBit(oldp+249,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_we));
            tracep->chgSData(oldp+250,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_waddr),12);
            tracep->chgIData(oldp+251,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_wdata),32);
            tracep->chgIData(oldp+252,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_exe_rdata),32);
            tracep->chgIData(oldp+253,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+254,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgCData(oldp+255,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
            tracep->chgIData(oldp+256,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__compare_sub_type_i),32);
            tracep->chgIData(oldp+257,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
            tracep->chgBit(oldp+258,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [0U]));
            tracep->chgBit(oldp+259,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [0U]));
            tracep->chgIData(oldp+260,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [0U]),32);
            tracep->chgQData(oldp+261,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [0U]),64);
            tracep->chgQData(oldp+263,(vlSymsp->TOP__test_top__dpram0.__PVT__data_o),64);
            tracep->chgIData(oldp+265,((0x3ffffcU & 
                                        vlSymsp->TOP__test_top.__PVT__device_addr
                                        [0U])),22);
            tracep->chgIData(oldp+266,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[0]),32);
            tracep->chgIData(oldp+267,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[1]),32);
            tracep->chgIData(oldp+268,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[2]),32);
            tracep->chgIData(oldp+269,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[3]),32);
            tracep->chgIData(oldp+270,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[4]),32);
            tracep->chgIData(oldp+271,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[5]),32);
            tracep->chgIData(oldp+272,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[6]),32);
            tracep->chgIData(oldp+273,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[7]),32);
            tracep->chgIData(oldp+274,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[8]),32);
            tracep->chgIData(oldp+275,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[9]),32);
            tracep->chgIData(oldp+276,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[10]),32);
            tracep->chgIData(oldp+277,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[11]),32);
            tracep->chgIData(oldp+278,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[12]),32);
            tracep->chgIData(oldp+279,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[13]),32);
            tracep->chgIData(oldp+280,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[14]),32);
            tracep->chgIData(oldp+281,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[15]),32);
            tracep->chgIData(oldp+282,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[16]),32);
            tracep->chgIData(oldp+283,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[17]),32);
            tracep->chgIData(oldp+284,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[18]),32);
            tracep->chgIData(oldp+285,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[19]),32);
            tracep->chgIData(oldp+286,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[20]),32);
            tracep->chgIData(oldp+287,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[21]),32);
            tracep->chgIData(oldp+288,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[22]),32);
            tracep->chgIData(oldp+289,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[23]),32);
            tracep->chgIData(oldp+290,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[24]),32);
            tracep->chgIData(oldp+291,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[25]),32);
            tracep->chgIData(oldp+292,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[26]),32);
            tracep->chgIData(oldp+293,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[27]),32);
            tracep->chgIData(oldp+294,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[28]),32);
            tracep->chgIData(oldp+295,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[29]),32);
            tracep->chgIData(oldp+296,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[30]),32);
            tracep->chgIData(oldp+297,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[31]),32);
            tracep->chgIData(oldp+298,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[0]),32);
            tracep->chgIData(oldp+299,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[1]),32);
            tracep->chgIData(oldp+300,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[2]),32);
            tracep->chgIData(oldp+301,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[3]),32);
            tracep->chgIData(oldp+302,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[4]),32);
            tracep->chgIData(oldp+303,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[5]),32);
            tracep->chgIData(oldp+304,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[6]),32);
            tracep->chgIData(oldp+305,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[7]),32);
            tracep->chgIData(oldp+306,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[8]),32);
            tracep->chgIData(oldp+307,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[9]),32);
            tracep->chgIData(oldp+308,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[10]),32);
            tracep->chgIData(oldp+309,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[11]),32);
            tracep->chgIData(oldp+310,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[12]),32);
            tracep->chgIData(oldp+311,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[13]),32);
            tracep->chgIData(oldp+312,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[14]),32);
            tracep->chgIData(oldp+313,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[15]),32);
            tracep->chgIData(oldp+314,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[16]),32);
            tracep->chgIData(oldp+315,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[17]),32);
            tracep->chgIData(oldp+316,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[18]),32);
            tracep->chgIData(oldp+317,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[19]),32);
            tracep->chgIData(oldp+318,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[20]),32);
            tracep->chgIData(oldp+319,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[21]),32);
            tracep->chgIData(oldp+320,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[22]),32);
            tracep->chgIData(oldp+321,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[23]),32);
            tracep->chgIData(oldp+322,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[24]),32);
            tracep->chgIData(oldp+323,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[25]),32);
            tracep->chgIData(oldp+324,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[26]),32);
            tracep->chgIData(oldp+325,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[27]),32);
            tracep->chgIData(oldp+326,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[28]),32);
            tracep->chgIData(oldp+327,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[29]),32);
            tracep->chgIData(oldp+328,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[30]),32);
            tracep->chgIData(oldp+329,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[31]),32);
            tracep->chgIData(oldp+330,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[0]),32);
            tracep->chgIData(oldp+331,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[1]),32);
            tracep->chgIData(oldp+332,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[2]),32);
            tracep->chgIData(oldp+333,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[3]),32);
            tracep->chgIData(oldp+334,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[4]),32);
            tracep->chgIData(oldp+335,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[5]),32);
            tracep->chgIData(oldp+336,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[6]),32);
            tracep->chgIData(oldp+337,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[7]),32);
            tracep->chgIData(oldp+338,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[8]),32);
            tracep->chgIData(oldp+339,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[9]),32);
            tracep->chgIData(oldp+340,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[10]),32);
            tracep->chgIData(oldp+341,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[11]),32);
            tracep->chgIData(oldp+342,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[12]),32);
            tracep->chgIData(oldp+343,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[13]),32);
            tracep->chgIData(oldp+344,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[14]),32);
            tracep->chgIData(oldp+345,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[15]),32);
            tracep->chgIData(oldp+346,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[16]),32);
            tracep->chgIData(oldp+347,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[17]),32);
            tracep->chgIData(oldp+348,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[18]),32);
            tracep->chgIData(oldp+349,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[19]),32);
            tracep->chgIData(oldp+350,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[20]),32);
            tracep->chgIData(oldp+351,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[21]),32);
            tracep->chgIData(oldp+352,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[22]),32);
            tracep->chgIData(oldp+353,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[23]),32);
            tracep->chgIData(oldp+354,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[24]),32);
            tracep->chgIData(oldp+355,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[25]),32);
            tracep->chgIData(oldp+356,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[26]),32);
            tracep->chgIData(oldp+357,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[27]),32);
            tracep->chgIData(oldp+358,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[28]),32);
            tracep->chgIData(oldp+359,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[29]),32);
            tracep->chgIData(oldp+360,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[30]),32);
            tracep->chgIData(oldp+361,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[31]),32);
            tracep->chgIData(oldp+362,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[0]),32);
            tracep->chgIData(oldp+363,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[1]),32);
            tracep->chgIData(oldp+364,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[2]),32);
            tracep->chgIData(oldp+365,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[3]),32);
            tracep->chgIData(oldp+366,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[4]),32);
            tracep->chgIData(oldp+367,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[5]),32);
            tracep->chgIData(oldp+368,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[6]),32);
            tracep->chgIData(oldp+369,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[7]),32);
            tracep->chgIData(oldp+370,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[8]),32);
            tracep->chgIData(oldp+371,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[9]),32);
            tracep->chgIData(oldp+372,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[10]),32);
            tracep->chgIData(oldp+373,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[11]),32);
            tracep->chgIData(oldp+374,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[12]),32);
            tracep->chgIData(oldp+375,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[13]),32);
            tracep->chgIData(oldp+376,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[14]),32);
            tracep->chgIData(oldp+377,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[15]),32);
            tracep->chgIData(oldp+378,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[16]),32);
            tracep->chgIData(oldp+379,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[17]),32);
            tracep->chgIData(oldp+380,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[18]),32);
            tracep->chgIData(oldp+381,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[19]),32);
            tracep->chgIData(oldp+382,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[20]),32);
            tracep->chgIData(oldp+383,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[21]),32);
            tracep->chgIData(oldp+384,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[22]),32);
            tracep->chgIData(oldp+385,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[23]),32);
            tracep->chgIData(oldp+386,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[24]),32);
            tracep->chgIData(oldp+387,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[25]),32);
            tracep->chgIData(oldp+388,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[26]),32);
            tracep->chgIData(oldp+389,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[27]),32);
            tracep->chgIData(oldp+390,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[28]),32);
            tracep->chgIData(oldp+391,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[29]),32);
            tracep->chgIData(oldp+392,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[30]),32);
            tracep->chgIData(oldp+393,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[31]),32);
        }
        tracep->chgBit(oldp+394,(vlTOPp->rst_i));
        tracep->chgBit(oldp+395,(vlTOPp->clk_i));
        tracep->chgBit(oldp+396,(vlTOPp->halt_o));
        tracep->chgQData(oldp+397,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),64);
        tracep->chgQData(oldp+399,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),64);
        tracep->chgQData(oldp+401,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),64);
        tracep->chgIData(oldp+403,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                                     ? ((((0x2fffffU 
                                           >= (0x3ffffcU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))
                                           ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                          [(0x3ffffcU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)]
                                           : 0U) << 0x18U) 
                                        | ((((0x2fffffU 
                                              >= (0x3fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x3ffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))))
                                              ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                             [(0x3fffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x3ffffcU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))]
                                              : 0U) 
                                            << 0x10U) 
                                           | ((((0x2fffffU 
                                                 >= 
                                                 (0x3fffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x3ffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))))
                                                 ? 
                                                vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                [(0x3fffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x3ffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))]
                                                 : 0U) 
                                               << 8U) 
                                              | ((0x2fffffU 
                                                  >= 
                                                  (0x3fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))))
                                                  ? 
                                                 vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))]
                                                  : 0U))))
                                     : 0U)),32);
        tracep->chgBit(oldp+404,(((~ (IData)(vlTOPp->rst_i)) 
                                  & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
        tracep->chgBit(oldp+405,((1U & ((~ (IData)(vlTOPp->rst_i)) 
                                        & ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                            ? ((4U 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                                ? (~ 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                    >> 1U))
                                                : (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))
                                            : ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                   >> 2U)) 
                                               & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                   >> 1U) 
                                                  | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))))))));
        tracep->chgIData(oldp+406,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                                              & (0U 
                                                 != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                              ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                              : (((
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                                                  & (0U 
                                                     != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                                  : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final)))),32);
        tracep->chgIData(oldp+407,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                               & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                              & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                                 == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                              ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                              : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                  & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                     == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                                  : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final)))),32);
        tracep->chgIData(oldp+408,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x4000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp
                                             [(0x1fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x14U))]
                                              : vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp
                                             [(0x1fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x14U))]))),32);
        tracep->chgIData(oldp+409,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x4000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp
                                             [(0x1fU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)]
                                              : vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp
                                             [(0x1fU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)]))),32);
        tracep->chgIData(oldp+410,(((IData)(vlTOPp->rst_i)
                                     ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)),32);
        tracep->chgIData(oldp+411,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffffeU 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 1U)))),32);
        tracep->chgIData(oldp+412,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffffcU 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 2U)))),32);
        tracep->chgIData(oldp+413,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffff8U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 3U)))),32);
        tracep->chgIData(oldp+414,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffff0U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 4U)))),32);
        tracep->chgIData(oldp+415,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffffe0U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 5U)))),32);
        tracep->chgIData(oldp+416,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffffc0U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 6U)))),32);
        tracep->chgIData(oldp+417,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffff80U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 7U)))),32);
        tracep->chgIData(oldp+418,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffff00U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 8U)))),32);
        tracep->chgIData(oldp+419,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffe00U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 9U)))),32);
        tracep->chgIData(oldp+420,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffc00U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0xaU)))),32);
        tracep->chgIData(oldp+421,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffff800U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0xbU)))),32);
        tracep->chgIData(oldp+422,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffff000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0xcU)))),32);
        tracep->chgIData(oldp+423,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffe000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0xdU)))),32);
        tracep->chgIData(oldp+424,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffc000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0xeU)))),32);
        tracep->chgIData(oldp+425,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffff8000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0xfU)))),32);
        tracep->chgIData(oldp+426,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffff0000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x10U)))),32);
        tracep->chgIData(oldp+427,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffe0000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x11U)))),32);
        tracep->chgIData(oldp+428,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffc0000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x12U)))),32);
        tracep->chgIData(oldp+429,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfff80000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x13U)))),32);
        tracep->chgIData(oldp+430,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfff00000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x14U)))),32);
        tracep->chgIData(oldp+431,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffe00000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x15U)))),32);
        tracep->chgIData(oldp+432,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffc00000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x16U)))),32);
        tracep->chgIData(oldp+433,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xff800000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x17U)))),32);
        tracep->chgIData(oldp+434,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xff000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x18U)))),32);
        tracep->chgIData(oldp+435,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfe000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x19U)))),32);
        tracep->chgIData(oldp+436,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfc000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x1aU)))),32);
        tracep->chgIData(oldp+437,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xf8000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x1bU)))),32);
        tracep->chgIData(oldp+438,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xf0000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x1cU)))),32);
        tracep->chgIData(oldp+439,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xe0000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x1dU)))),32);
        tracep->chgIData(oldp+440,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xc0000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x1eU)))),32);
        tracep->chgIData(oldp+441,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0x80000000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                << 0x1fU)))),32);
        tracep->chgIData(oldp+442,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0x80000000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o) 
                                                 | (0x7fffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 1U)))
                                              : (0x7fffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 1U))))),32);
        tracep->chgIData(oldp+443,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xc0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1eU)) 
                                                 | (0x3fffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 2U)))
                                              : (0x3fffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 2U))))),32);
        tracep->chgIData(oldp+444,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xe0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1dU)) 
                                                 | (0x1fffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 3U)))
                                              : (0x1fffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 3U))))),32);
        tracep->chgIData(oldp+445,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xf0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1cU)) 
                                                 | (0xfffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 4U)))
                                              : (0xfffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 4U))))),32);
        tracep->chgIData(oldp+446,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xf8000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1bU)) 
                                                 | (0x7ffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 5U)))
                                              : (0x7ffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 5U))))),32);
        tracep->chgIData(oldp+447,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfc000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1aU)) 
                                                 | (0x3ffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 6U)))
                                              : (0x3ffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 6U))))),32);
        tracep->chgIData(oldp+448,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfe000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x19U)) 
                                                 | (0x1ffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 7U)))
                                              : (0x1ffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 7U))))),32);
        tracep->chgIData(oldp+449,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xff000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x18U)) 
                                                 | (0xffffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 8U)))
                                              : (0xffffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 8U))))),32);
        tracep->chgIData(oldp+450,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xff800000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 9U)))
                                              : (0x7fffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 9U))))),32);
        tracep->chgIData(oldp+451,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffc00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x16U)) 
                                                 | (0x3fffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0xaU)))
                                              : (0x3fffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0xaU))))),32);
        tracep->chgIData(oldp+452,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffe00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x15U)) 
                                                 | (0x1fffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0xbU)))
                                              : (0x1fffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0xbU))))),32);
        tracep->chgIData(oldp+453,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfff00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x14U)) 
                                                 | (0xfffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0xcU)))
                                              : (0xfffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0xcU))))),32);
        tracep->chgIData(oldp+454,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfff80000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x13U)) 
                                                 | (0x7ffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0xdU)))
                                              : (0x7ffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0xdU))))),32);
        tracep->chgIData(oldp+455,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffc0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0xeU)))
                                              : (0x3ffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0xeU))))),32);
        tracep->chgIData(oldp+456,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x11U)) 
                                                 | (0x1ffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0xfU)))
                                              : (0x1ffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0xfU))))),32);
        tracep->chgIData(oldp+457,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x10U)))
                                              : (0xffffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x10U))))),32);
        tracep->chgIData(oldp+458,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffff8000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x11U)))
                                              : (0x7fffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x11U))))),32);
        tracep->chgIData(oldp+459,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffffc000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xeU)) 
                                                 | (0x3fffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x12U)))
                                              : (0x3fffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x12U))))),32);
        tracep->chgIData(oldp+460,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffffe000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xdU)) 
                                                 | (0x1fffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x13U)))
                                              : (0x1fffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x13U))))),32);
        tracep->chgIData(oldp+461,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x14U)))
                                              : (0xfffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x14U))))),32);
        tracep->chgIData(oldp+462,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffff800U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xbU)) 
                                                 | (0x7ffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x15U)))
                                              : (0x7ffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x15U))))),32);
        tracep->chgIData(oldp+463,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffffc00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xaU)) 
                                                 | (0x3ffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x16U)))
                                              : (0x3ffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x16U))))),32);
        tracep->chgIData(oldp+464,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffffe00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 9U)) 
                                                 | (0x1ffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x17U)))
                                              : (0x1ffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x17U))))),32);
        tracep->chgIData(oldp+465,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x18U)))
                                              : (0xffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x18U))))),32);
        tracep->chgIData(oldp+466,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffffff80U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x19U)))
                                              : (0x7fU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x19U))))),32);
        tracep->chgIData(oldp+467,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffffffc0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 6U)) 
                                                 | (0x3fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x1aU)))
                                              : (0x3fU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1aU))))),32);
        tracep->chgIData(oldp+468,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xffffffe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x1bU)))
                                              : (0x1fU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1bU))))),32);
        tracep->chgIData(oldp+469,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffffff0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x1cU)))
                                              : (0xfU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1cU))))),32);
        tracep->chgIData(oldp+470,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffffff8U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x1dU)))
                                              : (7U 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1dU))))),32);
        tracep->chgIData(oldp+471,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffffffcU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x1eU)))
                                              : (3U 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1eU))))),32);
        tracep->chgIData(oldp+472,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0xfffffffeU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       >> 0x1fU)))
                                              : (1U 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1fU))))),32);
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
