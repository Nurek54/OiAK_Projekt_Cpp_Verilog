// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmultiplier__Syms.h"


void Vmultiplier___024root__trace_chg_0_sub_0(Vmultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmultiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root__trace_chg_0\n"); );
    // Init
    Vmultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplier___024root*>(voidSelf);
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmultiplier___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmultiplier___024root__trace_chg_0_sub_0(Vmultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->multiplier__DOT__c),3);
        bufp->chgIData(oldp+1,(vlSelf->multiplier__DOT__pp),32);
        bufp->chgIData(oldp+2,(vlSelf->multiplier__DOT__spp),32);
        bufp->chgIData(oldp+3,(vlSelf->multiplier__DOT__prod),32);
        bufp->chgSData(oldp+4,(vlSelf->multiplier__DOT__i),16);
        bufp->chgSData(oldp+5,(vlSelf->multiplier__DOT__j),16);
        bufp->chgBit(oldp+6,(vlSelf->multiplier__DOT__flag));
        bufp->chgBit(oldp+7,(vlSelf->multiplier__DOT__temp));
    }
    bufp->chgBit(oldp+8,(vlSelf->clk));
    bufp->chgBit(oldp+9,(vlSelf->reset));
    bufp->chgSData(oldp+10,(vlSelf->x),16);
    bufp->chgSData(oldp+11,(vlSelf->y),16);
    bufp->chgIData(oldp+12,(vlSelf->out),32);
    bufp->chgSData(oldp+13,((0xffffU & ((IData)(1U) 
                                        + (~ (IData)(vlSelf->x))))),16);
}

void Vmultiplier___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root__trace_cleanup\n"); );
    // Init
    Vmultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplier___024root*>(voidSelf);
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
