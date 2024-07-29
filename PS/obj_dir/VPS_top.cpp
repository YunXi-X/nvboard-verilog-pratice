// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPS_top.h"
#include "VPS_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPS_top::VPS_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPS_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , in{vlSymsp->TOP.in}
    , statue{vlSymsp->TOP.statue}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPS_top::VPS_top(const char* _vcname__)
    : VPS_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPS_top::~VPS_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPS_top___024root___eval_debug_assertions(VPS_top___024root* vlSelf);
#endif  // VL_DEBUG
void VPS_top___024root___eval_static(VPS_top___024root* vlSelf);
void VPS_top___024root___eval_initial(VPS_top___024root* vlSelf);
void VPS_top___024root___eval_settle(VPS_top___024root* vlSelf);
void VPS_top___024root___eval(VPS_top___024root* vlSelf);

void VPS_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPS_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPS_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPS_top___024root___eval_static(&(vlSymsp->TOP));
        VPS_top___024root___eval_initial(&(vlSymsp->TOP));
        VPS_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPS_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPS_top::eventsPending() { return false; }

uint64_t VPS_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPS_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPS_top___024root___eval_final(VPS_top___024root* vlSelf);

VL_ATTR_COLD void VPS_top::final() {
    VPS_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPS_top::hierName() const { return vlSymsp->name(); }
const char* VPS_top::modelName() const { return "VPS_top"; }
unsigned VPS_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPS_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPS_top___024root__trace_init_top(VPS_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPS_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS_top___024root*>(voidSelf);
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPS_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPS_top___024root__trace_register(VPS_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPS_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPS_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPS_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
