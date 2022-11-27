# IA Lab 4 Reduced RISCV

## Testing evidence

R: See top.vcd for evidence of the CPU running the test program. Reset is asserted for the first 3 clock cycles.

C: See /testing/top.vcd for evidence of the program counter working through a set of arbitrary cases, mainly used to test the multiplexer.

A: See /control_unit,instr_mem,sign_extend/testing/top.vcd for the testing of the control unit, instruction memory and sign extend components.

## Challenges encountered

R: There were no significant challenges in testing. Most issues could be traced back to trivial errors by using the waveforms generated in the vcd file, and comparing them to what was expected.

C: In the design of the problem counter I encountered no major challenges, the majority of the errors made were simple syntax errors and were easily fixed thanks to the errors thrown by verilator.

A: A challenge I faced during the design of my three components was in the design of the instruction memory. Initially, I had designed this block to use word addressing, where the data width of each memory location was 32 bits. I had not realised that this component was required to use byte addressing, which meant the data width should be 8 bits (1 byte), and that 4 bytes should be concatentated together to form the 32-bit output.

## Design decisions

R: In my view, there were two components which provided the freedom to allow for some interesting design choices: the data memory, and the control unit.

The data memory was an interesting component to consider because of the limitations of this reduced RISC-V CPU. Because the only memory instruction was lw, there was no need to store data as anything less than 32-bit words. Given that there was no formal requirement to use byte addressing for the data memory as for the instruction memory, it was decided that the data memory would store 32-bit words which could be read using a word number rather than a byte address. In the future, this will likely have to be extended to byte addressing, in which case a mechanism for synthesising half-words and words from bytes will have to be implemented.

There were many different ways of implementing the control unit, but in the end it was decided that enums would be the easiest and most extendable solution. Using conditional statements, it is possible to choose an enum value representing the instruction based on the opcode, funct3 and func7 parts of the instruction. The benefit of using an enum here is that it is much easier to then generate control signals, using the enum rather than having to deal with the bits of the opcode and funct directly. In the future, another feature where the instruction enum is used to deduce the instruction type (register, immediate, branch, etc.) could be added, where the instruction type itself could be stored as an enum. This would make it even easier to generate control signals. In summary, using enums provides a level of abstraction that minimises the amount of direct bit comparison, making the code more readable, less prone to errors, and highly extendable to more instructions.

C: The design of the program counter within the CPU is relatively straight forward I chose to completely seperate structural and behaivoural blocks this lead to a seperate mux which i chose to do as it helps with visualising the program couunter at a top level. There wasnt an awful lot of room in what could be changed about the program counter so I wrote it pretty much as the specification asked for.

A: There was not too much room for design decisions for the components I wrote, since there was an obvious best implementation in most situations. For the sign extend component, I used the 12th bit of the immediate to decide whether I was to extend the immediate with 0s or 1s, due to the nature of 2's complement. For the instruction memory, if an address was inputed, this address as well as the next 3 addresses' data would be concatentated to form the 32-bit output. This way the user can use byte addressing to address the first byte of a word to get the word as the ouput. For the control unit, enum was used to indicate what type of instruction we had, which is more efficient than setting a boolean variable for each type of instruction.

## Reflection

R: With the benefit of hindsight, it would have been better to have more communication between the three group members responsible for writing the hardware description. There were some cases where the alloacation of work was non-obvious; for example, the bus split converting instr to rs1, rs2, and rd was outside all the shaded boxes, and therefore it was up to individual interpretation whether to implement it in one's block or not. This led to conflicting Verilog code which had to be resolved, although this was very easy to do. In addition, there are some syntax and convention issues that will need to be addressed. Although it does not effect the functional performance of the component, it is much easier on the tester if the formats of all the sub-components are consistent.

C: In reflection as a group our grasp and understanding of git could be improved, as only one of our members utilised branches, this is definitely a thing to improve on in the future as it allows for seamless collaborative development.

A: In general, I believe we had a well functioning workflow. An improvement I could make next time is to only make changes via feature branches, and then merge these to the main branch. Although I did this most of the time, I did not do this to fix minor errors in my code. However, this is good practice.
