// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_PC.h for the primary calling header

#ifndef VERILATED_VTOP_PC___024ROOT_H_
#define VERILATED_VTOP_PC___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_PC__Syms;

class Vtop_PC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(PCsrc,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOP,31,0);
    VL_OUT(PC,31,0);
    IData/*31:0*/ top_PC__DOT__next_PC;

    // INTERNAL VARIABLES
    Vtop_PC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_PC___024root(Vtop_PC__Syms* symsp, const char* name);
    ~Vtop_PC___024root();
    VL_UNCOPYABLE(Vtop_PC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
