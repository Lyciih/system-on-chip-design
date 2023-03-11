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
        tracep->declBit(c+140,"rst_i", false,-1);
        tracep->declBit(c+141,"clk_i", false,-1);
        tracep->declBit(c+140,"test_top rst_i", false,-1);
        tracep->declBit(c+141,"test_top clk_i", false,-1);
        tracep->declBus(c+4,"test_top pc_wire", false,-1, 31,0);
        tracep->declBit(c+5,"test_top ce_wire", false,-1);
        tracep->declBus(c+4,"test_top if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+6,"test_top if_inst_o", false,-1, 31,0);
        tracep->declBus(c+7,"test_top if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+8,"test_top if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+142,"test_top id_inst_o", false,-1, 31,0);
        tracep->declBus(c+143,"test_top id_op1_o", false,-1, 31,0);
        tracep->declBus(c+144,"test_top id_op2_o", false,-1, 31,0);
        tracep->declBit(c+145,"test_top id_reg_we_o", false,-1);
        tracep->declBus(c+146,"test_top id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+66,"test_top id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+1,"test_top id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+67,"test_top id_reg1_re_o", false,-1);
        tracep->declBit(c+2,"test_top id_reg2_re_o", false,-1);
        tracep->declBus(c+147,"test_top reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+9,"test_top reg2_data_o", false,-1, 31,0);
        tracep->declBus(c+10,"test_top id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+11,"test_top id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+12,"test_top id_exe_reg_we_o", false,-1);
        tracep->declBus(c+13,"test_top id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+14,"test_top id_exe_inst_o", false,-1, 31,0);
        tracep->declBus(c+68,"test_top exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+69,"test_top exe_reg_we_o", false,-1);
        tracep->declBus(c+70,"test_top exe_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+15,"test_top exe_mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+16,"test_top exe_mem_reg_we_o", false,-1);
        tracep->declBus(c+17,"test_top exe_mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+71,"test_top mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+72,"test_top mem_reg_we_o", false,-1);
        tracep->declBus(c+73,"test_top mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+18,"test_top mem_wb_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+19,"test_top mem_wb_reg_we_o", false,-1);
        tracep->declBus(c+20,"test_top mem_wb_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+141,"test_top pc_reg0 clk_i", false,-1);
        tracep->declBit(c+140,"test_top pc_reg0 rst_i", false,-1);
        tracep->declBus(c+4,"test_top pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+5,"test_top pc_reg0 ce_o", false,-1);
        tracep->declBit(c+141,"test_top if_id0 clk_i", false,-1);
        tracep->declBit(c+140,"test_top if_id0 rst_i", false,-1);
        tracep->declBus(c+4,"test_top if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+6,"test_top if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+7,"test_top if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+8,"test_top if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+140,"test_top id0 rst_i", false,-1);
        tracep->declBus(c+7,"test_top id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+8,"test_top id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+147,"test_top id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+9,"test_top id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+68,"test_top id0 exe_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+69,"test_top id0 exe_reg_we_i", false,-1);
        tracep->declBus(c+70,"test_top id0 exe_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+71,"test_top id0 mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+72,"test_top id0 mem_reg_we_i", false,-1);
        tracep->declBus(c+73,"test_top id0 mem_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+66,"test_top id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+1,"test_top id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+67,"test_top id0 reg1_re_o", false,-1);
        tracep->declBit(c+2,"test_top id0 reg2_re_o", false,-1);
        tracep->declBus(c+142,"test_top id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+143,"test_top id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+144,"test_top id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+145,"test_top id0 reg_we_o", false,-1);
        tracep->declBus(c+146,"test_top id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+148,"test_top id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+149,"test_top id0 op2_o_final", false,-1, 31,0);
        tracep->declBus(c+21,"test_top id0 opcode", false,-1, 6,0);
        tracep->declBus(c+22,"test_top id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+213,"test_top id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+214,"test_top id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+215,"test_top id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+147,"test_top id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+23,"test_top id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+214,"test_top id0 i_reg_we_o", false,-1);
        tracep->declBus(c+24,"test_top id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+8,"test_top id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+147,"test_top id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+9,"test_top id0 inst_type_i reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+22,"test_top id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+213,"test_top id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+214,"test_top id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+215,"test_top id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+147,"test_top id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+23,"test_top id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+214,"test_top id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+24,"test_top id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+25,"test_top id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+26,"test_top id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+22,"test_top id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBit(c+140,"test_top id_exe0 rst_i", false,-1);
        tracep->declBit(c+141,"test_top id_exe0 clk_i", false,-1);
        tracep->declBus(c+143,"test_top id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+144,"test_top id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+145,"test_top id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+146,"test_top id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+142,"test_top id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+10,"test_top id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+11,"test_top id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+12,"test_top id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+13,"test_top id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+14,"test_top id_exe0 inst_o", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+12,"test_top exe0 reg_we_i", false,-1);
        tracep->declBus(c+13,"test_top exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+14,"test_top exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+68,"test_top exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+69,"test_top exe0 reg_we_o", false,-1);
        tracep->declBus(c+70,"test_top exe0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+27,"test_top exe0 opcode", false,-1, 6,0);
        tracep->declBus(c+28,"test_top exe0 funct3", false,-1, 2,0);
        tracep->declBus(c+29,"test_top exe0 funct7", false,-1, 6,0);
        tracep->declBus(c+30,"test_top exe0 shamt", false,-1, 4,0);
        tracep->declBit(c+31,"test_top exe0 direct", false,-1);
        tracep->declBit(c+32,"test_top exe0 arithmetic", false,-1);
        tracep->declBus(c+74,"test_top exe0 shift_result", false,-1, 31,0);
        tracep->declBus(c+75,"test_top exe0 compare_sub", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 XLEN", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 value_i", false,-1, 31,0);
        tracep->declBus(c+30,"test_top exe0 shift0 shamt_i", false,-1, 4,0);
        tracep->declBit(c+31,"test_top exe0 shift0 direct_i", false,-1);
        tracep->declBit(c+32,"test_top exe0 shift0 arithmetic_i", false,-1);
        tracep->declBus(c+74,"test_top exe0 shift0 value_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+76+i*1,"test_top exe0 shift0 shift_l_temp", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+108+i*1,"test_top exe0 shift0 shift_r_temp", true,(i+0), 31,0);}}
        tracep->declBus(c+216,"test_top exe0 shift0 shift_l_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+217,"test_top exe0 shift0 shift_l_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 shift_l_cell_0 rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 shift_l_cell_0 value_i", false,-1, 31,0);
        tracep->declBus(c+150,"test_top exe0 shift0 shift_l_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 shift_r_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+217,"test_top exe0 shift0 shift_r_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 shift_r_cell_0 rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 shift_r_cell_0 value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 shift_r_cell_0 arithmetic_i", false,-1);
        tracep->declBus(c+150,"test_top exe0 shift0 shift_r_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[1] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+218,"test_top exe0 shift0 genblk1[1] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[1] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[1] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+151,"test_top exe0 shift0 genblk1[1] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[2] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+219,"test_top exe0 shift0 genblk1[2] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[2] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[2] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+152,"test_top exe0 shift0 genblk1[2] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[3] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+220,"test_top exe0 shift0 genblk1[3] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[3] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[3] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+153,"test_top exe0 shift0 genblk1[3] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[4] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+221,"test_top exe0 shift0 genblk1[4] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[4] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[4] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+154,"test_top exe0 shift0 genblk1[4] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[5] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+222,"test_top exe0 shift0 genblk1[5] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[5] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[5] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+155,"test_top exe0 shift0 genblk1[5] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[6] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+223,"test_top exe0 shift0 genblk1[6] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[6] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[6] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+156,"test_top exe0 shift0 genblk1[6] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[7] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+224,"test_top exe0 shift0 genblk1[7] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[7] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[7] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+157,"test_top exe0 shift0 genblk1[7] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[8] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+225,"test_top exe0 shift0 genblk1[8] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[8] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[8] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+158,"test_top exe0 shift0 genblk1[8] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[9] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+226,"test_top exe0 shift0 genblk1[9] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[9] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[9] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+159,"test_top exe0 shift0 genblk1[9] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[10] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+227,"test_top exe0 shift0 genblk1[10] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[10] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[10] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+160,"test_top exe0 shift0 genblk1[10] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[11] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+228,"test_top exe0 shift0 genblk1[11] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[11] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[11] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+161,"test_top exe0 shift0 genblk1[11] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[12] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+229,"test_top exe0 shift0 genblk1[12] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[12] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[12] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+162,"test_top exe0 shift0 genblk1[12] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[13] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+230,"test_top exe0 shift0 genblk1[13] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[13] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[13] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+163,"test_top exe0 shift0 genblk1[13] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[14] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+231,"test_top exe0 shift0 genblk1[14] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[14] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[14] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+164,"test_top exe0 shift0 genblk1[14] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[15] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+232,"test_top exe0 shift0 genblk1[15] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[15] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[15] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+165,"test_top exe0 shift0 genblk1[15] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[16] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+233,"test_top exe0 shift0 genblk1[16] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[16] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[16] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+166,"test_top exe0 shift0 genblk1[16] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[17] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+234,"test_top exe0 shift0 genblk1[17] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[17] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[17] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+167,"test_top exe0 shift0 genblk1[17] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[18] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+235,"test_top exe0 shift0 genblk1[18] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[18] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[18] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+168,"test_top exe0 shift0 genblk1[18] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[19] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+236,"test_top exe0 shift0 genblk1[19] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[19] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[19] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+169,"test_top exe0 shift0 genblk1[19] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[20] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+237,"test_top exe0 shift0 genblk1[20] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[20] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[20] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+170,"test_top exe0 shift0 genblk1[20] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[21] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+238,"test_top exe0 shift0 genblk1[21] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[21] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[21] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+171,"test_top exe0 shift0 genblk1[21] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[22] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+239,"test_top exe0 shift0 genblk1[22] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[22] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[22] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+172,"test_top exe0 shift0 genblk1[22] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[23] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+240,"test_top exe0 shift0 genblk1[23] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[23] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[23] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+173,"test_top exe0 shift0 genblk1[23] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[24] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+241,"test_top exe0 shift0 genblk1[24] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[24] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[24] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+174,"test_top exe0 shift0 genblk1[24] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[25] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+242,"test_top exe0 shift0 genblk1[25] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[25] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[25] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+175,"test_top exe0 shift0 genblk1[25] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[26] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+243,"test_top exe0 shift0 genblk1[26] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[26] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[26] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+176,"test_top exe0 shift0 genblk1[26] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[27] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+244,"test_top exe0 shift0 genblk1[27] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[27] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[27] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+177,"test_top exe0 shift0 genblk1[27] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[28] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+245,"test_top exe0 shift0 genblk1[28] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[28] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[28] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+178,"test_top exe0 shift0 genblk1[28] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[29] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+246,"test_top exe0 shift0 genblk1[29] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[29] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[29] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+179,"test_top exe0 shift0 genblk1[29] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[30] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+247,"test_top exe0 shift0 genblk1[30] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[30] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[30] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+180,"test_top exe0 shift0 genblk1[30] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk1[31] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+248,"test_top exe0 shift0 genblk1[31] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk1[31] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk1[31] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+181,"test_top exe0 shift0 genblk1[31] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[1] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+218,"test_top exe0 shift0 genblk2[1] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[1] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[1] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[1] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+182,"test_top exe0 shift0 genblk2[1] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[2] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+219,"test_top exe0 shift0 genblk2[2] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[2] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[2] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[2] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+183,"test_top exe0 shift0 genblk2[2] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[3] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+220,"test_top exe0 shift0 genblk2[3] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[3] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[3] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[3] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+184,"test_top exe0 shift0 genblk2[3] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[4] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+221,"test_top exe0 shift0 genblk2[4] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[4] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[4] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[4] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+185,"test_top exe0 shift0 genblk2[4] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[5] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+222,"test_top exe0 shift0 genblk2[5] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[5] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[5] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[5] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+186,"test_top exe0 shift0 genblk2[5] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[6] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+223,"test_top exe0 shift0 genblk2[6] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[6] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[6] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[6] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+187,"test_top exe0 shift0 genblk2[6] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[7] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+224,"test_top exe0 shift0 genblk2[7] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[7] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[7] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[7] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+188,"test_top exe0 shift0 genblk2[7] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[8] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+225,"test_top exe0 shift0 genblk2[8] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[8] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[8] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[8] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+189,"test_top exe0 shift0 genblk2[8] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[9] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+226,"test_top exe0 shift0 genblk2[9] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[9] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[9] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[9] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+190,"test_top exe0 shift0 genblk2[9] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[10] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+227,"test_top exe0 shift0 genblk2[10] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[10] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[10] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[10] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+191,"test_top exe0 shift0 genblk2[10] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[11] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+228,"test_top exe0 shift0 genblk2[11] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[11] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[11] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[11] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+192,"test_top exe0 shift0 genblk2[11] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[12] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+229,"test_top exe0 shift0 genblk2[12] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[12] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[12] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[12] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+193,"test_top exe0 shift0 genblk2[12] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[13] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+230,"test_top exe0 shift0 genblk2[13] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[13] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[13] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[13] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+194,"test_top exe0 shift0 genblk2[13] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[14] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+231,"test_top exe0 shift0 genblk2[14] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[14] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[14] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[14] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+195,"test_top exe0 shift0 genblk2[14] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[15] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+232,"test_top exe0 shift0 genblk2[15] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[15] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[15] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[15] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+196,"test_top exe0 shift0 genblk2[15] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[16] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+233,"test_top exe0 shift0 genblk2[16] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[16] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[16] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[16] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+197,"test_top exe0 shift0 genblk2[16] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[17] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+234,"test_top exe0 shift0 genblk2[17] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[17] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[17] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[17] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+198,"test_top exe0 shift0 genblk2[17] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[18] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+235,"test_top exe0 shift0 genblk2[18] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[18] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[18] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[18] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+199,"test_top exe0 shift0 genblk2[18] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[19] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+236,"test_top exe0 shift0 genblk2[19] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[19] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[19] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[19] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+200,"test_top exe0 shift0 genblk2[19] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[20] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+237,"test_top exe0 shift0 genblk2[20] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[20] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[20] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[20] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+201,"test_top exe0 shift0 genblk2[20] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[21] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+238,"test_top exe0 shift0 genblk2[21] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[21] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[21] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[21] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+202,"test_top exe0 shift0 genblk2[21] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[22] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+239,"test_top exe0 shift0 genblk2[22] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[22] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[22] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[22] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+203,"test_top exe0 shift0 genblk2[22] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[23] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+240,"test_top exe0 shift0 genblk2[23] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[23] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[23] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[23] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+204,"test_top exe0 shift0 genblk2[23] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[24] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+241,"test_top exe0 shift0 genblk2[24] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[24] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[24] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[24] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+205,"test_top exe0 shift0 genblk2[24] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[25] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+242,"test_top exe0 shift0 genblk2[25] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[25] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[25] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[25] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+206,"test_top exe0 shift0 genblk2[25] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[26] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+243,"test_top exe0 shift0 genblk2[26] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[26] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[26] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[26] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+207,"test_top exe0 shift0 genblk2[26] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[27] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+244,"test_top exe0 shift0 genblk2[27] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[27] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[27] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[27] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+208,"test_top exe0 shift0 genblk2[27] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[28] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+245,"test_top exe0 shift0 genblk2[28] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[28] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[28] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[28] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+209,"test_top exe0 shift0 genblk2[28] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[29] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+246,"test_top exe0 shift0 genblk2[29] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[29] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[29] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[29] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+210,"test_top exe0 shift0 genblk2[29] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[30] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+247,"test_top exe0 shift0 genblk2[30] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[30] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[30] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[30] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+211,"test_top exe0 shift0 genblk2[30] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+216,"test_top exe0 shift0 genblk2[31] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+248,"test_top exe0 shift0 genblk2[31] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe0 shift0 genblk2[31] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 shift0 genblk2[31] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+32,"test_top exe0 shift0 genblk2[31] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+212,"test_top exe0 shift0 genblk2[31] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBit(c+140,"test_top exe_mem0 rst_i", false,-1);
        tracep->declBit(c+141,"test_top exe_mem0 clk_i", false,-1);
        tracep->declBus(c+68,"test_top exe_mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+69,"test_top exe_mem0 reg_we_i", false,-1);
        tracep->declBus(c+70,"test_top exe_mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+15,"test_top exe_mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+16,"test_top exe_mem0 reg_we_o", false,-1);
        tracep->declBus(c+17,"test_top exe_mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+140,"test_top mem0 rst_i", false,-1);
        tracep->declBus(c+15,"test_top mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+16,"test_top mem0 reg_we_i", false,-1);
        tracep->declBus(c+17,"test_top mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+71,"test_top mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+72,"test_top mem0 reg_we_o", false,-1);
        tracep->declBus(c+73,"test_top mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+140,"test_top mem_wb0 rst_i", false,-1);
        tracep->declBit(c+141,"test_top mem_wb0 clk_i", false,-1);
        tracep->declBus(c+71,"test_top mem_wb0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+72,"test_top mem_wb0 reg_we_i", false,-1);
        tracep->declBus(c+73,"test_top mem_wb0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+18,"test_top mem_wb0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+19,"test_top mem_wb0 reg_we_o", false,-1);
        tracep->declBus(c+20,"test_top mem_wb0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+141,"test_top rom0 clk_i", false,-1);
        tracep->declBit(c+5,"test_top rom0 ce_i", false,-1);
        tracep->declBus(c+4,"test_top rom0 addr_i", false,-1, 31,0);
        tracep->declBus(c+6,"test_top rom0 inst_o", false,-1, 31,0);
        tracep->declBus(c+33,"test_top rom0 addr4", false,-1, 20,0);
        tracep->declBit(c+141,"test_top regfile0 clk_i", false,-1);
        tracep->declBit(c+140,"test_top regfile0 rst_i", false,-1);
        tracep->declBit(c+19,"test_top regfile0 we_i", false,-1);
        tracep->declBus(c+18,"test_top regfile0 waddr_i", false,-1, 4,0);
        tracep->declBus(c+20,"test_top regfile0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+67,"test_top regfile0 re1_i", false,-1);
        tracep->declBus(c+66,"test_top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+2,"test_top regfile0 re2_i", false,-1);
        tracep->declBus(c+1,"test_top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+147,"test_top regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+9,"test_top regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+34+i*1,"test_top regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+3,"test_top regfile0 i", false,-1, 31,0);
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
        tracep->fullBit(oldp+2,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        tracep->fullIData(oldp+3,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        tracep->fullBit(oldp+5,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        tracep->fullIData(oldp+6,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        tracep->fullIData(oldp+9,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
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
        tracep->fullIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+13,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        tracep->fullCData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        tracep->fullBit(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        tracep->fullIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        tracep->fullCData(oldp+18,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        tracep->fullBit(oldp+19,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        tracep->fullIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        tracep->fullCData(oldp+21,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+22,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
        tracep->fullCData(oldp+24,((0x1fU & ((0x4000U 
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
        tracep->fullCData(oldp+25,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->fullCData(oldp+26,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+27,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        tracep->fullCData(oldp+28,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+29,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+30,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+31,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                        >> 0xeU))));
        tracep->fullBit(oldp+32,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                        >> 0x1eU))));
        tracep->fullIData(oldp+33,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        tracep->fullIData(oldp+43,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        tracep->fullIData(oldp+45,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        tracep->fullIData(oldp+46,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        tracep->fullIData(oldp+47,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        tracep->fullIData(oldp+49,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        tracep->fullIData(oldp+51,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        tracep->fullIData(oldp+58,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        tracep->fullCData(oldp+66,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        tracep->fullBit(oldp+67,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        tracep->fullCData(oldp+68,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        tracep->fullBit(oldp+69,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        tracep->fullIData(oldp+70,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        tracep->fullCData(oldp+71,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        tracep->fullBit(oldp+72,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        tracep->fullIData(oldp+73,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift_result),32);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__compare_sub),32);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[0]),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[1]),32);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[2]),32);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[3]),32);
        tracep->fullIData(oldp+80,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[4]),32);
        tracep->fullIData(oldp+81,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[5]),32);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[6]),32);
        tracep->fullIData(oldp+83,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[7]),32);
        tracep->fullIData(oldp+84,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[8]),32);
        tracep->fullIData(oldp+85,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[9]),32);
        tracep->fullIData(oldp+86,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[10]),32);
        tracep->fullIData(oldp+87,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[11]),32);
        tracep->fullIData(oldp+88,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[12]),32);
        tracep->fullIData(oldp+89,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[13]),32);
        tracep->fullIData(oldp+90,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[14]),32);
        tracep->fullIData(oldp+91,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[15]),32);
        tracep->fullIData(oldp+92,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[16]),32);
        tracep->fullIData(oldp+93,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[17]),32);
        tracep->fullIData(oldp+94,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[18]),32);
        tracep->fullIData(oldp+95,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[19]),32);
        tracep->fullIData(oldp+96,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[20]),32);
        tracep->fullIData(oldp+97,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[21]),32);
        tracep->fullIData(oldp+98,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[22]),32);
        tracep->fullIData(oldp+99,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[23]),32);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[24]),32);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[25]),32);
        tracep->fullIData(oldp+102,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[26]),32);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[27]),32);
        tracep->fullIData(oldp+104,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[28]),32);
        tracep->fullIData(oldp+105,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[29]),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[30]),32);
        tracep->fullIData(oldp+107,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_l_temp[31]),32);
        tracep->fullIData(oldp+108,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[0]),32);
        tracep->fullIData(oldp+109,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[1]),32);
        tracep->fullIData(oldp+110,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[2]),32);
        tracep->fullIData(oldp+111,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[3]),32);
        tracep->fullIData(oldp+112,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[4]),32);
        tracep->fullIData(oldp+113,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[5]),32);
        tracep->fullIData(oldp+114,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[6]),32);
        tracep->fullIData(oldp+115,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[7]),32);
        tracep->fullIData(oldp+116,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[8]),32);
        tracep->fullIData(oldp+117,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[9]),32);
        tracep->fullIData(oldp+118,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[10]),32);
        tracep->fullIData(oldp+119,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[11]),32);
        tracep->fullIData(oldp+120,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[12]),32);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[13]),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[14]),32);
        tracep->fullIData(oldp+123,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[15]),32);
        tracep->fullIData(oldp+124,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[16]),32);
        tracep->fullIData(oldp+125,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[17]),32);
        tracep->fullIData(oldp+126,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[18]),32);
        tracep->fullIData(oldp+127,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[19]),32);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[20]),32);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[21]),32);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[22]),32);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[23]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[24]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[25]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[26]),32);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[27]),32);
        tracep->fullIData(oldp+136,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[28]),32);
        tracep->fullIData(oldp+137,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[29]),32);
        tracep->fullIData(oldp+138,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[30]),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__shift0__DOT__shift_r_temp[31]),32);
        tracep->fullBit(oldp+140,(vlTOPp->rst_i));
        tracep->fullBit(oldp+141,(vlTOPp->clk_i));
        tracep->fullIData(oldp+142,(((IData)(vlTOPp->rst_i)
                                      ? 0x13U : ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                  ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                  : 0x13U))),32);
        tracep->fullIData(oldp+143,(((IData)(vlTOPp->rst_i)
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
                                                   : 
                                                  ((IData)(vlTOPp->rst_i)
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
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
                                                     : 0U)))))),32);
        tracep->fullIData(oldp+144,(((IData)(vlTOPp->rst_i)
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
                                                   : 
                                                  ((IData)(vlTOPp->rst_i)
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                     ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o
                                                     : 0U)))))),32);
        tracep->fullBit(oldp+145,(((~ (IData)(vlTOPp->rst_i)) 
                                   & (0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))));
        tracep->fullCData(oldp+146,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x13U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                               ? (0x1fU 
                                                  & ((0x4000U 
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
                                                        >> 7U)))))
                                               : 0U))),5);
        tracep->fullIData(oldp+147,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
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
        tracep->fullIData(oldp+148,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x13U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                               ? ((0U 
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
                                               : 0U))),32);
        tracep->fullIData(oldp+149,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x13U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                               ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o
                                               : 0U))),32);
        tracep->fullIData(oldp+150,(((IData)(vlTOPp->rst_i)
                                      ? 0U : vlSymsp->TOP__test_top.__PVT__id_exe_op1_o)),32);
        tracep->fullIData(oldp+151,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffeU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 1U)))),32);
        tracep->fullIData(oldp+152,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffcU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 2U)))),32);
        tracep->fullIData(oldp+153,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff8U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 3U)))),32);
        tracep->fullIData(oldp+154,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff0U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 4U)))),32);
        tracep->fullIData(oldp+155,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffe0U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 5U)))),32);
        tracep->fullIData(oldp+156,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffc0U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 6U)))),32);
        tracep->fullIData(oldp+157,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff80U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 7U)))),32);
        tracep->fullIData(oldp+158,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff00U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 8U)))),32);
        tracep->fullIData(oldp+159,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffe00U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 9U)))),32);
        tracep->fullIData(oldp+160,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffc00U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xaU)))),32);
        tracep->fullIData(oldp+161,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff800U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xbU)))),32);
        tracep->fullIData(oldp+162,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xcU)))),32);
        tracep->fullIData(oldp+163,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffe000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xdU)))),32);
        tracep->fullIData(oldp+164,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffc000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xeU)))),32);
        tracep->fullIData(oldp+165,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff8000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0xfU)))),32);
        tracep->fullIData(oldp+166,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff0000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x10U)))),32);
        tracep->fullIData(oldp+167,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffe0000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x11U)))),32);
        tracep->fullIData(oldp+168,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffc0000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x12U)))),32);
        tracep->fullIData(oldp+169,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff80000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x13U)))),32);
        tracep->fullIData(oldp+170,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff00000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x14U)))),32);
        tracep->fullIData(oldp+171,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffe00000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x15U)))),32);
        tracep->fullIData(oldp+172,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffc00000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x16U)))),32);
        tracep->fullIData(oldp+173,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff800000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x17U)))),32);
        tracep->fullIData(oldp+174,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x18U)))),32);
        tracep->fullIData(oldp+175,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfe000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x19U)))),32);
        tracep->fullIData(oldp+176,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfc000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1aU)))),32);
        tracep->fullIData(oldp+177,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf8000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1bU)))),32);
        tracep->fullIData(oldp+178,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf0000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1cU)))),32);
        tracep->fullIData(oldp+179,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xe0000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1dU)))),32);
        tracep->fullIData(oldp+180,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xc0000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1eU)))),32);
        tracep->fullIData(oldp+181,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0x80000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 0x1fU)))),32);
        tracep->fullIData(oldp+182,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+183,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+184,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+185,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+186,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+187,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+188,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+189,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+190,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+191,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+192,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+193,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+194,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+195,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+196,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+197,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+198,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+199,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+200,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+201,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+202,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+203,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+204,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+205,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+206,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+207,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+208,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+209,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+210,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+211,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+212,(((IData)(vlTOPp->rst_i)
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
        tracep->fullCData(oldp+213,(0U),5);
        tracep->fullBit(oldp+214,(1U));
        tracep->fullBit(oldp+215,(0U));
        tracep->fullIData(oldp+216,(0x20U),32);
        tracep->fullIData(oldp+217,(0U),32);
        tracep->fullIData(oldp+218,(1U),32);
        tracep->fullIData(oldp+219,(2U),32);
        tracep->fullIData(oldp+220,(3U),32);
        tracep->fullIData(oldp+221,(4U),32);
        tracep->fullIData(oldp+222,(5U),32);
        tracep->fullIData(oldp+223,(6U),32);
        tracep->fullIData(oldp+224,(7U),32);
        tracep->fullIData(oldp+225,(8U),32);
        tracep->fullIData(oldp+226,(9U),32);
        tracep->fullIData(oldp+227,(0xaU),32);
        tracep->fullIData(oldp+228,(0xbU),32);
        tracep->fullIData(oldp+229,(0xcU),32);
        tracep->fullIData(oldp+230,(0xdU),32);
        tracep->fullIData(oldp+231,(0xeU),32);
        tracep->fullIData(oldp+232,(0xfU),32);
        tracep->fullIData(oldp+233,(0x10U),32);
        tracep->fullIData(oldp+234,(0x11U),32);
        tracep->fullIData(oldp+235,(0x12U),32);
        tracep->fullIData(oldp+236,(0x13U),32);
        tracep->fullIData(oldp+237,(0x14U),32);
        tracep->fullIData(oldp+238,(0x15U),32);
        tracep->fullIData(oldp+239,(0x16U),32);
        tracep->fullIData(oldp+240,(0x17U),32);
        tracep->fullIData(oldp+241,(0x18U),32);
        tracep->fullIData(oldp+242,(0x19U),32);
        tracep->fullIData(oldp+243,(0x1aU),32);
        tracep->fullIData(oldp+244,(0x1bU),32);
        tracep->fullIData(oldp+245,(0x1cU),32);
        tracep->fullIData(oldp+246,(0x1dU),32);
        tracep->fullIData(oldp+247,(0x1eU),32);
        tracep->fullIData(oldp+248,(0x1fU),32);
    }
}
