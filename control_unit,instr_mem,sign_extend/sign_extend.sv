module sign_extend #(
    parameter data_width = 32,
              imm_width = 12
) (
    input logic [data_width-1:0] instruction,
    input logic ImmSrc,
    output logic [data_width-1:0] ImmOp
);

logic [imm_width-1:0] imm;

always_comb begin
    // Determine what bits of the instruction will be used in imm, based on ImmSrc.
    if (ImmSrc == 1'b0)
        imm = instruction[31:20];
    else
        imm = {instruction[31], instruction[7], instruction[30:25], instruction[11:8]};

    // If the msb is a 0, we sign extend to 32-bits with 0s.
    if(imm[11] == 0) ImmOp = {{data_width - imm_width{1'b0}}, imm};
    // If the msb is a 1, we sign extend to 32-bits with 1s.
    else ImmOp = {{data_width - imm_width{1'b1}}, imm};
end
    
endmodule
