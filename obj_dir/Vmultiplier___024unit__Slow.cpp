// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "Vmultiplier__pch.h"
#include "Vmultiplier__Syms.h"
#include "Vmultiplier___024unit.h"

void Vmultiplier___024unit___ctor_var_reset(Vmultiplier___024unit* vlSelf);

Vmultiplier___024unit::Vmultiplier___024unit(Vmultiplier__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmultiplier___024unit___ctor_var_reset(this);
}

void Vmultiplier___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmultiplier___024unit::~Vmultiplier___024unit() {
}
