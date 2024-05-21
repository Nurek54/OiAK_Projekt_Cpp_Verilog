// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBooth_mult__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBooth_mult::VBooth_mult(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBooth_mult__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VBooth_mult::VBooth_mult(const char* _vcname__)
    : VBooth_mult(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBooth_mult::~VBooth_mult() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBooth_mult___024root___eval_debug_assertions(VBooth_mult___024root* vlSelf);
#endif  // VL_DEBUG
void VBooth_mult___024root___eval_static(VBooth_mult___024root* vlSelf);
void VBooth_mult___024root___eval_initial(VBooth_mult___024root* vlSelf);
void VBooth_mult___024root___eval_settle(VBooth_mult___024root* vlSelf);
void VBooth_mult___024root___eval(VBooth_mult___024root* vlSelf);

void VBooth_mult::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBooth_mult::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBooth_mult___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBooth_mult___024root___eval_static(&(vlSymsp->TOP));
        VBooth_mult___024root___eval_initial(&(vlSymsp->TOP));
        VBooth_mult___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBooth_mult___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBooth_mult::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VBooth_mult::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VBooth_mult::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBooth_mult___024root___eval_final(VBooth_mult___024root* vlSelf);

VL_ATTR_COLD void VBooth_mult::final() {
    VBooth_mult___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBooth_mult::hierName() const { return vlSymsp->name(); }
const char* VBooth_mult::modelName() const { return "VBooth_mult"; }
unsigned VBooth_mult::threads() const { return 1; }
void VBooth_mult::prepareClone() const { contextp()->prepareClone(); }
void VBooth_mult::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VBooth_mult::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBooth_mult___024root__trace_decl_types(VerilatedVcd* tracep);

void VBooth_mult___024root__trace_init_top(VBooth_mult___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBooth_mult___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBooth_mult___024root*>(voidSelf);
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VBooth_mult___024root__trace_decl_types(tracep);
    VBooth_mult___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VBooth_mult___024root__trace_register(VBooth_mult___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBooth_mult::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBooth_mult::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBooth_mult___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
