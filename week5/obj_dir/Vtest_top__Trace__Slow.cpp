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
        tracep->declBit(c+215,"rst_i", false,-1);
        tracep->declBit(c+216,"clk_i", false,-1);
        tracep->declBit(c+215,"test_top rst_i", false,-1);
        tracep->declBit(c+216,"test_top clk_i", false,-1);
        tracep->declBus(c+152,"test_top pc_wire", false,-1, 31,0);
        tracep->declBit(c+153,"test_top ce_wire", false,-1);
        tracep->declBus(c+152,"test_top if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+154,"test_top if_inst_o", false,-1, 31,0);
        tracep->declBus(c+155,"test_top if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+156,"test_top if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+2,"test_top id_inst_o", false,-1, 31,0);
        tracep->declBus(c+217,"test_top id_op1_o", false,-1, 31,0);
        tracep->declBus(c+218,"test_top id_op2_o", false,-1, 31,0);
        tracep->declBit(c+3,"test_top id_reg_we_o", false,-1);
        tracep->declBus(c+4,"test_top id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+5,"test_top id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+6,"test_top id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+7,"test_top id_reg1_re_o", false,-1);
        tracep->declBit(c+8,"test_top id_reg2_re_o", false,-1);
        tracep->declBus(c+9,"test_top reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+10,"test_top reg2_data_o", false,-1, 31,0);
        tracep->declBus(c+157,"test_top id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+158,"test_top id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+159,"test_top id_exe_reg_we_o", false,-1);
        tracep->declBus(c+160,"test_top id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+161,"test_top id_exe_inst_o", false,-1, 31,0);
        tracep->declBus(c+11,"test_top exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+12,"test_top exe_reg_we_o", false,-1);
        tracep->declBus(c+13,"test_top exe_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+162,"test_top exe_mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+163,"test_top exe_mem_reg_we_o", false,-1);
        tracep->declBus(c+164,"test_top exe_mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+14,"test_top mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+15,"test_top mem_reg_we_o", false,-1);
        tracep->declBus(c+16,"test_top mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+165,"test_top mem_wb_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+166,"test_top mem_wb_reg_we_o", false,-1);
        tracep->declBus(c+167,"test_top mem_wb_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+216,"test_top pc_reg0 clk_i", false,-1);
        tracep->declBit(c+215,"test_top pc_reg0 rst_i", false,-1);
        tracep->declBus(c+152,"test_top pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+153,"test_top pc_reg0 ce_o", false,-1);
        tracep->declBit(c+216,"test_top if_id0 clk_i", false,-1);
        tracep->declBit(c+215,"test_top if_id0 rst_i", false,-1);
        tracep->declBus(c+152,"test_top if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+154,"test_top if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+155,"test_top if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+156,"test_top if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+215,"test_top id0 rst_i", false,-1);
        tracep->declBus(c+155,"test_top id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+156,"test_top id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+9,"test_top id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+10,"test_top id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top id0 exe_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+12,"test_top id0 exe_reg_we_i", false,-1);
        tracep->declBus(c+13,"test_top id0 exe_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+14,"test_top id0 mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+15,"test_top id0 mem_reg_we_i", false,-1);
        tracep->declBus(c+16,"test_top id0 mem_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+5,"test_top id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+6,"test_top id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+7,"test_top id0 reg1_re_o", false,-1);
        tracep->declBit(c+8,"test_top id0 reg2_re_o", false,-1);
        tracep->declBus(c+2,"test_top id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+217,"test_top id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+218,"test_top id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+3,"test_top id0 reg_we_o", false,-1);
        tracep->declBus(c+4,"test_top id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+17,"test_top id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+18,"test_top id0 op2_o_final", false,-1, 31,0);
        tracep->declBus(c+168,"test_top id0 opcode", false,-1, 6,0);
        tracep->declBus(c+169,"test_top id0 rd", false,-1, 4,0);
        tracep->declBus(c+170,"test_top id0 rs1", false,-1, 4,0);
        tracep->declBus(c+171,"test_top id0 rs2", false,-1, 4,0);
        tracep->declBus(c+170,"test_top id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+284,"test_top id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+285,"test_top id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+286,"test_top id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+9,"test_top id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+172,"test_top id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+285,"test_top id0 i_reg_we_o", false,-1);
        tracep->declBus(c+173,"test_top id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+170,"test_top id0 r_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+171,"test_top id0 r_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+285,"test_top id0 r_reg1_re_o", false,-1);
        tracep->declBit(c+285,"test_top id0 r_reg2_re_o", false,-1);
        tracep->declBus(c+9,"test_top id0 r_op1_o", false,-1, 31,0);
        tracep->declBus(c+10,"test_top id0 r_op2_o", false,-1, 31,0);
        tracep->declBit(c+285,"test_top id0 r_reg_we_o", false,-1);
        tracep->declBus(c+173,"test_top id0 r_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+156,"test_top id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+9,"test_top id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+10,"test_top id0 inst_type_i reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+170,"test_top id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+284,"test_top id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+285,"test_top id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+286,"test_top id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+9,"test_top id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+172,"test_top id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+285,"test_top id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+173,"test_top id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+169,"test_top id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+174,"test_top id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+170,"test_top id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBus(c+156,"test_top id0 inst_type_r inst_i", false,-1, 31,0);
        tracep->declBus(c+9,"test_top id0 inst_type_r reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+10,"test_top id0 inst_type_r reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+170,"test_top id0 inst_type_r reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+171,"test_top id0 inst_type_r reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+285,"test_top id0 inst_type_r reg1_re_o", false,-1);
        tracep->declBit(c+285,"test_top id0 inst_type_r reg2_re_o", false,-1);
        tracep->declBus(c+9,"test_top id0 inst_type_r op1_o", false,-1, 31,0);
        tracep->declBus(c+10,"test_top id0 inst_type_r op2_o", false,-1, 31,0);
        tracep->declBit(c+285,"test_top id0 inst_type_r reg_we_o", false,-1);
        tracep->declBus(c+173,"test_top id0 inst_type_r reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+169,"test_top id0 inst_type_r rd", false,-1, 4,0);
        tracep->declBus(c+174,"test_top id0 inst_type_r funct3", false,-1, 2,0);
        tracep->declBus(c+170,"test_top id0 inst_type_r rs1", false,-1, 4,0);
        tracep->declBus(c+171,"test_top id0 inst_type_r rs2", false,-1, 4,0);
        tracep->declBit(c+215,"test_top id_exe0 rst_i", false,-1);
        tracep->declBit(c+216,"test_top id_exe0 clk_i", false,-1);
        tracep->declBus(c+217,"test_top id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+218,"test_top id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+3,"test_top id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+4,"test_top id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+2,"test_top id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+157,"test_top id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+158,"test_top id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+159,"test_top id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+160,"test_top id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+161,"test_top id_exe0 inst_o", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+158,"test_top exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+159,"test_top exe0 reg_we_i", false,-1);
        tracep->declBus(c+160,"test_top exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+161,"test_top exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+12,"test_top exe0 reg_we_o", false,-1);
        tracep->declBus(c+13,"test_top exe0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+175,"test_top exe0 opcode", false,-1, 6,0);
        tracep->declBus(c+176,"test_top exe0 funct3", false,-1, 2,0);
        tracep->declBus(c+177,"test_top exe0 funct7", false,-1, 6,0);
        tracep->declBus(c+178,"test_top exe0 shamt", false,-1, 4,0);
        tracep->declBit(c+179,"test_top exe0 direct", false,-1);
        tracep->declBit(c+180,"test_top exe0 arithmetic", false,-1);
        tracep->declBus(c+219,"test_top exe0 shift_result_type_i", false,-1, 31,0);
        tracep->declBus(c+220,"test_top exe0 shift_result_type_r", false,-1, 31,0);
        tracep->declBus(c+19,"test_top exe0 compare_sub_type_i", false,-1, 31,0);
        tracep->declBus(c+20,"test_top exe0 compare_sub_type_r", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 r_type_add_or_sub", false,-1);
        tracep->declBit(c+179,"test_top exe0 r_type_sl_or_sr", false,-1);
        tracep->declBit(c+180,"test_top exe0 r_type_arithmetic", false,-1);
        tracep->declBit(c+215,"test_top exe_mem0 rst_i", false,-1);
        tracep->declBit(c+216,"test_top exe_mem0 clk_i", false,-1);
        tracep->declBus(c+11,"test_top exe_mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+12,"test_top exe_mem0 reg_we_i", false,-1);
        tracep->declBus(c+13,"test_top exe_mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+162,"test_top exe_mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+163,"test_top exe_mem0 reg_we_o", false,-1);
        tracep->declBus(c+164,"test_top exe_mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+215,"test_top mem0 rst_i", false,-1);
        tracep->declBus(c+287,"test_top mem0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+21,"test_top mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBit(c+22,"test_top mem0 ram_w_request_o", false,-1);
        tracep->declBus(c+23,"test_top mem0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+288,"test_top mem0 mem_we_i", false,-1);
        tracep->declBus(c+289,"test_top mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+290,"test_top mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+291,"test_top mem0 mem_op_i", false,-1, 3,0);
        tracep->declBit(c+292,"test_top mem0 mem_we_o", false,-1);
        tracep->declBus(c+293,"test_top mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+294,"test_top mem0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+295,"test_top mem0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+162,"test_top mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+163,"test_top mem0 reg_we_i", false,-1);
        tracep->declBus(c+164,"test_top mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+14,"test_top mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+15,"test_top mem0 reg_we_o", false,-1);
        tracep->declBus(c+16,"test_top mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+296,"test_top mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBit(c+215,"test_top mem_wb0 rst_i", false,-1);
        tracep->declBit(c+216,"test_top mem_wb0 clk_i", false,-1);
        tracep->declBus(c+14,"test_top mem_wb0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+15,"test_top mem_wb0 reg_we_i", false,-1);
        tracep->declBus(c+16,"test_top mem_wb0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+165,"test_top mem_wb0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+166,"test_top mem_wb0 reg_we_o", false,-1);
        tracep->declBus(c+167,"test_top mem_wb0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+216,"test_top rom0 clk_i", false,-1);
        tracep->declBit(c+153,"test_top rom0 ce_i", false,-1);
        tracep->declBus(c+152,"test_top rom0 addr_i", false,-1, 31,0);
        tracep->declBus(c+154,"test_top rom0 inst_o", false,-1, 31,0);
        tracep->declBus(c+181,"test_top rom0 addr4", false,-1, 20,0);
        tracep->declBit(c+216,"test_top regfile0 clk_i", false,-1);
        tracep->declBit(c+215,"test_top regfile0 rst_i", false,-1);
        tracep->declBit(c+166,"test_top regfile0 we_i", false,-1);
        tracep->declBus(c+165,"test_top regfile0 waddr_i", false,-1, 4,0);
        tracep->declBus(c+167,"test_top regfile0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+7,"test_top regfile0 re1_i", false,-1);
        tracep->declBus(c+5,"test_top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+8,"test_top regfile0 re2_i", false,-1);
        tracep->declBus(c+6,"test_top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+9,"test_top regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+10,"test_top regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+182+i*1,"test_top regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+1,"test_top regfile0 i", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type XLEN", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type value_i", false,-1, 31,0);
        tracep->declBus(c+178,"test_top exe0 shift_i_type shamt_i", false,-1, 4,0);
        tracep->declBit(c+179,"test_top exe0 shift_i_type direct_i", false,-1);
        tracep->declBit(c+180,"test_top exe0 shift_i_type arithmetic_i", false,-1);
        tracep->declBus(c+219,"test_top exe0 shift_i_type value_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+24+i*1,"test_top exe0 shift_i_type shift_l_temp", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+56+i*1,"test_top exe0 shift_i_type shift_r_temp", true,(i+0), 31,0);}}
        tracep->declBus(c+297,"test_top exe0 shift_i_type shift_l_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+298,"test_top exe0 shift_i_type shift_l_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type shift_l_cell_0 rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type shift_l_cell_0 value_i", false,-1, 31,0);
        tracep->declBus(c+221,"test_top exe0 shift_i_type shift_l_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type shift_r_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+298,"test_top exe0 shift_i_type shift_r_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type shift_r_cell_0 rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type shift_r_cell_0 value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type shift_r_cell_0 arithmetic_i", false,-1);
        tracep->declBus(c+221,"test_top exe0 shift_i_type shift_r_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[1] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+299,"test_top exe0 shift_i_type genblk1[1] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[1] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[1] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+222,"test_top exe0 shift_i_type genblk1[1] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[2] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+300,"test_top exe0 shift_i_type genblk1[2] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[2] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[2] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+223,"test_top exe0 shift_i_type genblk1[2] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[3] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+301,"test_top exe0 shift_i_type genblk1[3] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[3] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[3] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+224,"test_top exe0 shift_i_type genblk1[3] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[4] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+302,"test_top exe0 shift_i_type genblk1[4] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[4] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[4] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+225,"test_top exe0 shift_i_type genblk1[4] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[5] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+303,"test_top exe0 shift_i_type genblk1[5] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[5] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[5] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+226,"test_top exe0 shift_i_type genblk1[5] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[6] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+304,"test_top exe0 shift_i_type genblk1[6] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[6] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[6] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+227,"test_top exe0 shift_i_type genblk1[6] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[7] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+305,"test_top exe0 shift_i_type genblk1[7] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[7] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[7] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+228,"test_top exe0 shift_i_type genblk1[7] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[8] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+306,"test_top exe0 shift_i_type genblk1[8] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[8] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[8] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+229,"test_top exe0 shift_i_type genblk1[8] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[9] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+307,"test_top exe0 shift_i_type genblk1[9] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[9] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[9] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+230,"test_top exe0 shift_i_type genblk1[9] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[10] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+308,"test_top exe0 shift_i_type genblk1[10] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[10] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[10] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+231,"test_top exe0 shift_i_type genblk1[10] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[11] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+309,"test_top exe0 shift_i_type genblk1[11] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[11] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[11] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+232,"test_top exe0 shift_i_type genblk1[11] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[12] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+310,"test_top exe0 shift_i_type genblk1[12] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[12] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[12] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+233,"test_top exe0 shift_i_type genblk1[12] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[13] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+311,"test_top exe0 shift_i_type genblk1[13] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[13] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[13] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+234,"test_top exe0 shift_i_type genblk1[13] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[14] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+312,"test_top exe0 shift_i_type genblk1[14] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[14] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[14] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+235,"test_top exe0 shift_i_type genblk1[14] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[15] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+313,"test_top exe0 shift_i_type genblk1[15] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[15] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[15] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+236,"test_top exe0 shift_i_type genblk1[15] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[16] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+314,"test_top exe0 shift_i_type genblk1[16] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[16] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[16] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+237,"test_top exe0 shift_i_type genblk1[16] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[17] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+315,"test_top exe0 shift_i_type genblk1[17] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[17] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[17] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+238,"test_top exe0 shift_i_type genblk1[17] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[18] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+316,"test_top exe0 shift_i_type genblk1[18] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[18] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[18] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+239,"test_top exe0 shift_i_type genblk1[18] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[19] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+317,"test_top exe0 shift_i_type genblk1[19] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[19] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[19] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+240,"test_top exe0 shift_i_type genblk1[19] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[20] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+318,"test_top exe0 shift_i_type genblk1[20] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[20] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[20] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+241,"test_top exe0 shift_i_type genblk1[20] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[21] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+319,"test_top exe0 shift_i_type genblk1[21] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[21] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[21] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+242,"test_top exe0 shift_i_type genblk1[21] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[22] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+320,"test_top exe0 shift_i_type genblk1[22] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[22] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[22] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+243,"test_top exe0 shift_i_type genblk1[22] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[23] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+321,"test_top exe0 shift_i_type genblk1[23] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[23] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[23] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+244,"test_top exe0 shift_i_type genblk1[23] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[24] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+322,"test_top exe0 shift_i_type genblk1[24] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[24] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[24] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+245,"test_top exe0 shift_i_type genblk1[24] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[25] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+323,"test_top exe0 shift_i_type genblk1[25] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[25] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[25] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+246,"test_top exe0 shift_i_type genblk1[25] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[26] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+324,"test_top exe0 shift_i_type genblk1[26] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[26] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[26] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+247,"test_top exe0 shift_i_type genblk1[26] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[27] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+325,"test_top exe0 shift_i_type genblk1[27] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[27] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[27] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+248,"test_top exe0 shift_i_type genblk1[27] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[28] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+326,"test_top exe0 shift_i_type genblk1[28] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[28] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[28] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+249,"test_top exe0 shift_i_type genblk1[28] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[29] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+327,"test_top exe0 shift_i_type genblk1[29] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[29] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[29] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+250,"test_top exe0 shift_i_type genblk1[29] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[30] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+328,"test_top exe0 shift_i_type genblk1[30] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[30] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[30] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+251,"test_top exe0 shift_i_type genblk1[30] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk1[31] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+329,"test_top exe0 shift_i_type genblk1[31] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk1[31] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk1[31] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+252,"test_top exe0 shift_i_type genblk1[31] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[1] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+299,"test_top exe0 shift_i_type genblk2[1] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[1] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[1] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[1] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+253,"test_top exe0 shift_i_type genblk2[1] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[2] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+300,"test_top exe0 shift_i_type genblk2[2] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[2] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[2] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[2] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+254,"test_top exe0 shift_i_type genblk2[2] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[3] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+301,"test_top exe0 shift_i_type genblk2[3] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[3] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[3] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[3] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+255,"test_top exe0 shift_i_type genblk2[3] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[4] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+302,"test_top exe0 shift_i_type genblk2[4] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[4] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[4] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[4] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+256,"test_top exe0 shift_i_type genblk2[4] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[5] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+303,"test_top exe0 shift_i_type genblk2[5] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[5] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[5] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[5] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+257,"test_top exe0 shift_i_type genblk2[5] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[6] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+304,"test_top exe0 shift_i_type genblk2[6] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[6] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[6] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[6] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+258,"test_top exe0 shift_i_type genblk2[6] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[7] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+305,"test_top exe0 shift_i_type genblk2[7] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[7] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[7] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[7] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+259,"test_top exe0 shift_i_type genblk2[7] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[8] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+306,"test_top exe0 shift_i_type genblk2[8] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[8] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[8] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[8] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+260,"test_top exe0 shift_i_type genblk2[8] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[9] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+307,"test_top exe0 shift_i_type genblk2[9] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[9] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[9] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[9] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+261,"test_top exe0 shift_i_type genblk2[9] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[10] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+308,"test_top exe0 shift_i_type genblk2[10] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[10] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[10] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[10] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+262,"test_top exe0 shift_i_type genblk2[10] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[11] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+309,"test_top exe0 shift_i_type genblk2[11] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[11] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[11] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[11] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+263,"test_top exe0 shift_i_type genblk2[11] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[12] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+310,"test_top exe0 shift_i_type genblk2[12] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[12] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[12] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[12] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+264,"test_top exe0 shift_i_type genblk2[12] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[13] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+311,"test_top exe0 shift_i_type genblk2[13] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[13] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[13] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[13] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+265,"test_top exe0 shift_i_type genblk2[13] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[14] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+312,"test_top exe0 shift_i_type genblk2[14] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[14] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[14] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[14] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+266,"test_top exe0 shift_i_type genblk2[14] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[15] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+313,"test_top exe0 shift_i_type genblk2[15] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[15] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[15] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[15] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+267,"test_top exe0 shift_i_type genblk2[15] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[16] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+314,"test_top exe0 shift_i_type genblk2[16] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[16] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[16] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[16] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+268,"test_top exe0 shift_i_type genblk2[16] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[17] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+315,"test_top exe0 shift_i_type genblk2[17] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[17] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[17] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[17] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+269,"test_top exe0 shift_i_type genblk2[17] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[18] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+316,"test_top exe0 shift_i_type genblk2[18] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[18] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[18] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[18] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+270,"test_top exe0 shift_i_type genblk2[18] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[19] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+317,"test_top exe0 shift_i_type genblk2[19] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[19] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[19] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[19] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+271,"test_top exe0 shift_i_type genblk2[19] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[20] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+318,"test_top exe0 shift_i_type genblk2[20] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[20] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[20] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[20] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+272,"test_top exe0 shift_i_type genblk2[20] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[21] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+319,"test_top exe0 shift_i_type genblk2[21] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[21] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[21] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[21] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+273,"test_top exe0 shift_i_type genblk2[21] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[22] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+320,"test_top exe0 shift_i_type genblk2[22] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[22] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[22] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[22] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+274,"test_top exe0 shift_i_type genblk2[22] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[23] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+321,"test_top exe0 shift_i_type genblk2[23] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[23] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[23] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[23] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+275,"test_top exe0 shift_i_type genblk2[23] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[24] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+322,"test_top exe0 shift_i_type genblk2[24] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[24] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[24] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[24] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+276,"test_top exe0 shift_i_type genblk2[24] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[25] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+323,"test_top exe0 shift_i_type genblk2[25] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[25] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[25] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[25] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+277,"test_top exe0 shift_i_type genblk2[25] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[26] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+324,"test_top exe0 shift_i_type genblk2[26] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[26] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[26] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[26] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+278,"test_top exe0 shift_i_type genblk2[26] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[27] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+325,"test_top exe0 shift_i_type genblk2[27] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[27] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[27] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[27] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+279,"test_top exe0 shift_i_type genblk2[27] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[28] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+326,"test_top exe0 shift_i_type genblk2[28] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[28] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[28] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[28] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+280,"test_top exe0 shift_i_type genblk2[28] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[29] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+327,"test_top exe0 shift_i_type genblk2[29] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[29] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[29] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[29] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+281,"test_top exe0 shift_i_type genblk2[29] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[30] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+328,"test_top exe0 shift_i_type genblk2[30] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[30] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[30] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[30] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+282,"test_top exe0 shift_i_type genblk2[30] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_i_type genblk2[31] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+329,"test_top exe0 shift_i_type genblk2[31] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_i_type genblk2[31] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_i_type genblk2[31] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_i_type genblk2[31] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+283,"test_top exe0 shift_i_type genblk2[31] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type XLEN", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type value_i", false,-1, 31,0);
        tracep->declBus(c+214,"test_top exe0 shift_r_type shamt_i", false,-1, 4,0);
        tracep->declBit(c+179,"test_top exe0 shift_r_type direct_i", false,-1);
        tracep->declBit(c+180,"test_top exe0 shift_r_type arithmetic_i", false,-1);
        tracep->declBus(c+220,"test_top exe0 shift_r_type value_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+88+i*1,"test_top exe0 shift_r_type shift_l_temp", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+120+i*1,"test_top exe0 shift_r_type shift_r_temp", true,(i+0), 31,0);}}
        tracep->declBus(c+297,"test_top exe0 shift_r_type shift_l_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+298,"test_top exe0 shift_r_type shift_l_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type shift_l_cell_0 rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type shift_l_cell_0 value_i", false,-1, 31,0);
        tracep->declBus(c+221,"test_top exe0 shift_r_type shift_l_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type shift_r_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+298,"test_top exe0 shift_r_type shift_r_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type shift_r_cell_0 rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type shift_r_cell_0 value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type shift_r_cell_0 arithmetic_i", false,-1);
        tracep->declBus(c+221,"test_top exe0 shift_r_type shift_r_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[1] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+299,"test_top exe0 shift_r_type genblk1[1] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[1] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[1] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+222,"test_top exe0 shift_r_type genblk1[1] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[2] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+300,"test_top exe0 shift_r_type genblk1[2] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[2] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[2] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+223,"test_top exe0 shift_r_type genblk1[2] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[3] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+301,"test_top exe0 shift_r_type genblk1[3] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[3] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[3] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+224,"test_top exe0 shift_r_type genblk1[3] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[4] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+302,"test_top exe0 shift_r_type genblk1[4] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[4] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[4] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+225,"test_top exe0 shift_r_type genblk1[4] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[5] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+303,"test_top exe0 shift_r_type genblk1[5] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[5] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[5] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+226,"test_top exe0 shift_r_type genblk1[5] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[6] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+304,"test_top exe0 shift_r_type genblk1[6] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[6] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[6] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+227,"test_top exe0 shift_r_type genblk1[6] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[7] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+305,"test_top exe0 shift_r_type genblk1[7] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[7] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[7] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+228,"test_top exe0 shift_r_type genblk1[7] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[8] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+306,"test_top exe0 shift_r_type genblk1[8] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[8] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[8] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+229,"test_top exe0 shift_r_type genblk1[8] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[9] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+307,"test_top exe0 shift_r_type genblk1[9] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[9] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[9] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+230,"test_top exe0 shift_r_type genblk1[9] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[10] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+308,"test_top exe0 shift_r_type genblk1[10] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[10] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[10] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+231,"test_top exe0 shift_r_type genblk1[10] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[11] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+309,"test_top exe0 shift_r_type genblk1[11] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[11] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[11] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+232,"test_top exe0 shift_r_type genblk1[11] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[12] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+310,"test_top exe0 shift_r_type genblk1[12] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[12] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[12] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+233,"test_top exe0 shift_r_type genblk1[12] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[13] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+311,"test_top exe0 shift_r_type genblk1[13] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[13] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[13] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+234,"test_top exe0 shift_r_type genblk1[13] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[14] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+312,"test_top exe0 shift_r_type genblk1[14] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[14] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[14] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+235,"test_top exe0 shift_r_type genblk1[14] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[15] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+313,"test_top exe0 shift_r_type genblk1[15] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[15] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[15] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+236,"test_top exe0 shift_r_type genblk1[15] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[16] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+314,"test_top exe0 shift_r_type genblk1[16] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[16] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[16] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+237,"test_top exe0 shift_r_type genblk1[16] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[17] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+315,"test_top exe0 shift_r_type genblk1[17] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[17] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[17] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+238,"test_top exe0 shift_r_type genblk1[17] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[18] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+316,"test_top exe0 shift_r_type genblk1[18] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[18] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[18] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+239,"test_top exe0 shift_r_type genblk1[18] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[19] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+317,"test_top exe0 shift_r_type genblk1[19] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[19] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[19] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+240,"test_top exe0 shift_r_type genblk1[19] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[20] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+318,"test_top exe0 shift_r_type genblk1[20] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[20] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[20] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+241,"test_top exe0 shift_r_type genblk1[20] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[21] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+319,"test_top exe0 shift_r_type genblk1[21] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[21] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[21] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+242,"test_top exe0 shift_r_type genblk1[21] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[22] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+320,"test_top exe0 shift_r_type genblk1[22] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[22] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[22] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+243,"test_top exe0 shift_r_type genblk1[22] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[23] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+321,"test_top exe0 shift_r_type genblk1[23] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[23] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[23] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+244,"test_top exe0 shift_r_type genblk1[23] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[24] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+322,"test_top exe0 shift_r_type genblk1[24] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[24] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[24] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+245,"test_top exe0 shift_r_type genblk1[24] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[25] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+323,"test_top exe0 shift_r_type genblk1[25] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[25] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[25] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+246,"test_top exe0 shift_r_type genblk1[25] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[26] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+324,"test_top exe0 shift_r_type genblk1[26] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[26] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[26] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+247,"test_top exe0 shift_r_type genblk1[26] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[27] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+325,"test_top exe0 shift_r_type genblk1[27] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[27] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[27] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+248,"test_top exe0 shift_r_type genblk1[27] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[28] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+326,"test_top exe0 shift_r_type genblk1[28] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[28] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[28] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+249,"test_top exe0 shift_r_type genblk1[28] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[29] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+327,"test_top exe0 shift_r_type genblk1[29] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[29] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[29] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+250,"test_top exe0 shift_r_type genblk1[29] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[30] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+328,"test_top exe0 shift_r_type genblk1[30] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[30] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[30] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+251,"test_top exe0 shift_r_type genblk1[30] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk1[31] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+329,"test_top exe0 shift_r_type genblk1[31] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk1[31] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk1[31] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+252,"test_top exe0 shift_r_type genblk1[31] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[1] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+299,"test_top exe0 shift_r_type genblk2[1] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[1] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[1] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[1] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+253,"test_top exe0 shift_r_type genblk2[1] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[2] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+300,"test_top exe0 shift_r_type genblk2[2] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[2] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[2] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[2] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+254,"test_top exe0 shift_r_type genblk2[2] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[3] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+301,"test_top exe0 shift_r_type genblk2[3] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[3] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[3] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[3] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+255,"test_top exe0 shift_r_type genblk2[3] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[4] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+302,"test_top exe0 shift_r_type genblk2[4] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[4] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[4] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[4] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+256,"test_top exe0 shift_r_type genblk2[4] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[5] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+303,"test_top exe0 shift_r_type genblk2[5] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[5] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[5] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[5] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+257,"test_top exe0 shift_r_type genblk2[5] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[6] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+304,"test_top exe0 shift_r_type genblk2[6] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[6] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[6] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[6] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+258,"test_top exe0 shift_r_type genblk2[6] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[7] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+305,"test_top exe0 shift_r_type genblk2[7] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[7] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[7] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[7] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+259,"test_top exe0 shift_r_type genblk2[7] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[8] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+306,"test_top exe0 shift_r_type genblk2[8] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[8] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[8] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[8] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+260,"test_top exe0 shift_r_type genblk2[8] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[9] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+307,"test_top exe0 shift_r_type genblk2[9] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[9] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[9] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[9] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+261,"test_top exe0 shift_r_type genblk2[9] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[10] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+308,"test_top exe0 shift_r_type genblk2[10] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[10] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[10] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[10] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+262,"test_top exe0 shift_r_type genblk2[10] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[11] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+309,"test_top exe0 shift_r_type genblk2[11] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[11] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[11] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[11] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+263,"test_top exe0 shift_r_type genblk2[11] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[12] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+310,"test_top exe0 shift_r_type genblk2[12] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[12] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[12] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[12] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+264,"test_top exe0 shift_r_type genblk2[12] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[13] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+311,"test_top exe0 shift_r_type genblk2[13] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[13] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[13] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[13] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+265,"test_top exe0 shift_r_type genblk2[13] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[14] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+312,"test_top exe0 shift_r_type genblk2[14] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[14] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[14] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[14] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+266,"test_top exe0 shift_r_type genblk2[14] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[15] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+313,"test_top exe0 shift_r_type genblk2[15] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[15] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[15] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[15] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+267,"test_top exe0 shift_r_type genblk2[15] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[16] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+314,"test_top exe0 shift_r_type genblk2[16] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[16] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[16] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[16] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+268,"test_top exe0 shift_r_type genblk2[16] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[17] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+315,"test_top exe0 shift_r_type genblk2[17] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[17] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[17] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[17] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+269,"test_top exe0 shift_r_type genblk2[17] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[18] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+316,"test_top exe0 shift_r_type genblk2[18] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[18] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[18] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[18] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+270,"test_top exe0 shift_r_type genblk2[18] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[19] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+317,"test_top exe0 shift_r_type genblk2[19] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[19] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[19] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[19] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+271,"test_top exe0 shift_r_type genblk2[19] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[20] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+318,"test_top exe0 shift_r_type genblk2[20] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[20] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[20] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[20] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+272,"test_top exe0 shift_r_type genblk2[20] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[21] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+319,"test_top exe0 shift_r_type genblk2[21] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[21] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[21] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[21] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+273,"test_top exe0 shift_r_type genblk2[21] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[22] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+320,"test_top exe0 shift_r_type genblk2[22] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[22] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[22] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[22] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+274,"test_top exe0 shift_r_type genblk2[22] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[23] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+321,"test_top exe0 shift_r_type genblk2[23] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[23] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[23] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[23] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+275,"test_top exe0 shift_r_type genblk2[23] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[24] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+322,"test_top exe0 shift_r_type genblk2[24] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[24] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[24] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[24] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+276,"test_top exe0 shift_r_type genblk2[24] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[25] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+323,"test_top exe0 shift_r_type genblk2[25] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[25] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[25] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[25] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+277,"test_top exe0 shift_r_type genblk2[25] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[26] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+324,"test_top exe0 shift_r_type genblk2[26] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[26] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[26] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[26] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+278,"test_top exe0 shift_r_type genblk2[26] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[27] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+325,"test_top exe0 shift_r_type genblk2[27] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[27] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[27] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[27] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+279,"test_top exe0 shift_r_type genblk2[27] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[28] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+326,"test_top exe0 shift_r_type genblk2[28] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[28] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[28] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[28] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+280,"test_top exe0 shift_r_type genblk2[28] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[29] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+327,"test_top exe0 shift_r_type genblk2[29] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[29] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[29] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[29] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+281,"test_top exe0 shift_r_type genblk2[29] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[30] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+328,"test_top exe0 shift_r_type genblk2[30] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[30] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[30] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[30] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+282,"test_top exe0 shift_r_type genblk2[30] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+297,"test_top exe0 shift_r_type genblk2[31] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+329,"test_top exe0 shift_r_type genblk2[31] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+215,"test_top exe0 shift_r_type genblk2[31] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+157,"test_top exe0 shift_r_type genblk2[31] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+180,"test_top exe0 shift_r_type genblk2[31] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+283,"test_top exe0 shift_r_type genblk2[31] shift_r_sell_n value_o", false,-1, 31,0);
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
        tracep->fullIData(oldp+1,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
        tracep->fullBit(oldp+3,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
        tracep->fullCData(oldp+4,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
        tracep->fullCData(oldp+5,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        tracep->fullCData(oldp+6,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        tracep->fullBit(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        tracep->fullBit(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        tracep->fullIData(oldp+9,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
        tracep->fullCData(oldp+11,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        tracep->fullBit(oldp+12,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        tracep->fullIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        tracep->fullCData(oldp+14,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        tracep->fullBit(oldp+15,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        tracep->fullIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_i),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub_type_r),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__ram_addr_o),32);
        tracep->fullBit(oldp+22,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__ram_w_request_o));
        tracep->fullIData(oldp+23,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__ram_data_o),32);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[0]),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[1]),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[2]),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[3]),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[4]),32);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[5]),32);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[6]),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[7]),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[8]),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[9]),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[10]),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[11]),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[12]),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[13]),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[14]),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[15]),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[16]),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[17]),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[18]),32);
        tracep->fullIData(oldp+43,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[19]),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[20]),32);
        tracep->fullIData(oldp+45,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[21]),32);
        tracep->fullIData(oldp+46,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[22]),32);
        tracep->fullIData(oldp+47,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[23]),32);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[24]),32);
        tracep->fullIData(oldp+49,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[25]),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[26]),32);
        tracep->fullIData(oldp+51,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[27]),32);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[28]),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[29]),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[30]),32);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_l_temp[31]),32);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[0]),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[1]),32);
        tracep->fullIData(oldp+58,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[2]),32);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[3]),32);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[4]),32);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[5]),32);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[6]),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[7]),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[8]),32);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[9]),32);
        tracep->fullIData(oldp+66,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[10]),32);
        tracep->fullIData(oldp+67,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[11]),32);
        tracep->fullIData(oldp+68,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[12]),32);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[13]),32);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[14]),32);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[15]),32);
        tracep->fullIData(oldp+72,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[16]),32);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[17]),32);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[18]),32);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[19]),32);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[20]),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[21]),32);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[22]),32);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[23]),32);
        tracep->fullIData(oldp+80,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[24]),32);
        tracep->fullIData(oldp+81,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[25]),32);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[26]),32);
        tracep->fullIData(oldp+83,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[27]),32);
        tracep->fullIData(oldp+84,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[28]),32);
        tracep->fullIData(oldp+85,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[29]),32);
        tracep->fullIData(oldp+86,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[30]),32);
        tracep->fullIData(oldp+87,(vlSymsp->TOP__test_top__exe0__DOT__shift_i_type.__PVT__shift_r_temp[31]),32);
        tracep->fullIData(oldp+88,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[0]),32);
        tracep->fullIData(oldp+89,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[1]),32);
        tracep->fullIData(oldp+90,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[2]),32);
        tracep->fullIData(oldp+91,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[3]),32);
        tracep->fullIData(oldp+92,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[4]),32);
        tracep->fullIData(oldp+93,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[5]),32);
        tracep->fullIData(oldp+94,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[6]),32);
        tracep->fullIData(oldp+95,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[7]),32);
        tracep->fullIData(oldp+96,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[8]),32);
        tracep->fullIData(oldp+97,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[9]),32);
        tracep->fullIData(oldp+98,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[10]),32);
        tracep->fullIData(oldp+99,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[11]),32);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[12]),32);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[13]),32);
        tracep->fullIData(oldp+102,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[14]),32);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[15]),32);
        tracep->fullIData(oldp+104,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[16]),32);
        tracep->fullIData(oldp+105,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[17]),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[18]),32);
        tracep->fullIData(oldp+107,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[19]),32);
        tracep->fullIData(oldp+108,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[20]),32);
        tracep->fullIData(oldp+109,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[21]),32);
        tracep->fullIData(oldp+110,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[22]),32);
        tracep->fullIData(oldp+111,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[23]),32);
        tracep->fullIData(oldp+112,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[24]),32);
        tracep->fullIData(oldp+113,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[25]),32);
        tracep->fullIData(oldp+114,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[26]),32);
        tracep->fullIData(oldp+115,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[27]),32);
        tracep->fullIData(oldp+116,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[28]),32);
        tracep->fullIData(oldp+117,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[29]),32);
        tracep->fullIData(oldp+118,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[30]),32);
        tracep->fullIData(oldp+119,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp[31]),32);
        tracep->fullIData(oldp+120,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[0]),32);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[1]),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[2]),32);
        tracep->fullIData(oldp+123,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[3]),32);
        tracep->fullIData(oldp+124,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[4]),32);
        tracep->fullIData(oldp+125,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[5]),32);
        tracep->fullIData(oldp+126,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[6]),32);
        tracep->fullIData(oldp+127,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[7]),32);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[8]),32);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[9]),32);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[10]),32);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[11]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[12]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[13]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[14]),32);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[15]),32);
        tracep->fullIData(oldp+136,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[16]),32);
        tracep->fullIData(oldp+137,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[17]),32);
        tracep->fullIData(oldp+138,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[18]),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[19]),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[20]),32);
        tracep->fullIData(oldp+141,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[21]),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[22]),32);
        tracep->fullIData(oldp+143,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[23]),32);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[24]),32);
        tracep->fullIData(oldp+145,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[25]),32);
        tracep->fullIData(oldp+146,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[26]),32);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[27]),32);
        tracep->fullIData(oldp+148,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[28]),32);
        tracep->fullIData(oldp+149,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[29]),32);
        tracep->fullIData(oldp+150,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[30]),32);
        tracep->fullIData(oldp+151,(vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp[31]),32);
        tracep->fullIData(oldp+152,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        tracep->fullBit(oldp+153,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        tracep->fullIData(oldp+154,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
        tracep->fullIData(oldp+155,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+156,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        tracep->fullIData(oldp+157,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+159,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+160,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+161,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        tracep->fullCData(oldp+162,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        tracep->fullBit(oldp+163,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        tracep->fullIData(oldp+164,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        tracep->fullCData(oldp+165,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        tracep->fullBit(oldp+166,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        tracep->fullIData(oldp+167,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        tracep->fullCData(oldp+168,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+169,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 7U))),5);
        tracep->fullCData(oldp+170,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+171,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+172,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
        tracep->fullCData(oldp+173,((0x1fU & ((0x4000U 
                                               & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? ((0x2000U 
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
                                               : ((0x2000U 
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
        tracep->fullCData(oldp+174,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+175,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        tracep->fullCData(oldp+176,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+177,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x19U))),7);
        tracep->fullCData(oldp+178,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+179,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                         >> 0xeU))));
        tracep->fullBit(oldp+180,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                         >> 0x1eU))));
        tracep->fullIData(oldp+181,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        tracep->fullIData(oldp+187,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        tracep->fullIData(oldp+191,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        tracep->fullIData(oldp+192,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        tracep->fullIData(oldp+193,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        tracep->fullIData(oldp+195,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        tracep->fullIData(oldp+196,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        tracep->fullIData(oldp+197,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        tracep->fullIData(oldp+198,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        tracep->fullIData(oldp+199,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        tracep->fullIData(oldp+200,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        tracep->fullIData(oldp+201,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        tracep->fullIData(oldp+202,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        tracep->fullIData(oldp+203,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        tracep->fullIData(oldp+204,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        tracep->fullIData(oldp+205,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        tracep->fullIData(oldp+206,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        tracep->fullIData(oldp+208,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        tracep->fullIData(oldp+209,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        tracep->fullIData(oldp+210,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        tracep->fullIData(oldp+211,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        tracep->fullIData(oldp+213,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        tracep->fullCData(oldp+214,((0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)),5);
        tracep->fullBit(oldp+215,(vlTOPp->rst_i));
        tracep->fullBit(oldp+216,(vlTOPp->clk_i));
        tracep->fullIData(oldp+217,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                               ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                               : ((
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                   : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final)))),32);
        tracep->fullIData(oldp+218,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                               ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                               : ((
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                   : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final)))),32);
        tracep->fullIData(oldp+219,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+220,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x4000U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_r_temp
                                              [(0x1fU 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]
                                               : vlSymsp->TOP__test_top__exe0__DOT__shift_r_type.__PVT__shift_l_temp
                                              [(0x1fU 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)]))),32);
        tracep->fullIData(oldp+221,(((IData)(vlTOPp->rst_i)
                                      ? 0U : vlSymsp->TOP__test_top.__PVT__id_exe_op1_o)),32);
        tracep->fullIData(oldp+222,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffeU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 1U)))),32);
        tracep->fullIData(oldp+223,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffcU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 2U)))),32);
        tracep->fullIData(oldp+224,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff8U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 3U)))),32);
        tracep->fullIData(oldp+225,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff0U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 4U)))),32);
        tracep->fullIData(oldp+226,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffe0U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 5U)))),32);
        tracep->fullIData(oldp+227,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffc0U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 6U)))),32);
        tracep->fullIData(oldp+228,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff80U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 7U)))),32);
        tracep->fullIData(oldp+229,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff00U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 8U)))),32);
        tracep->fullIData(oldp+230,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffe00U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 9U)))),32);
        tracep->fullIData(oldp+231,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffc00U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xaU)))),32);
        tracep->fullIData(oldp+232,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff800U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xbU)))),32);
        tracep->fullIData(oldp+233,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xcU)))),32);
        tracep->fullIData(oldp+234,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffe000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xdU)))),32);
        tracep->fullIData(oldp+235,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffc000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xeU)))),32);
        tracep->fullIData(oldp+236,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff8000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xfU)))),32);
        tracep->fullIData(oldp+237,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff0000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x10U)))),32);
        tracep->fullIData(oldp+238,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffe0000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x11U)))),32);
        tracep->fullIData(oldp+239,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffc0000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x12U)))),32);
        tracep->fullIData(oldp+240,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff80000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x13U)))),32);
        tracep->fullIData(oldp+241,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff00000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x14U)))),32);
        tracep->fullIData(oldp+242,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffe00000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x15U)))),32);
        tracep->fullIData(oldp+243,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffc00000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x16U)))),32);
        tracep->fullIData(oldp+244,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff800000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x17U)))),32);
        tracep->fullIData(oldp+245,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x18U)))),32);
        tracep->fullIData(oldp+246,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfe000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x19U)))),32);
        tracep->fullIData(oldp+247,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfc000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1aU)))),32);
        tracep->fullIData(oldp+248,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf8000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1bU)))),32);
        tracep->fullIData(oldp+249,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf0000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1cU)))),32);
        tracep->fullIData(oldp+250,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xe0000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1dU)))),32);
        tracep->fullIData(oldp+251,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xc0000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1eU)))),32);
        tracep->fullIData(oldp+252,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0x80000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1fU)))),32);
        tracep->fullIData(oldp+253,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+254,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+255,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+256,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+257,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+258,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+259,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+260,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+261,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+262,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+263,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+264,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+265,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+266,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+267,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+268,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+269,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+270,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+271,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+272,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+273,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+274,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+275,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+276,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+277,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+278,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+279,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+280,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+281,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+282,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+283,(((IData)(vlTOPp->rst_i)
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
        tracep->fullCData(oldp+284,(0U),5);
        tracep->fullBit(oldp+285,(1U));
        tracep->fullBit(oldp+286,(0U));
        tracep->fullIData(oldp+287,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__ram_data_i),32);
        tracep->fullBit(oldp+288,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_we_i));
        tracep->fullIData(oldp+289,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_addr_i),32);
        tracep->fullIData(oldp+290,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_data_i),32);
        tracep->fullCData(oldp+291,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_op_i),4);
        tracep->fullBit(oldp+292,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_we_o));
        tracep->fullIData(oldp+293,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_addr_o),32);
        tracep->fullIData(oldp+294,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_data_o),32);
        tracep->fullCData(oldp+295,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_op_o),4);
        tracep->fullCData(oldp+296,((3U & vlSymsp->TOP__test_top.__PVT__mem0__DOT__mem_addr_i)),2);
        tracep->fullIData(oldp+297,(0x20U),32);
        tracep->fullIData(oldp+298,(0U),32);
        tracep->fullIData(oldp+299,(1U),32);
        tracep->fullIData(oldp+300,(2U),32);
        tracep->fullIData(oldp+301,(3U),32);
        tracep->fullIData(oldp+302,(4U),32);
        tracep->fullIData(oldp+303,(5U),32);
        tracep->fullIData(oldp+304,(6U),32);
        tracep->fullIData(oldp+305,(7U),32);
        tracep->fullIData(oldp+306,(8U),32);
        tracep->fullIData(oldp+307,(9U),32);
        tracep->fullIData(oldp+308,(0xaU),32);
        tracep->fullIData(oldp+309,(0xbU),32);
        tracep->fullIData(oldp+310,(0xcU),32);
        tracep->fullIData(oldp+311,(0xdU),32);
        tracep->fullIData(oldp+312,(0xeU),32);
        tracep->fullIData(oldp+313,(0xfU),32);
        tracep->fullIData(oldp+314,(0x10U),32);
        tracep->fullIData(oldp+315,(0x11U),32);
        tracep->fullIData(oldp+316,(0x12U),32);
        tracep->fullIData(oldp+317,(0x13U),32);
        tracep->fullIData(oldp+318,(0x14U),32);
        tracep->fullIData(oldp+319,(0x15U),32);
        tracep->fullIData(oldp+320,(0x16U),32);
        tracep->fullIData(oldp+321,(0x17U),32);
        tracep->fullIData(oldp+322,(0x18U),32);
        tracep->fullIData(oldp+323,(0x19U),32);
        tracep->fullIData(oldp+324,(0x1aU),32);
        tracep->fullIData(oldp+325,(0x1bU),32);
        tracep->fullIData(oldp+326,(0x1cU),32);
        tracep->fullIData(oldp+327,(0x1dU),32);
        tracep->fullIData(oldp+328,(0x1eU),32);
        tracep->fullIData(oldp+329,(0x1fU),32);
    }
}
