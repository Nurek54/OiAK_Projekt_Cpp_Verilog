// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmultiplier.h for the primary calling header

#ifndef VERILATED_VMULTIPLIER___024UNIT_H_
#define VERILATED_VMULTIPLIER___024UNIT_H_  // guard

#include "verilated.h"


class Vmultiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmultiplier___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vmultiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmultiplier___024unit(Vmultiplier__Syms* symsp, const char* v__name);
    ~Vmultiplier___024unit();
    VL_UNCOPYABLE(Vmultiplier___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
