`timescale 1ns/1ps

// regenx_ecc.sv - SECDED (13,8) Hamming code. With ECC_EN=0 both blocks are plain wires.
// codeword bit 0 = overall parity, bits 1..12 = hamming positions (1,2,4,8 are check bits)

module regenx_ecc_enc #(
    parameter bit ECC_EN = 1'b1,
    parameter int PW     = 13
) (
    input  logic [7:0]    data,
    output logic [PW-1:0] word
);
    generate
        if (ECC_EN) begin : g_on
            logic [12:0] c;
            always_comb begin
                c     = '0;
                c[3]  = data[0];  c[5]  = data[1];  c[6]  = data[2];  c[7]  = data[3];
                c[9]  = data[4];  c[10] = data[5];  c[11] = data[6];  c[12] = data[7];
                c[1]  = c[3] ^ c[5] ^ c[7] ^ c[9] ^ c[11];
                c[2]  = c[3] ^ c[6] ^ c[7] ^ c[10] ^ c[11];
                c[4]  = c[5] ^ c[6] ^ c[7] ^ c[12];
                c[8]  = c[9] ^ c[10] ^ c[11] ^ c[12];
                c[0]  = ^c[12:1];
            end
            assign word = c;
        end else begin : g_off
            assign word = data;
        end
    endgenerate
endmodule

module regenx_ecc_dec #(
    parameter bit ECC_EN = 1'b1,
    parameter int PW     = 13
) (
    input  logic [PW-1:0] word,
    output logic [7:0]    data,
    output logic          corrected,      // one bit was wrong and has been fixed
    output logic          uncorrectable   // two (or an impossible syndrome)
);
    generate
        if (ECC_EN) begin : g_on
            /* verilator lint_off UNUSEDSIGNAL */
            logic [12:0] c, fixed;
            /* verilator lint_on UNUSEDSIGNAL */
            logic [3:0]  syn;
            logic        par_bad;
            always_comb begin
                c      = word;
                syn[0] = c[1] ^ c[3] ^ c[5] ^ c[7] ^ c[9]  ^ c[11];
                syn[1] = c[2] ^ c[3] ^ c[6] ^ c[7] ^ c[10] ^ c[11];
                syn[2] = c[4] ^ c[5] ^ c[6] ^ c[7] ^ c[12];
                syn[3] = c[8] ^ c[9] ^ c[10] ^ c[11] ^ c[12];
                par_bad = ^c;
                fixed         = c;
                corrected     = 1'b0;
                uncorrectable = 1'b0;
                if (par_bad) begin
                    if (syn <= 4'd12) begin
                        fixed[syn] = ~c[syn];
                        corrected  = 1'b1;
                    end else
                        uncorrectable = 1'b1;
                end else if (syn != 4'd0)
                    uncorrectable = 1'b1;
                data = {fixed[12], fixed[11], fixed[10], fixed[9],
                        fixed[7],  fixed[6],  fixed[5],  fixed[3]};
            end
        end else begin : g_off
            assign data          = word[7:0];
            assign corrected     = 1'b0;
            assign uncorrectable = 1'b0;
        end
    endgenerate
endmodule
