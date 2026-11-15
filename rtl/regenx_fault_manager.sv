`timescale 1ns/1ps

// regenx_fault_manager.sv - remembers which physical rows are bad, which bits, and how.
// BIST, recovery check and the scrubber all report through the same log port.
//
// Signature: for every row we keep which march read elements (M1..M5) failed,
// separately for the solid and the checkerboard pass. The first element that
// failed in the solid pass tells the likely class:
//   M1 (r0 read a 1)            -> stuck high
//   M2 (r1 read a 0)            -> stuck low or cannot rise
//   M3 (r0 read a 1, M1 clean)  -> cannot fall
// Only checkerboard fails -> data-pattern (coupling) fault.

module regenx_fault_manager
    import regenx_pkg::*;
#(
    parameter bit ECC_EN = 1'b1,
    parameter int PW     = CW
) (
    input  logic              clk,
    input  logic              rst_n,

    input  logic              log_valid,
    input  logic [PAW-1:0]    log_row,
    input  logic [PW-1:0]     log_mask,
    input  logic [2:0]        log_elem,     // 0 when the report is not from a march read
    input  logic [1:0]        log_pass,

    output logic [PROWS-1:0]  bad_phys,
    output logic [PROWS-1:0]  severe_phys,  // needs a real spare, ECC cannot cover it
    output logic [5:0]        fault_count,  // distinct bad physical rows
    output logic              last_valid,
    output logic [PAW-1:0]    last_row,
    output logic [2:0]        last_class,

    input  logic [PAW-1:0]    q_row,        // class lookup
    output logic [2:0]        q_class
);
    logic [PW-1:0] mask  [0:PROWS-1];
    logic [4:0]    sig_s [0:PROWS-1];       // solid pass
    logic [4:0]    sig_c [0:PROWS-1];       // checkerboard pass

    function automatic int ones(input logic [PW-1:0] v);
        int n = 0;
        for (int i = 0; i < PW; i++) n += int'(v[i]);
        return n;
    endfunction

    function automatic logic [2:0] classify(input logic bad, input logic [PW-1:0] m,
                                            input logic [4:0] s, input logic [4:0] c);
        if (!bad)                     return FC_NONE;
        else if (ones(m) > 1)         return FC_MULTI;
        else if (s == 5'd0 && c == 5'd0) return FC_ONLINE;
        else if (s == 5'd0)           return FC_PATTERN;
        else if (s[0])                return FC_STUCK_HI;
        else if (s[1])                return FC_NO_RISE;
        else                          return FC_NO_FALL;
    endfunction

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            bad_phys    <= '0;
            fault_count <= '0;
            last_valid  <= 1'b0;
            last_row    <= '0;
            for (int i = 0; i < PROWS; i++) begin
                mask[i]  <= '0;
                sig_s[i] <= '0;
                sig_c[i] <= '0;
            end
        end else if (log_valid && log_row < PAW'(PROWS)) begin
            if (!bad_phys[log_row]) fault_count <= fault_count + 6'd1;
            bad_phys[log_row] <= 1'b1;
            mask[log_row]     <= mask[log_row] | log_mask;
            last_valid        <= 1'b1;
            last_row          <= log_row;
            if (log_elem != 3'd0 && log_elem <= 3'd5) begin
                if (log_pass == 2'd0) sig_s[log_row][log_elem - 3'd1] <= 1'b1;
                if (log_pass == 2'd1) sig_c[log_row][log_elem - 3'd1] <= 1'b1;
            end
        end
    end

    always_comb begin
        for (int i = 0; i < PROWS; i++)
            severe_phys[i] = bad_phys[i] && (!ECC_EN || ones(mask[i]) > 1);
    end

    assign q_class    = classify(bad_phys[q_row], mask[q_row], sig_s[q_row], sig_c[q_row]);
    assign last_class = classify(bad_phys[last_row], mask[last_row], sig_s[last_row], sig_c[last_row]);
endmodule
