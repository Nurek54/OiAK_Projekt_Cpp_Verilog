// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBooth_mult__pch.h"
#include "VBooth_mult.h"
#include "VBooth_mult___024root.h"

// FUNCTIONS
VBooth_mult__Syms::~VBooth_mult__Syms()
{
}

VBooth_mult__Syms::VBooth_mult__Syms(VerilatedContext* contextp, const char* namep, VBooth_mult* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-10);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
