`timescale 1ns/1ps

// regenx_mem_arbiter.sv - one owner of the array at a time.
//   before BIST finishes     : BIST
//   after BIST, before init  : recovery check
//   afterwards               : scrubber while it is busy, host otherwise
// Masters only drive their enable in their own phase; 'clash' flags a bug if two do.

module regenx_mem_arbiter
    import regenx_pkg::*;
#(
    parameter int PW = CW
) (
    input  logic            bist_done,
    input  logic            init_done,
    input  logic            scrub_busy,

    input  logic            b_en,  input logic b_we,  input logic [PAW-1:0] b_addr,  input logic [PW-1:0] b_wdata,
    input  logic            r_en,  input logic r_we,  input logic [PAW-1:0] r_addr,  input logic [PW-1:0] r_wdata,
    input  logic            s_en,  input logic s_we,  input logic [PAW-1:0] s_addr,  input logic [PW-1:0] s_wdata,
    input  logic            h_en,  input logic h_we,  input logic [PAW-1:0] h_addr,  input logic [PW-1:0] h_wdata,

    output logic            mem_en,
    output logic            mem_we,
    output logic [PAW-1:0]  mem_addr,
    output logic [PW-1:0]   mem_wdata,
    output logic [3:0]      grant,          // {host, scrub, recovery, bist}
    output logic            clash
);
    always_comb begin
        grant = 4'b0000;
        if (!bist_done)       grant = 4'b0001;
        else if (!init_done)  grant = 4'b0010;
        else if (scrub_busy)  grant = 4'b0100;
        else                  grant = 4'b1000;

        case (1'b1)
            grant[0]: {mem_en, mem_we, mem_addr, mem_wdata} = {b_en, b_we, b_addr, b_wdata};
            grant[1]: {mem_en, mem_we, mem_addr, mem_wdata} = {r_en, r_we, r_addr, r_wdata};
            grant[2]: {mem_en, mem_we, mem_addr, mem_wdata} = {s_en, s_we, s_addr, s_wdata};
            default:  {mem_en, mem_we, mem_addr, mem_wdata} = {h_en, h_we, h_addr, h_wdata};
        endcase

        clash = (b_en && !grant[0]) || (r_en && !grant[1]) ||
                (s_en && !grant[2]) || (h_en && !grant[3]);
    end
endmodule
