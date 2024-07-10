// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaddr_4.h"
#include "Vaddr_4__Syms.h"

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
