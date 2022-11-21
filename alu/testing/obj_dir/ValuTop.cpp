// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "ValuTop.h"
#include "ValuTop__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

ValuTop::ValuTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new ValuTop__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , ALUctrl{vlSymsp->TOP.ALUctrl}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , EQ{vlSymsp->TOP.EQ}
    , Instr{vlSymsp->TOP.Instr}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

ValuTop::ValuTop(const char* _vcname__)
    : ValuTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

ValuTop::~ValuTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void ValuTop___024root___eval_initial(ValuTop___024root* vlSelf);
void ValuTop___024root___eval_settle(ValuTop___024root* vlSelf);
void ValuTop___024root___eval(ValuTop___024root* vlSelf);
#ifdef VL_DEBUG
void ValuTop___024root___eval_debug_assertions(ValuTop___024root* vlSelf);
#endif  // VL_DEBUG
void ValuTop___024root___final(ValuTop___024root* vlSelf);

static void _eval_initial_loop(ValuTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    ValuTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        ValuTop___024root___eval_settle(&(vlSymsp->TOP));
        ValuTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void ValuTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate ValuTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    ValuTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        ValuTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* ValuTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void ValuTop::final() {
    ValuTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* ValuTop::hierName() const { return vlSymsp->name(); }
const char* ValuTop::modelName() const { return "ValuTop"; }
unsigned ValuTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> ValuTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void ValuTop___024root__trace_init_top(ValuTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    ValuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<ValuTop___024root*>(voidSelf);
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    ValuTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void ValuTop___024root__trace_register(ValuTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void ValuTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'ValuTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    ValuTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
