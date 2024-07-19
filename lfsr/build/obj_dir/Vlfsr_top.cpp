// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlfsr_top.h"
#include "Vlfsr_top__Syms.h"

//============================================================
// Constructors

Vlfsr_top::Vlfsr_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlfsr_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlfsr_top::Vlfsr_top(const char* _vcname__)
    : Vlfsr_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlfsr_top::~Vlfsr_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlfsr_top___024root___eval_debug_assertions(Vlfsr_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vlfsr_top___024root___eval_static(Vlfsr_top___024root* vlSelf);
void Vlfsr_top___024root___eval_initial(Vlfsr_top___024root* vlSelf);
void Vlfsr_top___024root___eval_settle(Vlfsr_top___024root* vlSelf);
void Vlfsr_top___024root___eval(Vlfsr_top___024root* vlSelf);

void Vlfsr_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlfsr_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlfsr_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlfsr_top___024root___eval_static(&(vlSymsp->TOP));
        Vlfsr_top___024root___eval_initial(&(vlSymsp->TOP));
        Vlfsr_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlfsr_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlfsr_top::eventsPending() { return false; }

uint64_t Vlfsr_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlfsr_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlfsr_top___024root___eval_final(Vlfsr_top___024root* vlSelf);

VL_ATTR_COLD void Vlfsr_top::final() {
    Vlfsr_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlfsr_top::hierName() const { return vlSymsp->name(); }
const char* Vlfsr_top::modelName() const { return "Vlfsr_top"; }
unsigned Vlfsr_top::threads() const { return 1; }
