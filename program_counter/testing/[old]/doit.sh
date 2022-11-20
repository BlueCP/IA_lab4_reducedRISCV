#!/bin/sh
rm -rf obj_dir
rm -f top_PC.vcd
echo "-------Removed-------"
verilator -Wall --cc --trace top_PC.sv mux_2.sv adder.sv PC_Reg.sv --exe pc_testbench.cpp
echo "-------Verilated-------"
make -j -C obj_dir/ -f Vtop_PC.mk Vtop_PC
echo "-------Make-------"
sudo obj_dir/Vtop_PC
echo "-------Simulated-------"