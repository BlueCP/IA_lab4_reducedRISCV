// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See ValuTop.h for the primary calling header

#include "verilated.h"

#include "ValuTop__Syms.h"
#include "ValuTop___024root.h"

void ValuTop___024root___ctor_var_reset(ValuTop___024root* vlSelf);

ValuTop___024root::ValuTop___024root(ValuTop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    ValuTop___024root___ctor_var_reset(this);
}

void ValuTop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

ValuTop___024root::~ValuTop___024root() {
}
