module instr_mem #(
    parameter DATA_WIDTH = 32
              ADDRESS_WIDTH = 32
) (
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [DATA_WIDTH-1:0] RD
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading instructions.");
        $readmemh("instructions.mem", rom_array);
end;

always_comb begin
    // Output is asynchronous.
    RD = rom_array [A];
end
    
endmodule