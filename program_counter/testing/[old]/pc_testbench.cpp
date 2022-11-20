#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop_PC.h"

#define MAX_SIM_CYC 600

int main(int argc, char **argv, char **env)
{
    int clk;
    int simcyc;
    int tick;
    // init top verilog instance
    Verilated::commandArgs(argc, argv);
    Vtop_PC *top = new Vtop_PC;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top_PC.vcd");


    top->rst = 0;
    top->clk = 0;
    top->PCsrc = 1;
    top->ImmOP = 32;
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }
        // vbdHex(2, (int(top->data_out) >> 4) & 0xF);
        // vbdHex(1, top->data_out & 0xF);
        
        top->rst = (simcyc < 2);
    }
}