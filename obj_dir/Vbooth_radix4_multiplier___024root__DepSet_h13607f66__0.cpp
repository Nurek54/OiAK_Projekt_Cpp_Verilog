// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbooth_radix4_multiplier.h for the primary calling header

#include "Vbooth_radix4_multiplier__pch.h"
#include "Vbooth_radix4_multiplier__Syms.h"
#include "Vbooth_radix4_multiplier___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___dump_triggers__act(Vbooth_radix4_multiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vbooth_radix4_multiplier___024root___eval_triggers__act(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->testbench__DOT__clk) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__1)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->testbench__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__1))) 
                                     | ((IData)(vlSelf->testbench__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__1 
        = vlSelf->testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 
        = vlSelf->testbench__DOT__reset;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbooth_radix4_multiplier___024root___dump_triggers__act(vlSelf);
    }
#endif
}
