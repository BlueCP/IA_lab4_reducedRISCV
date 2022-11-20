module  top_PC #(
    parameter ADDRESS_WIDTH = 32
) (
    input wire clk,
    input wire rst,
    input wire[ADDRESS_WIDTH-1:0] ImmOp,
    input wire PCsrc,
    output wire [ADDRESS_WIDTH-1:0] PC
);

wire [ADDRESS_WIDTH-1:0] inc_PC;
wire [ADDRESS_WIDTH-1:0] next_PC;
wire [ADDRESS_WIDTH-1:0] branch_PC;

adder add_op(
    .in(PC),
    .N(ImmOp),
    .out(branch_PC)
);

adder add_inc(
    .in(PC),
    .N(32'd4),
    .out(inc_PC)
);

mux_2 mux(
    .d_0(inc_PC),
    .d_1(branch_PC),
    .s(PCsrc),
    .dout(next_PC)
);

PC_Reg PC_Reg(
    .clk(clk),
    .rst(rst),
    .next_PC(next_PC),
    .PC(PC)
);

endmodule
