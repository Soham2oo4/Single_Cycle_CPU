module regfile(
    input logic clk,
    input logic rst_n,

    input logic [4:0] address1,
    input logic [4:0] address2,
    output logic [31 : 0] read_data1,
    output logic [31 : 0] read_data2,

    // Write
    input logic [4:0] address3,
    input logic [31:0] write_data,
    input logic write_enable
);
    reg [31:0] registers [31:0];
    always @(posedge clk)begin
        
        if (rst_n == 1'b0) begin
            for (int i = 0; i < 32; i++) begin
                registers[i] <= 32'b0;
            end
        end
        else if (write_enable ==  1'b1 && address3 != 5'b0) begin
            registers[address3] <= write_data;
        end
    end
    always_comb begin
        read_data1 = registers[address1];
        read_data2 = registers[address2];
    end
endmodule