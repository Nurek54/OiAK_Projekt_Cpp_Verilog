// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBooth_mult.h for the primary calling header

#include "VBooth_mult__pch.h"
#include "VBooth_mult__Syms.h"
#include "VBooth_mult___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__act(VBooth_mult___024root* vlSelf);
#endif  // VL_DEBUG

void VBooth_mult___024root___eval_triggers__act(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->Booth_mult_tf__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Booth_mult_tf__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__Booth_mult_tf__DOT__clk__0 
        = vlSelf->Booth_mult_tf__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBooth_mult___024root___dump_triggers__act(vlSelf);
    }
#endif
}
