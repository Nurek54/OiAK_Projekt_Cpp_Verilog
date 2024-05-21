// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbooth_radix4_multiplier.h for the primary calling header

#ifndef VERILATED_VBOOTH_RADIX4_MULTIPLIER___024ROOT_H_
#define VERILATED_VBOOTH_RADIX4_MULTIPLIER___024ROOT_H_  // guard

#include "verilated.h"


class Vbooth_radix4_multiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbooth_radix4_multiplier___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk;
    CData/*0:0*/ testbench__DOT__reset;
    CData/*3:0*/ testbench__DOT__x;
    CData/*3:0*/ testbench__DOT__y;
    CData/*7:0*/ testbench__DOT__product;
    CData/*4:0*/ testbench__DOT__uut__DOT__Q;
    CData/*4:0*/ testbench__DOT__uut__DOT__M;
    CData/*0:0*/ testbench__DOT__uut__DOT__Q_1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__reset__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ testbench__DOT__uut__DOT__A;
    IData/*31:0*/ testbench__DOT__uut__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbooth_radix4_multiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbooth_radix4_multiplier___024root(Vbooth_radix4_multiplier__Syms* symsp, const char* v__name);
    ~Vbooth_radix4_multiplier___024root();
    VL_UNCOPYABLE(Vbooth_radix4_multiplier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
