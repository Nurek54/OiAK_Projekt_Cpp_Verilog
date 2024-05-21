// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBooth_mult__Syms.h"


VL_ATTR_COLD void VBooth_mult___024root__trace_init_sub__TOP__0(VBooth_mult___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("Booth_mult_tf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"mplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+18,0,"mcand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+19,0,"n_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+9,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+1,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+9,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+1,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"mplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+18,0,"mcand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+19,0,"n_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"q_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"q_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+13,0,"prod_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+4,0,"prod_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBit(c+15,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"mcand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+6,0,"mcand_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+7,0,"q_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"q_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VBooth_mult___024root__trace_init_top(VBooth_mult___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_init_top\n"); );
    // Body
    VBooth_mult___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBooth_mult___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VBooth_mult___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBooth_mult___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBooth_mult___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBooth_mult___024root__trace_register(VBooth_mult___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VBooth_mult___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VBooth_mult___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VBooth_mult___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VBooth_mult___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBooth_mult___024root__trace_const_0_sub_0(VBooth_mult___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBooth_mult___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_const_0\n"); );
    // Init
    VBooth_mult___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBooth_mult___024root*>(voidSelf);
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBooth_mult___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBooth_mult___024root__trace_const_0_sub_0(VBooth_mult___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+22,(0x12U),32);
    bufp->fullCData(oldp+23,(1U),2);
    bufp->fullCData(oldp+24,(2U),2);
}

VL_ATTR_COLD void VBooth_mult___024root__trace_full_0_sub_0(VBooth_mult___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBooth_mult___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_full_0\n"); );
    // Init
    VBooth_mult___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBooth_mult___024root*>(voidSelf);
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBooth_mult___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBooth_mult___024root__trace_full_0_sub_0(VBooth_mult___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Booth_mult_tf__DOT__done));
    bufp->fullCData(oldp+2,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_next),2);
    bufp->fullCData(oldp+3,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_next),5);
    bufp->fullQData(oldp+4,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_next),37);
    bufp->fullIData(oldp+6,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_next),18);
    bufp->fullBit(oldp+7,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_add));
    bufp->fullBit(oldp+8,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reset));
    bufp->fullQData(oldp+9,(vlSelf->Booth_mult_tf__DOT__product),36);
    bufp->fullCData(oldp+11,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__state_reg),2);
    bufp->fullCData(oldp+12,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__q_reg),5);
    bufp->fullQData(oldp+13,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__prod_reg),37);
    bufp->fullBit(oldp+15,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__result_reg));
    bufp->fullIData(oldp+16,(vlSelf->Booth_mult_tf__DOT__UUT__DOT__mcand_reg),18);
    bufp->fullIData(oldp+17,(vlSelf->Booth_mult_tf__DOT__mplier),18);
    bufp->fullIData(oldp+18,(vlSelf->Booth_mult_tf__DOT__mcand),18);
    bufp->fullBit(oldp+19,(vlSelf->Booth_mult_tf__DOT__n_reset));
    bufp->fullBit(oldp+20,(vlSelf->Booth_mult_tf__DOT__start));
    bufp->fullBit(oldp+21,(vlSelf->Booth_mult_tf__DOT__clk));
}
