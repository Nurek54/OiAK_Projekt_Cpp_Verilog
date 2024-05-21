// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBooth_mult.h for the primary calling header

#include "VBooth_mult__pch.h"
#include "VBooth_mult__Syms.h"
#include "VBooth_mult___024root.h"

void VBooth_mult___024root___ctor_var_reset(VBooth_mult___024root* vlSelf);

VBooth_mult___024root::VBooth_mult___024root(VBooth_mult__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBooth_mult___024root___ctor_var_reset(this);
}

void VBooth_mult___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VBooth_mult___024root::~VBooth_mult___024root() {
}
