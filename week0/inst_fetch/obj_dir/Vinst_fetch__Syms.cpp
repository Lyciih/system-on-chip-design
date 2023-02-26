// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vinst_fetch__Syms.h"
#include "Vinst_fetch.h"
#include "Vinst_fetch_inst_fetch.h"
#include "Vinst_fetch_rom.h"



// FUNCTIONS
Vinst_fetch__Syms::Vinst_fetch__Syms(Vinst_fetch* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__inst_fetch(Verilated::catName(topp->name(), "inst_fetch"))
    , TOP__inst_fetch__rom0(Verilated::catName(topp->name(), "inst_fetch.rom0"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->inst_fetch = &TOP__inst_fetch;
    TOPp->inst_fetch->rom0 = &TOP__inst_fetch__rom0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__inst_fetch.__Vconfigure(this, true);
    TOP__inst_fetch__rom0.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
