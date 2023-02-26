// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VINST_FETCH__SYMS_H_
#define _VINST_FETCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vinst_fetch.h"
#include "Vinst_fetch_inst_fetch.h"
#include "Vinst_fetch_rom.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vinst_fetch__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vinst_fetch*                   TOPp;
    Vinst_fetch_inst_fetch         TOP__inst_fetch;
    Vinst_fetch_rom                TOP__inst_fetch__rom0;
    
    // CREATORS
    Vinst_fetch__Syms(Vinst_fetch* topp, const char* namep);
    ~Vinst_fetch__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
