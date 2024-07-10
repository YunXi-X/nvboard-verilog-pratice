// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaddr.h"
#include "Vaddr__Syms.h"

//============================================================
// Constructors

Vaddr::Vaddr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaddr__Syms(contextp(), _vcname__, this)}
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

Vaddr::Vaddr(const char* _vcname__)
    : Vaddr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaddr::~Vaddr() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaddr___024root___eval_debug_assertions(Vaddr___024root* vlSelf);
#endif  // VL_DEBUG
void Vaddr___024root___eval_static(Vaddr___024root* vlSelf);
void Vaddr___024root___eval_initial(Vaddr___024root* vlSelf);
void Vaddr___024root___eval_settle(Vaddr___024root* vlSelf);
void Vaddr___024root___eval(Vaddr___024root* vlSelf);

void Vaddr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaddr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaddr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaddr___024root___eval_static(&(vlSymsp->TOP));
        Vaddr___024root___eval_initial(&(vlSymsp->TOP));
        Vaddr___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaddr___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaddr::eventsPending() { return false; }

uint64_t Vaddr::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaddr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaddr___024root___eval_final(Vaddr___024root* vlSelf);

VL_ATTR_COLD void Vaddr::final() {
    Vaddr___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaddr::hierName() const { return vlSymsp->name(); }
const char* Vaddr::modelName() const { return "Vaddr"; }
unsigned Vaddr::threads() const { return 1; }
