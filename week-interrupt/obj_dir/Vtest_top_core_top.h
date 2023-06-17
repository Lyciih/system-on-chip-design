// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_CORE_TOP_H_
#define _VTEST_TOP_CORE_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;
class Vtest_top_regfile;
class Vtest_top_shift;


//----------

VL_MODULE(Vtest_top_core_top) {
  public:
    // CELLS
    Vtest_top_regfile* regfile0;
    Vtest_top_shift* __PVT__exe0__DOT__shift_i_type;
    Vtest_top_shift* __PVT__exe0__DOT__shift_r_type;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_OUT8(__PVT__ram_we_o,0,0);
    VL_OUT8(__PVT__ram_request_o,0,0);
    VL_OUT8(__PVT__ram_op_o,3,0);
    VL_OUT8(__PVT__ce_wire_o,0,0);
    VL_OUT(__PVT__ram_addr_o,31,0);
    VL_OUT(__PVT__ram_wdata_o,31,0);
    VL_IN(__PVT__ram_rdata_i,31,0);
    VL_OUT(__PVT__pc_wire_o,31,0);
    VL_IN(__PVT__if_inst_i,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__ce_wire;
        CData/*5:0*/ __PVT__ctrl_stall_o;
        CData/*0:0*/ __PVT__id_reg_we_o;
        CData/*4:0*/ __PVT__id_reg_waddr_o;
        CData/*4:0*/ __PVT__id_reg1_addr_o;
        CData/*4:0*/ __PVT__id_reg2_addr_o;
        CData/*0:0*/ __PVT__id_reg1_re_o;
        CData/*0:0*/ __PVT__id_reg2_re_o;
        CData/*0:0*/ __PVT__id_exe_reg_we_o;
        CData/*4:0*/ __PVT__id_exe_reg_waddr_o;
        CData/*0:0*/ __PVT__id_exe_id_inst_is_load_o;
        CData/*4:0*/ __PVT__id_exe_id_rd_o;
        CData/*4:0*/ __PVT__exe_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_op_o;
        CData/*0:0*/ __PVT__exe_pipe_ctrl_stallreq_o;
        CData/*0:0*/ __PVT__exe_pipe_ctrl_jump_enable_o;
        CData/*4:0*/ __PVT__exe_mem_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_mem_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_mem_op_o;
        CData/*4:0*/ __PVT__mem_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_reg_we_o;
        CData/*0:0*/ __PVT__mem_halt_o;
        CData/*4:0*/ __PVT__mem_wb_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_wb_reg_we_o;
        CData/*0:0*/ __PVT__exe_exe_mem_we;
        CData/*0:0*/ __PVT__exe_mem_mem_we;
        CData/*0:0*/ __PVT__mem_wb_we;
        CData/*0:0*/ __PVT__wb_csr_we;
        CData/*0:0*/ __PVT__wb_csr_instret_incr;
        CData/*1:0*/ __PVT__exe0__DOT__m_d_op;
        CData/*0:0*/ __PVT__exe0__DOT__rs1_signed_i;
        CData/*0:0*/ __PVT__exe0__DOT__rs2_signed_i;
        CData/*0:0*/ __PVT__exe0__DOT__m_d_ready;
        CData/*5:0*/ __PVT__exe0__DOT__m_d_count;
        CData/*0:0*/ __PVT__exe0__DOT__m_d__DOT__rs1_is_neg;
        CData/*0:0*/ __PVT__exe0__DOT__m_d__DOT__rs2_is_neg;
        CData/*0:0*/ __PVT__csr0__DOT__w_sepc;
        CData/*0:0*/ __PVT__interrupt0__DOT__external_interrupt_i;
        CData/*0:0*/ __PVT__interrupt0__DOT__timer_interrupt_i;
        CData/*0:0*/ __PVT__interrupt0__DOT__interrupt_accept;
        SData/*11:0*/ __PVT__exe_csr_raddr;
        SData/*11:0*/ __PVT__exe_exe_mem_waddr;
        SData/*11:0*/ __PVT__exe_mem_mem_waddr;
        SData/*11:0*/ __PVT__mem_wb_waddr;
        SData/*11:0*/ __PVT__wb_csr_waddr;
        IData/*31:0*/ __PVT__pc_wire;
        IData/*31:0*/ __PVT__if_id_inst_addr_o;
        IData/*31:0*/ __PVT__if_id_inst_o;
        IData/*31:0*/ __PVT__id_inst_o;
        IData/*31:0*/ __PVT__id_inst_addr_o;
        IData/*31:0*/ __PVT__id_exe_op1_o;
        IData/*31:0*/ __PVT__id_exe_op2_o;
        IData/*31:0*/ __PVT__id_exe_inst_o;
        IData/*31:0*/ __PVT__id_exe_inst_addr_o;
        IData/*31:0*/ __PVT__exe_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_data_o;
        IData/*31:0*/ __PVT__exe_pipe_ctrl_jump_addr_o;
        IData/*31:0*/ __PVT__exe_mem_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_mem_data_o;
    };
    struct {
        IData/*31:0*/ __PVT__mem_reg_wdata_o;
        IData/*31:0*/ __PVT__mem_wb_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_exe_mem_wdata;
        IData/*31:0*/ __PVT__exe_mem_mem_wdata;
        IData/*31:0*/ __PVT__mem_wb_wdata;
        IData/*31:0*/ __PVT__wb_csr_wdata;
        IData/*31:0*/ __PVT__csr_exe_rdata;
        IData/*31:0*/ __PVT__exe_mem_mem_inst;
        IData/*31:0*/ __PVT__exe_mem_mem_inst_addr;
        IData/*31:0*/ __PVT__mem_interrupt_inst;
        IData/*31:0*/ __PVT__csr_interrupt_mstatus;
        IData/*31:0*/ __PVT__id0__DOT__op1_o_final;
        IData/*31:0*/ __PVT__id0__DOT__op2_o_final;
        IData/*31:0*/ __PVT__id0__DOT__i_op2_o;
        IData/*31:0*/ __PVT__exe0__DOT__b_type_offset;
        IData/*31:0*/ __PVT__exe0__DOT__load_addr_offset;
        IData/*31:0*/ __PVT__exe0__DOT__compare_sub_type_i;
        IData/*31:0*/ __PVT__exe0__DOT__compare_sub_type_r;
        IData/*31:0*/ __PVT__exe0__DOT__m_d_high_result;
        IData/*31:0*/ __PVT__exe0__DOT__m_d_low_result;
        IData/*31:0*/ __PVT__exe0__DOT__csr_rdata;
        WData/*64:0*/ __PVT__exe0__DOT__m_d__DOT__long_temp[3];
        IData/*31:0*/ __PVT__exe0__DOT__m_d__DOT__rs1_temp;
        IData/*31:0*/ __PVT__exe0__DOT__m_d__DOT__rs2_temp;
        IData/*31:0*/ __PVT__csr0__DOT__mstatus;
        IData/*31:0*/ __PVT__csr0__DOT__mie;
        IData/*31:0*/ __PVT__csr0__DOT__mtvec;
        IData/*31:0*/ __PVT__csr0__DOT__mscratch;
        IData/*31:0*/ __PVT__csr0__DOT__mepc;
        IData/*31:0*/ __PVT__csr0__DOT__mcause;
        IData/*31:0*/ __PVT__csr0__DOT__mtval;
        IData/*31:0*/ __PVT__csr0__DOT__medeleg;
        IData/*31:0*/ __PVT__csr0__DOT__mideleg;
        IData/*31:0*/ __PVT__csr0__DOT__pmpcfg0;
        IData/*31:0*/ __PVT__csr0__DOT__pmpaddr0;
        IData/*31:0*/ __PVT__csr0__DOT__stvec;
        IData/*31:0*/ __PVT__csr0__DOT__sscratch;
        IData/*31:0*/ __PVT__csr0__DOT__sepc;
        IData/*31:0*/ __PVT__csr0__DOT__scause;
        IData/*31:0*/ __PVT__csr0__DOT__satp;
        IData/*31:0*/ __PVT__interrupt0__DOT__exception_i;
        QData/*63:0*/ __PVT__csr0__DOT__mcycle;
        QData/*63:0*/ __PVT__csr0__DOT__minstret;
    };
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_core_top);  ///< Copying not allowed
  public:
    Vtest_top_core_top(const char* name = "TOP");
    ~Vtest_top_core_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
    static void _combo__TOP__test_top__core_top0__6(Vtest_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__test_top__core_top0__4(Vtest_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__test_top__core_top0__5(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__core_top0__1(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__test_top__core_top0__2(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__core_top0__3(Vtest_top__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
