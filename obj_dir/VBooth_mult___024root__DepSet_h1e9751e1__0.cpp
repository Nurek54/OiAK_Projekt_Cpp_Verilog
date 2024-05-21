// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBooth_mult.h for the primary calling header

#include "VBooth_mult__pch.h"
#include "VBooth_mult___024root.h"

VL_ATTR_COLD void VBooth_mult___024root___eval_initial__TOP(VBooth_mult___024root* vlSelf);
VlCoroutine VBooth_mult___024root___eval_initial__TOP__Vtiming__0(VBooth_mult___024root* vlSelf);
VlCoroutine VBooth_mult___024root___eval_initial__TOP__Vtiming__1(VBooth_mult___024root* vlSelf);

void VBooth_mult___024root___eval_initial(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_initial\n"); );
    // Body
    VBooth_mult___024root___eval_initial__TOP(vlSelf);
    VBooth_mult___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VBooth_mult___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Booth_mult_tf__DOT__clk__0 
        = vlSelf->Booth_mult_tf__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VBooth_mult___024root___eval_initial__TOP__Vtiming__0(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       48);
    vlSelf->Booth_mult_tf__DOT__n_reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       49);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x98c9U;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x62daU;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       49);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       50);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x13443U;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2688bU;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       50);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       51);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x1da63U;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x131f6U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       51);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       52);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x3316fU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2d663U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       52);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       53);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x2aeedU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2d7d7U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       53);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       54);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x167dfU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x22fddU;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       54);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       55);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x757eU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2bebeU;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       55);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       56);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x3d8beU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x17cc3U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       56);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       57);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x16d7dU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x1e5f3U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       57);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       58);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x13443U;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2688bU;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       58);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       59);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x1da63U;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x131f6U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       59);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       60);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x3316fU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2d663U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       60);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       61);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x2aeedU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2d7d7U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       61);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       62);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x167dfU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x22fddU;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       62);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       63);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x757eU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x2bebeU;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       63);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       64);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x3d8beU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x17cc3U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       64);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       65);
    vlSelf->Booth_mult_tf__DOT__mcand = 0x16d7dU;
    vlSelf->Booth_mult_tf__DOT__mplier = 0x1e5f3U;
    vlSelf->Booth_mult_tf__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0x190ULL, nullptr, 
                                       "Booth_mult_tf.v", 
                                       65);
    vlSelf->Booth_mult_tf__DOT__start = 0U;
    VL_STOP_MT("Booth_mult_tf.v", 67, "");
}

VL_INLINE_OPT VlCoroutine VBooth_mult___024root___eval_initial__TOP__Vtiming__1(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xc8ULL, 
                                           nullptr, 
                                           "Booth_mult_tf.v", 
                                           44);
        vlSelf->Booth_mult_tf__DOT__clk = (1U & (~ (IData)(vlSelf->Booth_mult_tf__DOT__clk)));
    }
}

void VBooth_mult___024root___act_sequent__TOP__0(VBooth_mult___024root* vlSelf);

void VBooth_mult___024root___eval_act(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VBooth_mult___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VBooth_mult___024root___act_sequent__TOP__0(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Booth_mult_tf__DOT__done = 0U;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next 
        = vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next 
        = vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
        = vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg;
    if ((1U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
        if (vlSelf->Booth_mult_tf__DOT__start) {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next = 2U;
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next 
                = vlSelf->Booth_mult_tf__DOT__mcand;
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
                = ((QData)((IData)(vlSelf->Booth_mult_tf__DOT__mplier)) 
                   << 1U);
        } else {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next 
                = vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg;
        }
    } else if ((2U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
        if (((9U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg)) 
             & (~ (IData)(vlSelf->Booth_mult_tf__DOT__start)))) {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next = 1U;
        }
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
            = ((1U & (IData)((vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                              >> 1U))) ? ((1U & (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg))
                                           ? ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                                               ? (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                               >> 0x24U))))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                        >> 1U)))
                                               : (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x24U)) 
                                                                            << 0x12U)) 
                                                                        | (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x13U)))) 
                                                                       - 
                                                                       ((0x40000U 
                                                                         & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                                            << 1U)) 
                                                                        | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                                                   << 0x12U) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 1U)))))))
                                           : ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                                               ? (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x24U)) 
                                                                            << 0x12U)) 
                                                                        | (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x13U)))) 
                                                                       - 
                                                                       ((0x40000U 
                                                                         & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                                            << 1U)) 
                                                                        | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                                                   << 0x12U) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 1U))))))
                                               : (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x24U)) 
                                                                            << 0x12U)) 
                                                                        | (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x13U)))) 
                                                                       - 
                                                                       (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                                        << 1U))))) 
                                                   << 0x12U) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 1U))))))))
                : ((1U & (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg))
                    ? ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                        ? (((QData)((IData)((0x7ffffU 
                                             & (((0x40000U 
                                                  & ((IData)(
                                                             (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                              >> 0x24U)) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (IData)(
                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                               >> 0x13U)))) 
                                                + (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                   << 1U))))) 
                            << 0x12U) | (QData)((IData)(
                                                        (0x3ffffU 
                                                         & (IData)(
                                                                   (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                    >> 1U))))))
                        : (((QData)((IData)((0x7ffffU 
                                             & (((0x40000U 
                                                  & ((IData)(
                                                             (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                              >> 0x24U)) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (IData)(
                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                               >> 0x13U)))) 
                                                + (
                                                   (0x40000U 
                                                    & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                       << 1U)) 
                                                   | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                            << 0x12U) | (QData)((IData)(
                                                        (0x3ffffU 
                                                         & (IData)(
                                                                   (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                    >> 1U)))))))
                    : ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                        ? (((QData)((IData)((0x7ffffU 
                                             & (((0x40000U 
                                                  & ((IData)(
                                                             (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                              >> 0x24U)) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (IData)(
                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                               >> 0x13U)))) 
                                                + (
                                                   (0x40000U 
                                                    & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                       << 1U)) 
                                                   | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                            << 0x12U) | (QData)((IData)(
                                                        (0x3ffffU 
                                                         & (IData)(
                                                                   (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                    >> 1U))))))
                        : (((QData)((IData)((1U & (IData)(
                                                          (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                           >> 0x24U))))) 
                            << 0x24U) | (0xfffffffffULL 
                                         & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                            >> 1U))))));
    } else {
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next = 1U;
    }
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add = 0U;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset = 0U;
    if ((1U != (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
        if ((2U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add = 1U;
            if (((9U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg)) 
                 & (~ (IData)(vlSelf->Booth_mult_tf__DOT__start)))) {
                vlSelf->Booth_mult_tf__DOT__done = 1U;
                vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add = 0U;
                vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset = 1U;
            }
        }
    }
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_next = 
        (0x1fU & ((0U == (((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset) 
                           << 1U) | (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add)))
                   ? (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg)
                   : ((1U == (((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset) 
                               << 1U) | (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add)))
                       ? ((IData)(1U) + (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg))
                       : 0U)));
}

void VBooth_mult___024root___nba_sequent__TOP__0(VBooth_mult___024root* vlSelf);
void VBooth_mult___024root___nba_comb__TOP__0(VBooth_mult___024root* vlSelf);

void VBooth_mult___024root___eval_nba(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBooth_mult___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBooth_mult___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VBooth_mult___024root___nba_sequent__TOP__0(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg 
        = ((IData)(vlSelf->Booth_mult_tf__DOT__n_reset) 
           && (1U & (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next)));
    if (vlSelf->Booth_mult_tf__DOT__done) {
        vlSelf->Booth_mult_tf__DOT__product = (0xfffffffffULL 
                                               & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                  >> 1U));
    }
    if (vlSelf->Booth_mult_tf__DOT__n_reset) {
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
            = vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next;
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg 
            = vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_next;
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg 
            = vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next;
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
            = (((QData)((IData)((1U & (IData)((vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
                                               >> 0x24U))))) 
                << 0x24U) | (0xfffffffffULL & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
                                               >> 1U)));
    } else {
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg = 0U;
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg = 0U;
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg = 1U;
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg = 0ULL;
    }
}

VL_INLINE_OPT void VBooth_mult___024root___nba_comb__TOP__0(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->Booth_mult_tf__DOT__done = 0U;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next 
        = vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next 
        = vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add = 0U;
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset = 0U;
    if ((1U != (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
        if ((2U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add = 1U;
            if (((9U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg)) 
                 & (~ (IData)(vlSelf->Booth_mult_tf__DOT__start)))) {
                vlSelf->Booth_mult_tf__DOT__done = 1U;
                vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add = 0U;
                vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset = 1U;
            }
        }
    }
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
        = vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg;
    if ((1U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
        if (vlSelf->Booth_mult_tf__DOT__start) {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next = 2U;
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next 
                = vlSelf->Booth_mult_tf__DOT__mcand;
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
                = ((QData)((IData)(vlSelf->Booth_mult_tf__DOT__mplier)) 
                   << 1U);
        } else {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next 
                = vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg;
        }
    } else if ((2U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg))) {
        if (((9U == (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg)) 
             & (~ (IData)(vlSelf->Booth_mult_tf__DOT__start)))) {
            vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next = 1U;
        }
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next 
            = ((1U & (IData)((vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                              >> 1U))) ? ((1U & (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg))
                                           ? ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                                               ? (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                               >> 0x24U))))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                        >> 1U)))
                                               : (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x24U)) 
                                                                            << 0x12U)) 
                                                                        | (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x13U)))) 
                                                                       - 
                                                                       ((0x40000U 
                                                                         & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                                            << 1U)) 
                                                                        | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                                                   << 0x12U) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 1U)))))))
                                           : ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                                               ? (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x24U)) 
                                                                            << 0x12U)) 
                                                                        | (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x13U)))) 
                                                                       - 
                                                                       ((0x40000U 
                                                                         & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                                            << 1U)) 
                                                                        | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                                                   << 0x12U) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 1U))))))
                                               : (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x24U)) 
                                                                            << 0x12U)) 
                                                                        | (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 0x13U)))) 
                                                                       - 
                                                                       (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                                        << 1U))))) 
                                                   << 0x12U) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                                >> 1U))))))))
                : ((1U & (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg))
                    ? ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                        ? (((QData)((IData)((0x7ffffU 
                                             & (((0x40000U 
                                                  & ((IData)(
                                                             (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                              >> 0x24U)) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (IData)(
                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                               >> 0x13U)))) 
                                                + (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                   << 1U))))) 
                            << 0x12U) | (QData)((IData)(
                                                        (0x3ffffU 
                                                         & (IData)(
                                                                   (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                    >> 1U))))))
                        : (((QData)((IData)((0x7ffffU 
                                             & (((0x40000U 
                                                  & ((IData)(
                                                             (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                              >> 0x24U)) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (IData)(
                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                               >> 0x13U)))) 
                                                + (
                                                   (0x40000U 
                                                    & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                       << 1U)) 
                                                   | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                            << 0x12U) | (QData)((IData)(
                                                        (0x3ffffU 
                                                         & (IData)(
                                                                   (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                    >> 1U)))))))
                    : ((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg)
                        ? (((QData)((IData)((0x7ffffU 
                                             & (((0x40000U 
                                                  & ((IData)(
                                                             (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                              >> 0x24U)) 
                                                     << 0x12U)) 
                                                 | (0x3ffffU 
                                                    & (IData)(
                                                              (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                               >> 0x13U)))) 
                                                + (
                                                   (0x40000U 
                                                    & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg 
                                                       << 1U)) 
                                                   | vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg))))) 
                            << 0x12U) | (QData)((IData)(
                                                        (0x3ffffU 
                                                         & (IData)(
                                                                   (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                                    >> 1U))))))
                        : (((QData)((IData)((1U & (IData)(
                                                          (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                                           >> 0x24U))))) 
                            << 0x24U) | (0xfffffffffULL 
                                         & (vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg 
                                            >> 1U))))));
    } else {
        vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next = 1U;
    }
    vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_next = 
        (0x1fU & ((0U == (((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset) 
                           << 1U) | (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add)))
                   ? (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg)
                   : ((1U == (((IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset) 
                               << 1U) | (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add)))
                       ? ((IData)(1U) + (IData)(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg))
                       : 0U)));
}

void VBooth_mult___024root___timing_resume(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VBooth_mult___024root___eval_triggers__act(VBooth_mult___024root* vlSelf);

bool VBooth_mult___024root___eval_phase__act(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VBooth_mult___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VBooth_mult___024root___timing_resume(vlSelf);
        VBooth_mult___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VBooth_mult___024root___eval_phase__nba(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VBooth_mult___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__nba(VBooth_mult___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__act(VBooth_mult___024root* vlSelf);
#endif  // VL_DEBUG

void VBooth_mult___024root___eval(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VBooth_mult___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Booth_mult_tf.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VBooth_mult___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Booth_mult_tf.v", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VBooth_mult___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VBooth_mult___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VBooth_mult___024root___eval_debug_assertions(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
