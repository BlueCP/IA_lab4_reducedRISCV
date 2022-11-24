# IA Lab 4 Reduced RISCV

## Testing evidence

R: See top.vcd for evidence of the CPU running the test program. Reset is asserted for the first 3 clock cycles.

## Challenges encountered

R: There were no significant challenges in testing. Most issues could be traced back to trivial errors by using the waveforms generated in the vcd file, and comparing them to what was expected.

## Design decisions

R: While the program counter, instruction memory, sign extension, and ALU block were all highly prescriptive, there were two areas with more design freedom; the data memory, and the control unit.

The data memory was an interesting component to consider because of the limitations of this reduced RISC-V CPU. Because the only memory instruction was lw, there was no need to store data as anything less than 32-bit words. Given that there was no formal requirement to use byte addressing for the data memory as for the instruction memory, it was decided that the data memory would store 32-bit words which could be read using a word number rather than a byte address. In the future, this will likely have to be extended to byte addressing, in which case a mechanism for synthesising half-words and words from bytes will have to be implemented.

There were many different ways of implementing the control unit, but in the end it was decided that enums would be the easiest and most extendable solution. Using conditional statements, it is possible to choose an enum value representing the instruction based on the opcode, funct3 and func7 parts of the instruction. The benefit of using an enum here is that it is much easier to then generate control signals, using the enum rather than having to deal with the bits of the opcode and funct directly. In the future, another feature where the instruction enum is used to deduce the instruction type (register, immediate, branch, etc.) could be added, where the instruction type itself could be stored as an enum. This would make it even easier to generate control signals. In summary, using enums provides a level of abstraction that minimises the amount of direct bit comparison, making the code more readable, less prone to errors, and highly extendable to more instructions.

## Reflection

R: With the benefit of hindsight, it would have been better to have more communication between the three group members responsible for writing the hardware description. There were some cases where the alloacation of work was non-obvious; for example, the bus split converting instr to rs1, rs2, and rd was outside all the shaded boxes, and therefore it was up to individual interpretation whether to implement it in one's block or not. This led to conflicting Verilog code which had to be resolved, although this was very easy to do. In addition, there are some syntax and convention issues that will need to be addressed. Although it does not effect the functional performance of the component, it is much easier on the tester if the formats of all the sub-components are consistent.