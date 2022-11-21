#include "Vtop_control_mem_extend.h"

#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vtop_control_mem_extend* top = new Vtop_control_mem_extend;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // Init simulation inputs
    top->PC = 0;
    top->EQ = 0;

    for (int i = 0; i < 1000; i ++) {
        
        // Control, mem, extend are all combinational (unclocked).
        tfp->dump(i);
        top->eval();

        // Update input signals
        if (top->PC == 24) {
            top->EQ = !top->EQ;
            top->PC = 0;
        } else {
            top->PC += 4;
        }

    }

    tfp->close();
    exit(0);

}