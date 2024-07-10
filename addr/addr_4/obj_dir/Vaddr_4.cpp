// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaddr_4.h"
#include "Vaddr_4__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaddr_4::Vaddr_4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaddr_4__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , cin{vlSymsp->TOP.cin}
    , sum{vlSymsp->TOP.sum}
    , cout{vlSymsp->TOP.cout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaddr_4::Vaddr_4(const char* _vcname__)
    : Vaddr_4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaddr_4::~Vaddr_4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaddr_4___024root___eval_debug_assertions(Vaddr_4___024root* vlSelf);
#endif  // VL_DEBUG
void Vaddr_4___024root___eval_static(Vaddr_4___024root* vlSelf);
void Vaddr_4___024root___eval_initial(Vaddr_4___024root* vlSelf);
void Vaddr_4___024root___eval_settle(Vaddr_4___024root* vlSelf);
void Vaddr_4___024root___eval(Vaddr_4___024root* vlSelf);

void Vaddr_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaddr_4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaddr_4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaddr_4___024root___eval_static(&(vlSymsp->TOP));
        Vaddr_4___024root___eval_initial(&(vlSymsp->TOP));
        Vaddr_4___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaddr_4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaddr_4::eventsPending() { return false; }

uint64_t Vaddr_4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaddr_4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaddr_4___024root___eval_final(Vaddr_4___024root* vlSelf);

VL_ATTR_COLD void Vaddr_4::final() {
    Vaddr_4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaddr_4::hierName() const { return vlSymsp->name(); }
const char* Vaddr_4::modelName() const { return "Vaddr_4"; }
unsigned Vaddr_4::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vaddr_4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaddr_4___024root__trace_init_top(Vaddr_4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaddr_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddr_4___024root*>(voidSelf);
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vaddr_4___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vaddr_4___024root__trace_register(Vaddr_4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaddr_4::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaddr_4::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaddr_4___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
