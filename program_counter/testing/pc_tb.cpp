#include "Vtop_PC.h"

#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vtop_PC* top = new Vtop_PC;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // Init simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->ImmOP = 0;
    top->PCsrc = 0;

    int clk;
    int testState = 0;
    int testCount = 0;
    for (int i = 0; i < 1000; i ++) {
        
        // Dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk ++) {
            tfp->dump(2*i + clk);
            top->clk = !top->clk;
            top->eval();
        }

        // Update input signals
        if (testCount == 20) { // Test each input state for 20 cycles
            testCount = 0;
            testState ++;
        } else {
            top->rst = testState & 1; // 1 or 0
            top->PCsrc = (testState >> 1) & 1; // 1 or 0
            top->ImmOP = (testState >> 2); // N-2 bit number
            testCount ++;
        }

    }

    tfp->close();
    exit(0);

}