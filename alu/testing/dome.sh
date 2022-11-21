rm -rf obj_dir
rm -f *.vcd


verilator --Wall --cc --trace aluTop.sv register.sv mux.sv alu.sv --exe aluTop_tb.cpp

make -j -C obj_dir/ -f ValuTop.mk ValuTop

echo "\nRunning simulation"
obj_dir/ValuTop
echo "\nSimulation completed"