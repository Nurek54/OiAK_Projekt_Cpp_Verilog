// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBooth_mult.h for the primary calling header

#ifndef VERILATED_VBOOTH_MULT___024ROOT_H_
#define VERILATED_VBOOTH_MULT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VBooth_mult__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBooth_mult___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Booth_mult_tf__DOT__clk;
    CData/*0:0*/ Booth_mult_tf__DOT__UUT__DOT__q_add;
    CData/*0:0*/ Booth_mult_tf__DOT__UUT__DOT__q_reset;
    CData/*0:0*/ Booth_mult_tf__DOT__n_reset;
    CData/*0:0*/ Booth_mult_tf__DOT__start;
    CData/*0:0*/ Booth_mult_tf__DOT__done;
    CData/*1:0*/ Booth_mult_tf__DOT__UUT__DOT__state_reg;
    CData/*1:0*/ Booth_mult_tf__DOT__UUT__DOT__state_next;
    CData/*4:0*/ Booth_mult_tf__DOT__UUT__DOT__q_reg;
    CData/*4:0*/ Booth_mult_tf__DOT__UUT__DOT__q_next;
    CData/*0:0*/ Booth_mult_tf__DOT__UUT__DOT__result_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Booth_mult_tf__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*17:0*/ Booth_mult_tf__DOT__mplier;
    IData/*17:0*/ Booth_mult_tf__DOT__mcand;
    IData/*17:0*/ Booth_mult_tf__DOT__UUT__DOT__mcand_reg;
    IData/*17:0*/ Booth_mult_tf__DOT__UUT__DOT__mcand_next;
    IData/*31:0*/ __VactIterCount;
    QData/*35:0*/ Booth_mult_tf__DOT__product;
    QData/*36:0*/ Booth_mult_tf__DOT__UUT__DOT__prod_reg;
    QData/*36:0*/ Booth_mult_tf__DOT__UUT__DOT__prod_next;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VBooth_mult__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBooth_mult___024root(VBooth_mult__Syms* symsp, const char* v__name);
    ~VBooth_mult___024root();
    VL_UNCOPYABLE(VBooth_mult___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
