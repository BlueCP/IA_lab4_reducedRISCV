module ram #(
    parameter ADDRESS_LENGTH = 32
) (
    input logic we,
    input logic [7:0] wd,
    input logic [ADDRESS_LENGTH-1:0] a,
    input logic clk,
    output logic [7:0] rd
);

logic [7:0] ram_array [2**ADDRESS_LENGTH-1:0]
    
always_ff @(posedge clk) begin
    if(we)
        ram_array[a] <= wd;
    else begin
        rd <= ram_array[a];
    end
    
end
endmodule
