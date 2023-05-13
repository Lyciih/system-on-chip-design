// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_top__Syms.h"
#include "Vtest_top.h"
#include "Vtest_top_test_top.h"
#include "Vtest_top_core_top.h"
#include "Vtest_top_dpram.h"
#include "Vtest_top_regfile.h"
#include "Vtest_top_shift.h"



// FUNCTIONS
Vtest_top__Syms::Vtest_top__Syms(Vtest_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__test_top(Verilated::catName(topp->name(), "test_top"))
    , TOP__test_top__core_top0(Verilated::catName(topp->name(), "test_top.core_top0"))
    , TOP__test_top__core_top0__exe0__DOT__shift_i_type(Verilated::catName(topp->name(), "test_top.core_top0.exe0.shift_i_type"))
    , TOP__test_top__core_top0__exe0__DOT__shift_r_type(Verilated::catName(topp->name(), "test_top.core_top0.exe0.shift_r_type"))
    , TOP__test_top__core_top0__regfile0(Verilated::catName(topp->name(), "test_top.core_top0.regfile0"))
    , TOP__test_top__dpram0(Verilated::catName(topp->name(), "test_top.dpram0"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->test_top = &TOP__test_top;
    TOPp->test_top->core_top0 = &TOP__test_top__core_top0;
    TOPp->test_top->core_top0->__PVT__exe0__DOT__shift_i_type = &TOP__test_top__core_top0__exe0__DOT__shift_i_type;
    TOPp->test_top->core_top0->__PVT__exe0__DOT__shift_r_type = &TOP__test_top__core_top0__exe0__DOT__shift_r_type;
    TOPp->test_top->core_top0->regfile0 = &TOP__test_top__core_top0__regfile0;
    TOPp->test_top->dpram0 = &TOP__test_top__dpram0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__test_top.__Vconfigure(this, true);
    TOP__test_top__core_top0.__Vconfigure(this, true);
    TOP__test_top__core_top0__exe0__DOT__shift_i_type.__Vconfigure(this, true);
    TOP__test_top__core_top0__exe0__DOT__shift_r_type.__Vconfigure(this, false);
    TOP__test_top__core_top0__regfile0.__Vconfigure(this, true);
    TOP__test_top__dpram0.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
