module ram #(
    parameter ADDRESS_LENGTH = 32
) (
    input logic we,
    input logic [31:0] wd,
    input logic [ADDRESS_LENGTH-1:0] a,
    input logic clk,
    output logic [ADDRESS_LENGTH-1:0] rd
);

logic [ADDRESS_LENGTH-1:0] ram_array [9999:0];

initial begin
    $display("Loading data memory.");
    $readmemh("alu/dataram.mem", ram_array);
end

assign rd = ram_array[a];
    
always_ff @(posedge clk) begin
    if (we)
        ram_array[a] <= wd;
end

endmodule
