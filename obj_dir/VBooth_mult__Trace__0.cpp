// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBooth_mult__Syms.h"


void VBooth_mult___024root__trace_chg_0_sub_0(VBooth_mult___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VBooth_mult___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_chg_0\n"); );
    // Init
    VBooth_mult___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBooth_mult___024root*>(voidSelf);
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBooth_mult___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VBooth_mult___024root__trace_chg_0_sub_0(VBooth_mult___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+0,(vlSelf->Booth_mult_tf__DOT__done));
        bufp->chgCData(oldp+1,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next),2);
        bufp->chgCData(oldp+2,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_next),5);
        bufp->chgQData(oldp+3,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next),37);
        bufp->chgIData(oldp+5,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next),18);
        bufp->chgBit(oldp+6,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add));
        bufp->chgBit(oldp+7,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+8,(vlSelf->Booth_mult_tf__DOT__product),36);
        bufp->chgCData(oldp+10,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg),2);
        bufp->chgCData(oldp+11,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg),5);
        bufp->chgQData(oldp+12,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg),37);
        bufp->chgBit(oldp+14,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg));
        bufp->chgIData(oldp+15,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg),18);
    }
    bufp->chgIData(oldp+16,(vlSelf->Booth_mult_tf__DOT__mplier),18);
    bufp->chgIData(oldp+17,(vlSelf->Booth_mult_tf__DOT__mcand),18);
    bufp->chgBit(oldp+18,(vlSelf->Booth_mult_tf__DOT__n_reset));
    bufp->chgBit(oldp+19,(vlSelf->Booth_mult_tf__DOT__start));
    bufp->chgBit(oldp+20,(vlSelf->Booth_mult_tf__DOT__clk));
}

void VBooth_mult___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_cleanup\n"); );
    // Init
    VBooth_mult___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBooth_mult___024root*>(voidSelf);
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
