// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder4.h for the primary calling header

#include "Vadder4.h"
#include "Vadder4__Syms.h"

//==========

void Vadder4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadder4::eval\n"); );
    Vadder4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("adder4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vadder4::_eval_initial_loop(Vadder4__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("adder4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vadder4::_combo__TOP__1(Vadder4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_combo__TOP__1\n"); );
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adder4__DOT__fa4__DOT__s1 = (1U & (((IData)(vlTOPp->a) 
                                                ^ (IData)(vlTOPp->b)) 
                                               >> 3U));
    vlTOPp->adder4__DOT__fa2__DOT__s1 = (1U & (((IData)(vlTOPp->a) 
                                                ^ (IData)(vlTOPp->b)) 
                                               >> 1U));
    vlTOPp->adder4__DOT__fa3__DOT__s1 = (1U & (((IData)(vlTOPp->a) 
                                                ^ (IData)(vlTOPp->b)) 
                                               >> 2U));
    vlTOPp->adder4__DOT__fa1__DOT__s1 = (1U & ((IData)(vlTOPp->a) 
                                               ^ (IData)(vlTOPp->b)));
    vlTOPp->sum = ((0xeU & (IData)(vlTOPp->sum)) | 
                   ((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                    ^ (IData)(vlTOPp->c_in)));
    vlTOPp->adder4__DOT__c = ((6U & (IData)(vlTOPp->adder4__DOT__c)) 
                              | (1U & (((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                                        & (IData)(vlTOPp->c_in)) 
                                       ^ ((IData)(vlTOPp->a) 
                                          & (IData)(vlTOPp->b)))));
    vlTOPp->c_out = (1U & (((IData)(vlTOPp->adder4__DOT__fa4__DOT__s1) 
                            & ((IData)(vlTOPp->adder4__DOT__c) 
                               >> 2U)) ^ (((IData)(vlTOPp->a) 
                                           & (IData)(vlTOPp->b)) 
                                          >> 3U)));
    vlTOPp->sum = ((0xdU & (IData)(vlTOPp->sum)) | 
                   (2U & (((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                           ^ (IData)(vlTOPp->adder4__DOT__c)) 
                          << 1U)));
    vlTOPp->sum = ((0xbU & (IData)(vlTOPp->sum)) | 
                   (4U & (((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                           << 2U) ^ (0xfffffffcU & 
                                     ((IData)(vlTOPp->adder4__DOT__c) 
                                      << 1U)))));
    vlTOPp->sum = ((7U & (IData)(vlTOPp->sum)) | (8U 
                                                  & (((IData)(vlTOPp->adder4__DOT__fa4__DOT__s1) 
                                                      << 3U) 
                                                     ^ 
                                                     (0xfffffff8U 
                                                      & ((IData)(vlTOPp->adder4__DOT__c) 
                                                         << 1U)))));
    vlTOPp->adder4__DOT__fa2__DOT__c2 = ((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                                         & (IData)(vlTOPp->adder4__DOT__c));
    vlTOPp->adder4__DOT__fa3__DOT__c2 = ((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                                         & ((IData)(vlTOPp->adder4__DOT__c) 
                                            >> 1U));
    vlTOPp->adder4__DOT__c = ((5U & (IData)(vlTOPp->adder4__DOT__c)) 
                              | (2U & (((IData)(vlTOPp->adder4__DOT__fa2__DOT__c2) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & ((IData)(vlTOPp->a) 
                                                     & (IData)(vlTOPp->b))))));
    vlTOPp->adder4__DOT__c = ((3U & (IData)(vlTOPp->adder4__DOT__c)) 
                              | (4U & (((IData)(vlTOPp->adder4__DOT__fa3__DOT__c2) 
                                        << 2U) ^ (0xfffffffcU 
                                                  & ((IData)(vlTOPp->a) 
                                                     & (IData)(vlTOPp->b))))));
}

void Vadder4::_eval(Vadder4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_eval\n"); );
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Vadder4::_change_request(Vadder4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_change_request\n"); );
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vadder4::_change_request_1(Vadder4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_change_request_1\n"); );
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->adder4__DOT__c ^ vlTOPp->__Vchglast__TOP__adder4__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlTOPp->adder4__DOT__c ^ vlTOPp->__Vchglast__TOP__adder4__DOT__c))) VL_DBG_MSGF("        CHANGE: adder4.v:8: adder4.c\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__adder4__DOT__c = vlTOPp->adder4__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void Vadder4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((c_in & 0xfeU))) {
        Verilated::overWidthError("c_in");}
}
#endif  // VL_DEBUG
