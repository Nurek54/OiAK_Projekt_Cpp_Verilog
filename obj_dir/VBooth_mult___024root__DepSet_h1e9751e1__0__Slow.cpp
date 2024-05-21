// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBooth_mult.h for the primary calling header

#include "VBooth_mult__pch.h"
#include "VBooth_mult___024root.h"

VL_ATTR_COLD void VBooth_mult___024root___eval_static(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_static\n"); );
}

VL_ATTR_COLD void VBooth_mult___024root___eval_initial__TOP(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_initial__TOP\n"); );
    // Body
    VL_FINISH_MT("Booth_mult_tf.v", 6, "");
    vlSelf->Booth_mult_tf__DOT__mplier = 0U;
    vlSelf->Booth_mult_tf__DOT__mcand = 0U;
    vlSelf->Booth_mult_tf__DOT__n_reset = 0U;
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    vlSelf->Booth_mult_tf__DOT__clk = 0U;
}

VL_ATTR_COLD void VBooth_mult___024root___eval_final(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__stl(VBooth_mult___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VBooth_mult___024root___eval_phase__stl(VBooth_mult___024root* vlSelf);

VL_ATTR_COLD void VBooth_mult___024root___eval_settle(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VBooth_mult___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Booth_mult_tf.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VBooth_mult___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__stl(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VBooth_mult___024root___act_sequent__TOP__0(VBooth_mult___024root* vlSelf);

VL_ATTR_COLD void VBooth_mult___024root___eval_stl(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VBooth_mult___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VBooth_mult___024root___eval_triggers__stl(VBooth_mult___024root* vlSelf);

VL_ATTR_COLD bool VBooth_mult___024root___eval_phase__stl(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VBooth_mult___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VBooth_mult___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__act(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Booth_mult_tf.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__nba(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Booth_mult_tf.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBooth_mult___024root___ctor_var_reset(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Booth_mult_tf__DOT__mplier = VL_RAND_RESET_I(18);
    vlSelf->Booth_mult_tf__DOT__mcand = VL_RAND_RESET_I(18);
    vlSelf->Booth_mult_tf__DOT__n_reset = VL_RAND_RESET_I(1);
    vlSelf->Booth_mult_tf__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Booth_mult_tf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Booth_mult_tf__DOT__product = VL_RAND_RESET_Q(36);
    vlSelf->Booth_mult_tf__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg = VL_RAND_RESET_I(2);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg = VL_RAND_RESET_I(5);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_next = VL_RAND_RESET_I(5);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg = VL_RAND_RESET_Q(37);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next = VL_RAND_RESET_Q(37);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg = VL_RAND_RESET_I(1);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg = VL_RAND_RESET_I(18);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next = VL_RAND_RESET_I(18);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add = VL_RAND_RESET_I(1);
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Booth_mult_tf__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
