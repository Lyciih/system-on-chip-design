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
            tracep->chgIData(oldp+0,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
            tracep->chgBit(oldp+2,(vlSymsp->TOP__test_top.__PVT__ce_wire));
            tracep->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
            tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_id_inst_is_load_o) 
                                    & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xfU)) 
                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_id_rd_o)) 
                                       | ((0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U)) 
                                          == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_id_rd_o))))));
            tracep->chgIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
            tracep->chgBit(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_exe_id_inst_is_load_o));
            tracep->chgCData(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_exe_id_rd_o),5);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
            tracep->chgBit(oldp+18,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
            tracep->chgCData(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgCData(oldp+23,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+24,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+25,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+26,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgCData(oldp+28,((0x1fU & ((0x4000U 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)))
                                                 : 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)))))),5);
            tracep->chgCData(oldp+29,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+30,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+31,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+32,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+33,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+34,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0xeU))));
            tracep->chgBit(oldp+35,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x1eU))));
            tracep->chgIData(oldp+36,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0xfe0U & 
                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 7U))))),32);
            tracep->chgIData(oldp+37,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | (0xfffU & 
                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)))),32);
            tracep->chgCData(oldp+38,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgIData(oldp+39,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+40,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+41,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+42,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+44,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+45,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+46,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+47,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+48,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+49,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+50,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+51,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+55,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+56,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+57,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+61,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+63,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+64,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+65,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+67,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+71,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
            tracep->chgCData(oldp+72,((0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+73,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
            tracep->chgBit(oldp+75,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+76,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
            tracep->chgCData(oldp+77,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+78,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+79,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+81,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+82,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+85,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
            tracep->chgIData(oldp+86,(vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o),32);
            tracep->chgIData(oldp+87,(vlSymsp->TOP__test_top.__PVT__exe_mem_data_o),32);
            tracep->chgBit(oldp+88,(vlSymsp->TOP__test_top.__PVT__exe_mem_we_o));
            tracep->chgCData(oldp+89,(vlSymsp->TOP__test_top.__PVT__exe_mem_op_o),4);
            tracep->chgIData(oldp+90,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
            tracep->chgIData(oldp+91,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
            tracep->chgCData(oldp+93,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+94,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+95,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
            tracep->chgIData(oldp+96,(vlSymsp->TOP__test_top.__PVT__ram_mem_data_o),32);
            tracep->chgIData(oldp+97,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+98,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgCData(oldp+99,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
            tracep->chgIData(oldp+100,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_i),32);
            tracep->chgIData(oldp+101,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_r),32);
            tracep->chgIData(oldp+102,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[0]),32);
            tracep->chgIData(oldp+103,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[1]),32);
            tracep->chgIData(oldp+104,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[2]),32);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[3]),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[4]),32);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[5]),32);
            tracep->chgIData(oldp+108,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[6]),32);
            tracep->chgIData(oldp+109,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[7]),32);
            tracep->chgIData(oldp+110,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[8]),32);
            tracep->chgIData(oldp+111,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[9]),32);
            tracep->chgIData(oldp+112,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[10]),32);
            tracep->chgIData(oldp+113,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[11]),32);
            tracep->chgIData(oldp+114,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[12]),32);
            tracep->chgIData(oldp+115,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[13]),32);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[14]),32);
            tracep->chgIData(oldp+117,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[15]),32);
            tracep->chgIData(oldp+118,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[16]),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[17]),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[18]),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[19]),32);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[20]),32);
            tracep->chgIData(oldp+123,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[21]),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[22]),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[23]),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[24]),32);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[25]),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[26]),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[27]),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[28]),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[29]),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[30]),32);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[31]),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[0]),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[1]),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[2]),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[3]),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[4]),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[5]),32);
            tracep->chgIData(oldp+140,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[6]),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[7]),32);
            tracep->chgIData(oldp+142,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[8]),32);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[9]),32);
            tracep->chgIData(oldp+144,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[10]),32);
            tracep->chgIData(oldp+145,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[11]),32);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[12]),32);
            tracep->chgIData(oldp+147,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[13]),32);
            tracep->chgIData(oldp+148,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[14]),32);
            tracep->chgIData(oldp+149,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[15]),32);
            tracep->chgIData(oldp+150,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[16]),32);
            tracep->chgIData(oldp+151,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[17]),32);
            tracep->chgIData(oldp+152,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[18]),32);
            tracep->chgIData(oldp+153,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[19]),32);
            tracep->chgIData(oldp+154,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[20]),32);
            tracep->chgIData(oldp+155,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[21]),32);
            tracep->chgIData(oldp+156,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[22]),32);
            tracep->chgIData(oldp+157,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[23]),32);
            tracep->chgIData(oldp+158,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[24]),32);
            tracep->chgIData(oldp+159,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[25]),32);
            tracep->chgIData(oldp+160,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[26]),32);
            tracep->chgIData(oldp+161,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[27]),32);
            tracep->chgIData(oldp+162,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[28]),32);
            tracep->chgIData(oldp+163,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[29]),32);
            tracep->chgIData(oldp+164,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[30]),32);
            tracep->chgIData(oldp+165,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[31]),32);
            tracep->chgIData(oldp+166,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[0]),32);
            tracep->chgIData(oldp+167,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[1]),32);
            tracep->chgIData(oldp+168,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[2]),32);
            tracep->chgIData(oldp+169,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[3]),32);
            tracep->chgIData(oldp+170,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[4]),32);
            tracep->chgIData(oldp+171,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[5]),32);
            tracep->chgIData(oldp+172,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[6]),32);
            tracep->chgIData(oldp+173,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[7]),32);
            tracep->chgIData(oldp+174,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[8]),32);
            tracep->chgIData(oldp+175,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[9]),32);
            tracep->chgIData(oldp+176,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[10]),32);
            tracep->chgIData(oldp+177,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[11]),32);
            tracep->chgIData(oldp+178,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[12]),32);
            tracep->chgIData(oldp+179,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[13]),32);
            tracep->chgIData(oldp+180,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[14]),32);
            tracep->chgIData(oldp+181,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[15]),32);
            tracep->chgIData(oldp+182,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[16]),32);
            tracep->chgIData(oldp+183,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[17]),32);
            tracep->chgIData(oldp+184,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[18]),32);
            tracep->chgIData(oldp+185,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[19]),32);
            tracep->chgIData(oldp+186,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[20]),32);
            tracep->chgIData(oldp+187,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[21]),32);
            tracep->chgIData(oldp+188,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[22]),32);
            tracep->chgIData(oldp+189,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[23]),32);
            tracep->chgIData(oldp+190,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[24]),32);
            tracep->chgIData(oldp+191,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[25]),32);
            tracep->chgIData(oldp+192,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[26]),32);
            tracep->chgIData(oldp+193,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[27]),32);
            tracep->chgIData(oldp+194,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[28]),32);
            tracep->chgIData(oldp+195,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[29]),32);
            tracep->chgIData(oldp+196,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[30]),32);
            tracep->chgIData(oldp+197,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[31]),32);
            tracep->chgIData(oldp+198,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[0]),32);
            tracep->chgIData(oldp+199,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[1]),32);
            tracep->chgIData(oldp+200,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[2]),32);
            tracep->chgIData(oldp+201,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[3]),32);
            tracep->chgIData(oldp+202,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[4]),32);
            tracep->chgIData(oldp+203,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[5]),32);
            tracep->chgIData(oldp+204,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[6]),32);
            tracep->chgIData(oldp+205,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[7]),32);
            tracep->chgIData(oldp+206,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[8]),32);
            tracep->chgIData(oldp+207,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[9]),32);
            tracep->chgIData(oldp+208,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[10]),32);
            tracep->chgIData(oldp+209,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[11]),32);
            tracep->chgIData(oldp+210,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[12]),32);
            tracep->chgIData(oldp+211,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[13]),32);
            tracep->chgIData(oldp+212,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[14]),32);
            tracep->chgIData(oldp+213,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[15]),32);
            tracep->chgIData(oldp+214,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[16]),32);
            tracep->chgIData(oldp+215,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[17]),32);
            tracep->chgIData(oldp+216,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[18]),32);
            tracep->chgIData(oldp+217,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[19]),32);
            tracep->chgIData(oldp+218,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[20]),32);
            tracep->chgIData(oldp+219,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[21]),32);
            tracep->chgIData(oldp+220,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[22]),32);
            tracep->chgIData(oldp+221,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[23]),32);
            tracep->chgIData(oldp+222,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[24]),32);
            tracep->chgIData(oldp+223,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[25]),32);
            tracep->chgIData(oldp+224,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[26]),32);
            tracep->chgIData(oldp+225,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[27]),32);
            tracep->chgIData(oldp+226,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[28]),32);
            tracep->chgIData(oldp+227,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[29]),32);
            tracep->chgIData(oldp+228,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[30]),32);
            tracep->chgIData(oldp+229,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[31]),32);
        }
        tracep->chgBit(oldp+230,(vlTOPp->rst_i));
        tracep->chgBit(oldp+231,(vlTOPp->clk_i));
        tracep->chgIData(oldp+232,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                     ? ((vlSymsp->TOP__test_top__rom0.__PVT__mem
                                         [(0x1ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                         << 0x18U) 
                                        | ((vlSymsp->TOP__test_top__rom0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                            << 0x10U) 
                                           | ((vlSymsp->TOP__test_top__rom0.__PVT__mem
                                               [(0x1fffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x1ffffcU 
                                                     & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                               << 8U) 
                                              | vlSymsp->TOP__test_top__rom0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                     : 0U)),32);
        tracep->chgIData(oldp+233,(((IData)(vlTOPp->rst_i)
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
                                                  : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final)))),32);
        tracep->chgIData(oldp+234,(((IData)(vlTOPp->rst_i)
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
                                                  : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final)))),32);
        tracep->chgIData(oldp+235,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x4000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp
                                             [(0x1fU 
                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x14U))]
                                              : vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp
                                             [(0x1fU 
                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x14U))]))),32);
        tracep->chgIData(oldp+236,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x4000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp
                                             [(0x1fU 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]
                                              : vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp
                                             [(0x1fU 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]))),32);
        tracep->chgIData(oldp+237,(((IData)(vlTOPp->rst_i)
                                     ? 0U : vlSymsp->TOP__test_top.__PVT__id_exe_op1_o)),32);
        tracep->chgIData(oldp+238,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffffeU 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 1U)))),32);
        tracep->chgIData(oldp+239,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffffcU 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 2U)))),32);
        tracep->chgIData(oldp+240,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffff8U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 3U)))),32);
        tracep->chgIData(oldp+241,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffff0U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 4U)))),32);
        tracep->chgIData(oldp+242,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffffe0U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 5U)))),32);
        tracep->chgIData(oldp+243,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffffc0U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 6U)))),32);
        tracep->chgIData(oldp+244,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffff80U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 7U)))),32);
        tracep->chgIData(oldp+245,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffff00U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 8U)))),32);
        tracep->chgIData(oldp+246,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffe00U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 9U)))),32);
        tracep->chgIData(oldp+247,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffffc00U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0xaU)))),32);
        tracep->chgIData(oldp+248,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffff800U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0xbU)))),32);
        tracep->chgIData(oldp+249,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffff000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0xcU)))),32);
        tracep->chgIData(oldp+250,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffe000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0xdU)))),32);
        tracep->chgIData(oldp+251,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffffc000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0xeU)))),32);
        tracep->chgIData(oldp+252,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffff8000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0xfU)))),32);
        tracep->chgIData(oldp+253,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffff0000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x10U)))),32);
        tracep->chgIData(oldp+254,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffe0000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x11U)))),32);
        tracep->chgIData(oldp+255,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfffc0000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x12U)))),32);
        tracep->chgIData(oldp+256,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfff80000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x13U)))),32);
        tracep->chgIData(oldp+257,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfff00000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x14U)))),32);
        tracep->chgIData(oldp+258,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffe00000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x15U)))),32);
        tracep->chgIData(oldp+259,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xffc00000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x16U)))),32);
        tracep->chgIData(oldp+260,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xff800000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x17U)))),32);
        tracep->chgIData(oldp+261,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xff000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x18U)))),32);
        tracep->chgIData(oldp+262,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfe000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x19U)))),32);
        tracep->chgIData(oldp+263,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xfc000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x1aU)))),32);
        tracep->chgIData(oldp+264,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xf8000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x1bU)))),32);
        tracep->chgIData(oldp+265,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xf0000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x1cU)))),32);
        tracep->chgIData(oldp+266,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xe0000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x1dU)))),32);
        tracep->chgIData(oldp+267,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0xc0000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x1eU)))),32);
        tracep->chgIData(oldp+268,(((IData)(vlTOPp->rst_i)
                                     ? 0U : (0x80000000U 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                << 0x1fU)))),32);
        tracep->chgIData(oldp+269,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0x80000000U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_op1_o) 
                                                 | (0x7fffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 1U)))
                                              : (0x7fffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 1U))))),32);
        tracep->chgIData(oldp+270,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xc0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1eU)) 
                                                 | (0x3fffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 2U)))
                                              : (0x3fffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 2U))))),32);
        tracep->chgIData(oldp+271,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xe0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1dU)) 
                                                 | (0x1fffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 3U)))
                                              : (0x1fffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 3U))))),32);
        tracep->chgIData(oldp+272,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xf0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1cU)) 
                                                 | (0xfffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 4U)))
                                              : (0xfffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 4U))))),32);
        tracep->chgIData(oldp+273,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xf8000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1bU)) 
                                                 | (0x7ffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 5U)))
                                              : (0x7ffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 5U))))),32);
        tracep->chgIData(oldp+274,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfc000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x1aU)) 
                                                 | (0x3ffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 6U)))
                                              : (0x3ffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 6U))))),32);
        tracep->chgIData(oldp+275,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfe000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x19U)) 
                                                 | (0x1ffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 7U)))
                                              : (0x1ffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 7U))))),32);
        tracep->chgIData(oldp+276,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xff000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x18U)) 
                                                 | (0xffffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 8U)))
                                              : (0xffffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 8U))))),32);
        tracep->chgIData(oldp+277,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xff800000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 9U)))
                                              : (0x7fffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 9U))))),32);
        tracep->chgIData(oldp+278,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffc00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x16U)) 
                                                 | (0x3fffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0xaU)))
                                              : (0x3fffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xaU))))),32);
        tracep->chgIData(oldp+279,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffe00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x15U)) 
                                                 | (0x1fffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0xbU)))
                                              : (0x1fffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xbU))))),32);
        tracep->chgIData(oldp+280,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfff00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x14U)) 
                                                 | (0xfffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0xcU)))
                                              : (0xfffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xcU))))),32);
        tracep->chgIData(oldp+281,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfff80000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x13U)) 
                                                 | (0x7ffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0xdU)))
                                              : (0x7ffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xdU))))),32);
        tracep->chgIData(oldp+282,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffc0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0xeU)))
                                              : (0x3ffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xeU))))),32);
        tracep->chgIData(oldp+283,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x11U)) 
                                                 | (0x1ffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0xfU)))
                                              : (0x1ffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0xfU))))),32);
        tracep->chgIData(oldp+284,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x10U)))
                                              : (0xffffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x10U))))),32);
        tracep->chgIData(oldp+285,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffff8000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x11U)))
                                              : (0x7fffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x11U))))),32);
        tracep->chgIData(oldp+286,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffffc000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xeU)) 
                                                 | (0x3fffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x12U)))
                                              : (0x3fffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x12U))))),32);
        tracep->chgIData(oldp+287,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffffe000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xdU)) 
                                                 | (0x1fffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x13U)))
                                              : (0x1fffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x13U))))),32);
        tracep->chgIData(oldp+288,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x14U)))
                                              : (0xfffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x14U))))),32);
        tracep->chgIData(oldp+289,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffff800U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xbU)) 
                                                 | (0x7ffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x15U)))
                                              : (0x7ffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x15U))))),32);
        tracep->chgIData(oldp+290,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffffc00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xaU)) 
                                                 | (0x3ffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x16U)))
                                              : (0x3ffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x16U))))),32);
        tracep->chgIData(oldp+291,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffffe00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 9U)) 
                                                 | (0x1ffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x17U)))
                                              : (0x1ffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x17U))))),32);
        tracep->chgIData(oldp+292,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x18U)))
                                              : (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x18U))))),32);
        tracep->chgIData(oldp+293,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffffff80U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x19U)))
                                              : (0x7fU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x19U))))),32);
        tracep->chgIData(oldp+294,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffffffc0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 6U)) 
                                                 | (0x3fU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x1aU)))
                                              : (0x3fU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x1aU))))),32);
        tracep->chgIData(oldp+295,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xffffffe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x1bU)))
                                              : (0x1fU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x1bU))))),32);
        tracep->chgIData(oldp+296,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffffff0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x1cU)))
                                              : (0xfU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x1cU))))),32);
        tracep->chgIData(oldp+297,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffffff8U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x1dU)))
                                              : (7U 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x1dU))))),32);
        tracep->chgIData(oldp+298,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffffffcU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x1eU)))
                                              : (3U 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    >> 0x1eU))))),32);
        tracep->chgIData(oldp+299,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40000000U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0xfffffffeU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                    >> 0x1fU)))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       >> 0x1fU)))
                                              : (1U 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
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
