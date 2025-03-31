`timescale 1ns/1ps

module memory #(
    parameter WORDS = 128 ,
    parameter mem_init =  ""
)(
    input logic clk,
    input logic [31 : 0] address,
    input logic [31 : 0] write_data,
    input logic [3 : 0] byte_enable,
    input logic write_enable,
    input logic rst_n, 
    output logic [31 : 0] read_data
);
    reg [31:0] mem [0 : WORDS - 1];
    initial begin
        if (mem_init != "") begin
            $readmemh(mem_init, mem); // Load data from a hex file
        end
    end
    always@(posedge clk) begin
        if(rst_n == 1'b0) begin
            for (int i = 0 ; i < WORDS ; i++)begin
                mem[i] = 32'd0;
            end
        end
        else if(write_enable)begin 
            if (address[1:0] == 2'b00)begin 
                for (int i = 0 ; i < 4 ; i++)begin
                    if (byte_enable[i])begin 
                        mem[address[31:2]][(i * 8) +:8] <=write_data[(i*8) +: 8];
                    end
                end
            end
        end 
    end
    always_comb begin
        read_data = mem[address[31:2]];
    
    end 
endmodule
