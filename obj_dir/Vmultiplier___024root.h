// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmultiplier.h for the primary calling header

#ifndef VERILATED_VMULTIPLIER___024ROOT_H_
#define VERILATED_VMULTIPLIER___024ROOT_H_  // guard

#include "verilated.h"


class Vmultiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmultiplier___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*2:0*/ multiplier__DOT__c;
    CData/*0:0*/ multiplier__DOT__flag;
    CData/*0:0*/ multiplier__DOT__temp;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(x,15,0);
    VL_IN16(y,15,0);
    SData/*15:0*/ multiplier__DOT__i;
    SData/*15:0*/ multiplier__DOT__j;
    VL_OUT(out,31,0);
    IData/*31:0*/ multiplier__DOT__pp;
    IData/*31:0*/ multiplier__DOT__spp;
    IData/*31:0*/ multiplier__DOT__prod;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmultiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmultiplier___024root(Vmultiplier__Syms* symsp, const char* v__name);
    ~Vmultiplier___024root();
    VL_UNCOPYABLE(Vmultiplier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
