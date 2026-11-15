module regenx_ecc_enc (
	data,
	word
);
	reg _sv2v_0;
	parameter [0:0] ECC_EN = 1'b1;
	parameter signed [31:0] PW = 13;
	input wire [7:0] data;
	output wire [PW - 1:0] word;
	generate
		if (ECC_EN) begin : g_on
			reg [12:0] c;
			always @(*) begin
				if (_sv2v_0)
					;
				c = 1'sb0;
				c[3] = data[0];
				c[5] = data[1];
				c[6] = data[2];
				c[7] = data[3];
				c[9] = data[4];
				c[10] = data[5];
				c[11] = data[6];
				c[12] = data[7];
				c[1] = (((c[3] ^ c[5]) ^ c[7]) ^ c[9]) ^ c[11];
				c[2] = (((c[3] ^ c[6]) ^ c[7]) ^ c[10]) ^ c[11];
				c[4] = ((c[5] ^ c[6]) ^ c[7]) ^ c[12];
				c[8] = ((c[9] ^ c[10]) ^ c[11]) ^ c[12];
				c[0] = ^c[12:1];
			end
			assign word = c;
		end
		else begin : g_off
			assign word = data;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module regenx_ecc_dec (
	word,
	data,
	corrected,
	uncorrectable
);
	reg _sv2v_0;
	parameter [0:0] ECC_EN = 1'b1;
	parameter signed [31:0] PW = 13;
	input wire [PW - 1:0] word;
	output reg [7:0] data;
	output reg corrected;
	output reg uncorrectable;
	generate
		if (ECC_EN) begin : g_on
			reg [12:0] c;
			reg [12:0] fixed;
			reg [3:0] syn;
			reg par_bad;
			always @(*) begin
				if (_sv2v_0)
					;
				c = word;
				syn[0] = ((((c[1] ^ c[3]) ^ c[5]) ^ c[7]) ^ c[9]) ^ c[11];
				syn[1] = ((((c[2] ^ c[3]) ^ c[6]) ^ c[7]) ^ c[10]) ^ c[11];
				syn[2] = (((c[4] ^ c[5]) ^ c[6]) ^ c[7]) ^ c[12];
				syn[3] = (((c[8] ^ c[9]) ^ c[10]) ^ c[11]) ^ c[12];
				par_bad = ^c;
				fixed = c;
				corrected = 1'b0;
				uncorrectable = 1'b0;
				if (par_bad) begin
					if (syn <= 4'd12) begin
						fixed[syn] = ~c[syn];
						corrected = 1'b1;
					end
					else
						uncorrectable = 1'b1;
				end
				else if (syn != 4'd0)
					uncorrectable = 1'b1;
				data = {fixed[12], fixed[11], fixed[10], fixed[9], fixed[7], fixed[6], fixed[5], fixed[3]};
			end
		end
		else begin : g_off
			wire [8:1] sv2v_tmp_9A33D;
			assign sv2v_tmp_9A33D = word[7:0];
			always @(*) data = sv2v_tmp_9A33D;
			wire [1:1] sv2v_tmp_B5033;
			assign sv2v_tmp_B5033 = 1'b0;
			always @(*) corrected = sv2v_tmp_B5033;
			wire [1:1] sv2v_tmp_41707;
			assign sv2v_tmp_41707 = 1'b0;
			always @(*) uncorrectable = sv2v_tmp_41707;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module regenx_mem_array (
	clk,
	rst_n,
	en,
	we,
	addr,
	wdata,
	rdata,
	rvalid
);
	reg _sv2v_0;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	localparam signed [31:0] regenx_pkg_SPARES = 2;
	localparam signed [31:0] regenx_pkg_PROWS = regenx_pkg_LROWS + regenx_pkg_SPARES;
	parameter signed [31:0] DEPTH = regenx_pkg_PROWS;
	localparam signed [31:0] regenx_pkg_CW = 13;
	parameter signed [31:0] WIDTH = regenx_pkg_CW;
	input wire clk;
	input wire rst_n;
	input wire en;
	input wire we;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [4:0] addr;
	input wire [WIDTH - 1:0] wdata;
	output reg [WIDTH - 1:0] rdata;
	output reg rvalid;
	reg [WIDTH - 1:0] cells [0:DEPTH - 1];
	reg [WIDTH - 1:0] wr_val;
	reg [WIDTH - 1:0] rd_val;
	reg [WIDTH - 1:0] old_val;
	reg alias_hit;
	reg [4:0] alias_row;
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		old_val = (sv2v_cast_32_signed(addr) < DEPTH ? cells[addr] : {WIDTH {1'sb0}});
		wr_val = wdata;
		rd_val = old_val;
		alias_hit = 1'b0;
		alias_row = 1'sb0;
	end
	always @(posedge clk)
		if (!rst_n) begin
			rdata <= 1'sb0;
			rvalid <= 1'b0;
		end
		else begin
			rvalid <= 1'b0;
			if (en && (sv2v_cast_32_signed(addr) < DEPTH)) begin
				if (we) begin
					cells[addr] <= wr_val;
					if (alias_hit)
						cells[alias_row] <= wdata;
				end
				else begin
					rdata <= rd_val;
					rvalid <= 1'b1;
				end
			end
		end
	initial _sv2v_0 = 0;
endmodule
module regenx_bist_controller (
	clk,
	rst_n,
	done,
	mem_en,
	mem_we,
	mem_addr,
	mem_wdata,
	mem_rdata,
	flt_valid,
	flt_row,
	flt_mask,
	flt_elem,
	flt_pass
);
	reg _sv2v_0;
	localparam signed [31:0] regenx_pkg_CW = 13;
	parameter signed [31:0] PW = regenx_pkg_CW;
	input wire clk;
	input wire rst_n;
	output wire done;
	output wire mem_en;
	output wire mem_we;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	output wire [4:0] mem_addr;
	output wire [PW - 1:0] mem_wdata;
	input wire [PW - 1:0] mem_rdata;
	output reg flt_valid;
	output reg [4:0] flt_row;
	output reg [PW - 1:0] flt_mask;
	output reg [2:0] flt_elem;
	output reg [1:0] flt_pass;
	reg [2:0] state;
	reg [1:0] pass;
	reg [2:0] elem;
	reg [4:0] idx;
	reg [PW - 1:0] chk;
	always @(*) begin : sv2v_autoblock_1
		reg signed [31:0] i;
		if (_sv2v_0)
			;
		for (i = 0; i < PW; i = i + 1)
			chk[i] = (i % 2) == 1;
	end
	wire [PW - 1:0] bg;
	wire [PW - 1:0] nbg;
	wire [PW - 1:0] rd_exp;
	wire [PW - 1:0] wr_dat;
	assign bg = (pass == 2'd1 ? chk : {PW {1'sb0}});
	assign nbg = ~bg;
	assign rd_exp = (((elem == 3'd1) || (elem == 3'd3)) || (elem == 3'd5) ? bg : nbg);
	assign wr_dat = (((elem == 3'd0) || (elem == 3'd2)) || (elem == 3'd4) ? bg : nbg);
	wire up;
	wire [4:0] pos;
	wire [4:0] phys;
	assign up = (elem != 3'd3) && (elem != 3'd4);
	assign pos = (up ? idx : 5'd17 - idx);
	assign phys = (pos < 5'd2 ? pos + 5'd16 : pos - 5'd2);
	assign done = state == 3'd3;
	assign mem_en = (state == 3'd0) || (state == 3'd2);
	assign mem_we = state == 3'd2;
	assign mem_addr = phys;
	assign mem_wdata = wr_dat;
	wire last_addr;
	reg [4:0] n_idx;
	reg [2:0] n_elem;
	reg [1:0] n_pass;
	reg [2:0] n_state;
	assign last_addr = idx == 5'd17;
	always @(*) begin
		if (_sv2v_0)
			;
		n_idx = idx;
		n_elem = elem;
		n_pass = pass;
		n_state = state;
		if (!last_addr) begin
			n_idx = idx + 5'd1;
			if (elem == 3'd0)
				n_state = 3'd2;
			else
				n_state = 3'd0;
		end
		else begin
			n_idx = 5'd0;
			if (pass == 2'd2)
				n_state = 3'd3;
			else if (elem != 3'd5) begin
				n_elem = elem + 3'd1;
				n_state = 3'd0;
			end
			else begin
				n_pass = pass + 2'd1;
				n_elem = 3'd0;
				n_state = 3'd2;
			end
		end
	end
	always @(posedge clk)
		if (!rst_n) begin
			state <= 3'd2;
			pass <= 2'd0;
			elem <= 3'd0;
			idx <= 5'd0;
			flt_valid <= 1'b0;
			flt_row <= 1'sb0;
			flt_mask <= 1'sb0;
			flt_elem <= 1'sb0;
			flt_pass <= 1'sb0;
		end
		else begin
			flt_valid <= 1'b0;
			case (state)
				3'd0: state <= 3'd1;
				3'd1: begin
					if (mem_rdata != rd_exp) begin
						flt_valid <= 1'b1;
						flt_row <= phys;
						flt_mask <= mem_rdata ^ rd_exp;
						flt_elem <= elem;
						flt_pass <= pass;
					end
					if (elem == 3'd5) begin
						idx <= n_idx;
						elem <= n_elem;
						pass <= n_pass;
						state <= n_state;
					end
					else
						state <= 3'd2;
				end
				3'd2: begin
					idx <= n_idx;
					elem <= n_elem;
					pass <= n_pass;
					state <= n_state;
				end
				default:
					;
			endcase
		end
	initial _sv2v_0 = 0;
endmodule
module regenx_fault_manager (
	clk,
	rst_n,
	log_valid,
	log_row,
	log_mask,
	log_elem,
	log_pass,
	bad_phys,
	severe_phys,
	fault_count,
	last_valid,
	last_row,
	last_class,
	q_row,
	q_class
);
	reg _sv2v_0;
	parameter [0:0] ECC_EN = 1'b1;
	localparam signed [31:0] regenx_pkg_CW = 13;
	parameter signed [31:0] PW = regenx_pkg_CW;
	input wire clk;
	input wire rst_n;
	input wire log_valid;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [4:0] log_row;
	input wire [PW - 1:0] log_mask;
	input wire [2:0] log_elem;
	input wire [1:0] log_pass;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	localparam signed [31:0] regenx_pkg_SPARES = 2;
	localparam signed [31:0] regenx_pkg_PROWS = regenx_pkg_LROWS + regenx_pkg_SPARES;
	output reg [regenx_pkg_PROWS - 1:0] bad_phys;
	output reg [regenx_pkg_PROWS - 1:0] severe_phys;
	output reg [5:0] fault_count;
	output reg last_valid;
	output reg [4:0] last_row;
	output wire [2:0] last_class;
	input wire [4:0] q_row;
	output wire [2:0] q_class;
	reg [PW - 1:0] mask [0:regenx_pkg_PROWS - 1];
	reg [4:0] sig_s [0:regenx_pkg_PROWS - 1];
	reg [4:0] sig_c [0:regenx_pkg_PROWS - 1];
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	function automatic signed [31:0] ones;
		input reg [PW - 1:0] v;
		reg signed [31:0] n;
		begin
			n = 0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < PW; i = i + 1)
					n = n + sv2v_cast_32_signed(v[i]);
			end
			ones = n;
		end
	endfunction
	function automatic [2:0] classify;
		input reg bad;
		input reg [PW - 1:0] m;
		input reg [4:0] s;
		input reg [4:0] c;
		if (!bad)
			classify = 3'd0;
		else if (ones(m) > 1)
			classify = 3'd5;
		else if ((s == 5'd0) && (c == 5'd0))
			classify = 3'd6;
		else if (s == 5'd0)
			classify = 3'd4;
		else if (s[0])
			classify = 3'd1;
		else if (s[1])
			classify = 3'd2;
		else
			classify = 3'd3;
	endfunction
	function automatic signed [4:0] sv2v_cast_5_signed;
		input reg signed [4:0] inp;
		sv2v_cast_5_signed = inp;
	endfunction
	always @(posedge clk)
		if (!rst_n) begin
			bad_phys <= 1'sb0;
			fault_count <= 1'sb0;
			last_valid <= 1'b0;
			last_row <= 1'sb0;
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < regenx_pkg_PROWS; i = i + 1)
					begin
						mask[i] <= 1'sb0;
						sig_s[i] <= 1'sb0;
						sig_c[i] <= 1'sb0;
					end
			end
		end
		else if (log_valid && (log_row < sv2v_cast_5_signed(regenx_pkg_PROWS))) begin
			if (!bad_phys[log_row])
				fault_count <= fault_count + 6'd1;
			bad_phys[log_row] <= 1'b1;
			mask[log_row] <= mask[log_row] | log_mask;
			last_valid <= 1'b1;
			last_row <= log_row;
			if ((log_elem != 3'd0) && (log_elem <= 3'd5)) begin
				if (log_pass == 2'd0)
					sig_s[log_row][log_elem - 3'd1] <= 1'b1;
				if (log_pass == 2'd1)
					sig_c[log_row][log_elem - 3'd1] <= 1'b1;
			end
		end
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < regenx_pkg_PROWS; i = i + 1)
				severe_phys[i] = bad_phys[i] && (!ECC_EN || (ones(mask[i]) > 1));
		end
	end
	assign q_class = classify(bad_phys[q_row], mask[q_row], sig_s[q_row], sig_c[q_row]);
	assign last_class = classify(bad_phys[last_row], mask[last_row], sig_s[last_row], sig_c[last_row]);
	initial _sv2v_0 = 0;
endmodule
module regenx_spare_allocator (
	clk,
	rst_n,
	spare_bad,
	take_valid,
	take_idx,
	take_row,
	rel_valid,
	rel_idx,
	used,
	owner0,
	owner1,
	have_free,
	free_idx
);
	input wire clk;
	input wire rst_n;
	localparam signed [31:0] regenx_pkg_SPARES = 2;
	input wire [1:0] spare_bad;
	input wire take_valid;
	input wire take_idx;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	input wire [3:0] take_row;
	input wire rel_valid;
	input wire rel_idx;
	output reg [1:0] used;
	output reg [3:0] owner0;
	output reg [3:0] owner1;
	output wire have_free;
	output wire free_idx;
	wire [1:0] avail;
	assign avail = ~used & ~spare_bad;
	assign have_free = |avail;
	assign free_idx = (avail[0] ? 1'b0 : 1'b1);
	always @(posedge clk)
		if (!rst_n) begin
			used <= 1'sb0;
			owner0 <= 1'sb0;
			owner1 <= 1'sb0;
		end
		else begin
			if (rel_valid)
				used[rel_idx] <= 1'b0;
			if (take_valid) begin
				used[take_idx] <= 1'b1;
				if (take_idx)
					owner1 <= take_row;
				else
					owner0 <= take_row;
			end
		end
endmodule
module regenx_addr_remap (
	clk,
	rst_n,
	wr_valid,
	wr_kind,
	wr_row,
	wr_phys,
	l2p_flat,
	remapped,
	assist,
	unavail,
	remapped_cnt,
	degraded
);
	reg _sv2v_0;
	input wire clk;
	input wire rst_n;
	input wire wr_valid;
	input wire [1:0] wr_kind;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	input wire [3:0] wr_row;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [4:0] wr_phys;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	output reg [(regenx_pkg_LROWS * regenx_pkg_PAW) - 1:0] l2p_flat;
	output reg [15:0] remapped;
	output reg [15:0] assist;
	output reg [15:0] unavail;
	output reg [4:0] remapped_cnt;
	output wire degraded;
	reg [4:0] l2p [0:15];
	function automatic signed [4:0] sv2v_cast_5_signed;
		input reg signed [4:0] inp;
		sv2v_cast_5_signed = inp;
	endfunction
	always @(posedge clk)
		if (!rst_n) begin
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < regenx_pkg_LROWS; i = i + 1)
					l2p[i] <= sv2v_cast_5_signed(i);
			end
			remapped <= 1'sb0;
			assist <= 1'sb0;
			unavail <= 1'sb0;
		end
		else if (wr_valid)
			case (wr_kind)
				2'd0: begin
					l2p[wr_row] <= {1'b0, wr_row};
					remapped[wr_row] <= 1'b0;
					assist[wr_row] <= 1'b0;
					unavail[wr_row] <= 1'b0;
				end
				2'd1: begin
					l2p[wr_row] <= wr_phys;
					remapped[wr_row] <= 1'b1;
					assist[wr_row] <= 1'b0;
					unavail[wr_row] <= 1'b0;
				end
				2'd2: assist[wr_row] <= 1'b1;
				2'd3: unavail[wr_row] <= 1'b1;
			endcase
	function automatic [4:0] sv2v_cast_5;
		input reg [4:0] inp;
		sv2v_cast_5 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < regenx_pkg_LROWS; i = i + 1)
				l2p_flat[i * regenx_pkg_PAW+:regenx_pkg_PAW] = l2p[i];
		end
		remapped_cnt = 1'sb0;
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < regenx_pkg_LROWS; i = i + 1)
				remapped_cnt = remapped_cnt + sv2v_cast_5(remapped[i]);
		end
	end
	assign degraded = |assist | (|unavail);
	initial _sv2v_0 = 0;
endmodule
module regenx_mem_arbiter (
	bist_done,
	init_done,
	scrub_busy,
	b_en,
	b_we,
	b_addr,
	b_wdata,
	r_en,
	r_we,
	r_addr,
	r_wdata,
	s_en,
	s_we,
	s_addr,
	s_wdata,
	h_en,
	h_we,
	h_addr,
	h_wdata,
	mem_en,
	mem_we,
	mem_addr,
	mem_wdata,
	grant,
	clash
);
	reg _sv2v_0;
	localparam signed [31:0] regenx_pkg_CW = 13;
	parameter signed [31:0] PW = regenx_pkg_CW;
	input wire bist_done;
	input wire init_done;
	input wire scrub_busy;
	input wire b_en;
	input wire b_we;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [4:0] b_addr;
	input wire [PW - 1:0] b_wdata;
	input wire r_en;
	input wire r_we;
	input wire [4:0] r_addr;
	input wire [PW - 1:0] r_wdata;
	input wire s_en;
	input wire s_we;
	input wire [4:0] s_addr;
	input wire [PW - 1:0] s_wdata;
	input wire h_en;
	input wire h_we;
	input wire [4:0] h_addr;
	input wire [PW - 1:0] h_wdata;
	output reg mem_en;
	output reg mem_we;
	output reg [4:0] mem_addr;
	output reg [PW - 1:0] mem_wdata;
	output reg [3:0] grant;
	output reg clash;
	always @(*) begin
		if (_sv2v_0)
			;
		grant = 4'b0000;
		if (!bist_done)
			grant = 4'b0001;
		else if (!init_done)
			grant = 4'b0010;
		else if (scrub_busy)
			grant = 4'b0100;
		else
			grant = 4'b1000;
		case (1'b1)
			grant[0]: {mem_en, mem_we, mem_addr, mem_wdata} = {b_en, b_we, b_addr, b_wdata};
			grant[1]: {mem_en, mem_we, mem_addr, mem_wdata} = {r_en, r_we, r_addr, r_wdata};
			grant[2]: {mem_en, mem_we, mem_addr, mem_wdata} = {s_en, s_we, s_addr, s_wdata};
			default: {mem_en, mem_we, mem_addr, mem_wdata} = {h_en, h_we, h_addr, h_wdata};
		endcase
		clash = (((b_en && !grant[0]) || (r_en && !grant[1])) || (s_en && !grant[2])) || (h_en && !grant[3]);
	end
	initial _sv2v_0 = 0;
endmodule
module regenx_recovery_check (
	clk,
	rst_n,
	start,
	row,
	l2p_flat,
	busy,
	done,
	pass,
	mem_en,
	mem_we,
	mem_addr,
	mem_wdata,
	mem_rdata
);
	reg _sv2v_0;
	parameter [0:0] ECC_EN = 1'b1;
	localparam signed [31:0] regenx_pkg_CW = 13;
	parameter signed [31:0] PW = regenx_pkg_CW;
	input wire clk;
	input wire rst_n;
	input wire start;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	input wire [3:0] row;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [(regenx_pkg_LROWS * regenx_pkg_PAW) - 1:0] l2p_flat;
	output wire busy;
	output wire done;
	output wire pass;
	output wire mem_en;
	output wire mem_we;
	output wire [4:0] mem_addr;
	output wire [PW - 1:0] mem_wdata;
	input wire [PW - 1:0] mem_rdata;
	reg [2:0] state;
	reg [3:0] row_q;
	reg [1:0] k;
	reg fail;
	reg [7:0] pat;
	always @(*) begin
		if (_sv2v_0)
			;
		case (k)
			2'd0: pat = 8'h55;
			2'd1: pat = 8'haa;
			2'd2: pat = 8'hff;
			default: pat = 8'h00;
		endcase
	end
	wire [7:0] rd_data;
	wire rd_fixed;
	wire rd_bad;
	regenx_ecc_enc #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_enc(
		.data(pat),
		.word(mem_wdata)
	);
	regenx_ecc_dec #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_dec(
		.word(mem_rdata),
		.data(rd_data),
		.corrected(rd_fixed),
		.uncorrectable(rd_bad)
	);
	assign mem_addr = l2p_flat[row_q * regenx_pkg_PAW+:regenx_pkg_PAW];
	assign mem_en = (state == 3'd1) || (state == 3'd2);
	assign mem_we = state == 3'd1;
	assign busy = state != 3'd0;
	assign done = state == 3'd4;
	assign pass = !fail;
	always @(posedge clk)
		if (!rst_n) begin
			state <= 3'd0;
			row_q <= 1'sb0;
			k <= 1'sb0;
			fail <= 1'b0;
		end
		else
			case (state)
				3'd0:
					if (start) begin
						row_q <= row;
						k <= 2'd0;
						fail <= 1'b0;
						state <= 3'd1;
					end
				3'd1: state <= 3'd2;
				3'd2: state <= 3'd3;
				3'd3: begin
					if ((rd_data != pat) || rd_bad)
						fail <= 1'b1;
					if (k == 2'd3)
						state <= 3'd4;
					else begin
						k <= k + 2'd1;
						state <= 3'd1;
					end
				end
				3'd4: state <= 3'd0;
				default: state <= 3'd0;
			endcase
	initial _sv2v_0 = 0;
endmodule
module regenx_repair_engine (
	clk,
	rst_n,
	bist_done,
	done,
	bad_phys,
	severe_phys,
	l2p_flat,
	remapped,
	assist,
	have_free,
	free_idx,
	take_valid,
	take_idx,
	take_row,
	rel_valid,
	rel_idx,
	rm_valid,
	rm_kind,
	rm_row,
	rm_phys,
	log_valid,
	log_row,
	rec_start,
	rec_row,
	rec_done,
	rec_pass,
	ev_verify_fail
);
	reg _sv2v_0;
	input wire clk;
	input wire rst_n;
	input wire bist_done;
	output wire done;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	localparam signed [31:0] regenx_pkg_SPARES = 2;
	localparam signed [31:0] regenx_pkg_PROWS = regenx_pkg_LROWS + regenx_pkg_SPARES;
	input wire [regenx_pkg_PROWS - 1:0] bad_phys;
	input wire [regenx_pkg_PROWS - 1:0] severe_phys;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [(regenx_pkg_LROWS * regenx_pkg_PAW) - 1:0] l2p_flat;
	input wire [15:0] remapped;
	input wire [15:0] assist;
	input wire have_free;
	input wire free_idx;
	output reg take_valid;
	output reg take_idx;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	output reg [3:0] take_row;
	output reg rel_valid;
	output reg rel_idx;
	output reg rm_valid;
	output reg [1:0] rm_kind;
	output reg [3:0] rm_row;
	output reg [4:0] rm_phys;
	output reg log_valid;
	output reg [4:0] log_row;
	output reg rec_start;
	output reg [3:0] rec_row;
	input wire rec_done;
	input wire rec_pass;
	output reg ev_verify_fail;
	reg [2:0] state;
	reg [3:0] row;
	reg mild;
	wire last_row;
	function automatic signed [3:0] sv2v_cast_4_signed;
		input reg signed [3:0] inp;
		sv2v_cast_4_signed = inp;
	endfunction
	assign last_row = row == sv2v_cast_4_signed(15);
	assign done = state == 3'd6;
	wire [4:0] cur_phys;
	assign cur_phys = l2p_flat[row * regenx_pkg_PAW+:regenx_pkg_PAW];
	function automatic [4:0] sv2v_cast_5;
		input reg [4:0] inp;
		sv2v_cast_5 = inp;
	endfunction
	function automatic signed [4:0] sv2v_cast_5_signed;
		input reg signed [4:0] inp;
		sv2v_cast_5_signed = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		take_valid = 1'b0;
		take_idx = free_idx;
		take_row = row;
		rel_valid = 1'b0;
		rel_idx = 1'b0;
		rm_valid = 1'b0;
		rm_kind = 2'd0;
		rm_row = row;
		rm_phys = 1'sb0;
		log_valid = 1'b0;
		log_row = cur_phys;
		rec_start = 1'b0;
		rec_row = row;
		ev_verify_fail = 1'b0;
		case (state)
			3'd1:
				if (bad_phys[sv2v_cast_5(row)] && (mild ? !severe_phys[sv2v_cast_5(row)] : severe_phys[sv2v_cast_5(row)])) begin
					rm_valid = 1'b1;
					if (have_free) begin
						take_valid = 1'b1;
						rm_kind = 2'd1;
						rm_phys = sv2v_cast_5_signed(regenx_pkg_LROWS) + sv2v_cast_5(free_idx);
					end
					else
						rm_kind = (mild ? 2'd2 : 2'd3);
				end
			3'd2: rec_start = remapped[row] || assist[row];
			3'd3: ev_verify_fail = rec_done && !rec_pass;
			3'd4:
				if (remapped[row]) begin
					log_valid = 1'b1;
					rel_valid = 1'b1;
					rel_idx = cur_phys[0];
					rm_valid = 1'b1;
					rm_kind = 2'd0;
				end
				else begin
					rm_valid = 1'b1;
					rm_kind = 2'd3;
				end
			3'd5: begin
				rm_valid = 1'b1;
				if (have_free) begin
					take_valid = 1'b1;
					rm_kind = 2'd1;
					rm_phys = sv2v_cast_5_signed(regenx_pkg_LROWS) + sv2v_cast_5(free_idx);
				end
				else
					rm_kind = (severe_phys[sv2v_cast_5(row)] ? 2'd3 : 2'd2);
			end
			default:
				;
		endcase
	end
	always @(posedge clk)
		if (!rst_n) begin
			state <= 3'd0;
			row <= 1'sb0;
			mild <= 1'b0;
		end
		else
			case (state)
				3'd0:
					if (bist_done) begin
						row <= 1'sb0;
						mild <= 1'b0;
						state <= 3'd1;
					end
				3'd1:
					if (last_row) begin
						row <= 1'sb0;
						if (mild)
							state <= 3'd2;
						else
							mild <= 1'b1;
					end
					else
						row <= row + 1'b1;
				3'd2:
					if (rec_start)
						state <= 3'd3;
					else if (last_row)
						state <= 3'd6;
					else
						row <= row + 1'b1;
				3'd3:
					if (rec_done) begin
						if (rec_pass) begin
							if (last_row)
								state <= 3'd6;
							else begin
								row <= row + 1'b1;
								state <= 3'd2;
							end
						end
						else
							state <= 3'd4;
					end
				3'd4:
					if (remapped[row])
						state <= 3'd5;
					else if (last_row)
						state <= 3'd6;
					else begin
						row <= row + 1'b1;
						state <= 3'd2;
					end
				3'd5: state <= 3'd2;
				default:
					;
			endcase
	initial _sv2v_0 = 0;
endmodule
module regenx_mem_controller (
	clk,
	rst_n,
	init_done,
	scrub_busy,
	req_valid,
	req_ready,
	req_write,
	req_addr,
	req_wdata,
	rsp_valid,
	rsp_rdata,
	rsp_error,
	rsp_corrected,
	l2p_flat,
	unavail,
	mem_en,
	mem_we,
	mem_addr,
	mem_wdata,
	mem_rdata,
	idle,
	hint_valid,
	hint_row,
	ev_fix,
	ev_unc
);
	parameter [0:0] ECC_EN = 1'b1;
	localparam signed [31:0] regenx_pkg_CW = 13;
	parameter signed [31:0] PW = regenx_pkg_CW;
	input wire clk;
	input wire rst_n;
	input wire init_done;
	input wire scrub_busy;
	input wire req_valid;
	output wire req_ready;
	input wire req_write;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	input wire [3:0] req_addr;
	localparam signed [31:0] regenx_pkg_DW = 8;
	input wire [7:0] req_wdata;
	output reg rsp_valid;
	output reg [7:0] rsp_rdata;
	output reg rsp_error;
	output reg rsp_corrected;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [(regenx_pkg_LROWS * regenx_pkg_PAW) - 1:0] l2p_flat;
	input wire [15:0] unavail;
	output wire mem_en;
	output wire mem_we;
	output wire [4:0] mem_addr;
	output wire [PW - 1:0] mem_wdata;
	input wire [PW - 1:0] mem_rdata;
	output wire idle;
	output wire hint_valid;
	output wire [3:0] hint_row;
	output wire ev_fix;
	output wire ev_unc;
	reg [1:0] state;
	reg wr_q;
	reg err_q;
	reg [3:0] addr_q;
	reg [7:0] wdata_q;
	reg [4:0] phys_q;
	assign idle = state == 2'd0;
	assign req_ready = (init_done && idle) && !scrub_busy;
	regenx_ecc_enc #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_enc(
		.data(wdata_q),
		.word(mem_wdata)
	);
	wire [7:0] rd_data;
	wire rd_fixed;
	wire rd_bad;
	regenx_ecc_dec #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_dec(
		.word(mem_rdata),
		.data(rd_data),
		.corrected(rd_fixed),
		.uncorrectable(rd_bad)
	);
	assign mem_en = (state == 2'd2) && !err_q;
	assign mem_we = wr_q;
	assign mem_addr = phys_q;
	wire read_ok;
	assign read_ok = ((state == 2'd3) && !wr_q) && !err_q;
	assign hint_valid = read_ok && (rd_fixed || rd_bad);
	assign hint_row = addr_q;
	assign ev_fix = read_ok && rd_fixed;
	assign ev_unc = read_ok && rd_bad;
	always @(posedge clk)
		if (!rst_n) begin
			state <= 2'd0;
			wr_q <= 1'b0;
			err_q <= 1'b0;
			addr_q <= 1'sb0;
			wdata_q <= 1'sb0;
			phys_q <= 1'sb0;
			rsp_valid <= 1'b0;
			rsp_rdata <= 1'sb0;
			rsp_error <= 1'b0;
			rsp_corrected <= 1'b0;
		end
		else begin
			rsp_valid <= 1'b0;
			rsp_error <= 1'b0;
			rsp_corrected <= 1'b0;
			case (state)
				2'd0:
					if (req_valid && req_ready) begin
						wr_q <= req_write;
						addr_q <= req_addr;
						wdata_q <= req_wdata;
						state <= 2'd1;
					end
				2'd1: begin
					phys_q <= l2p_flat[addr_q * regenx_pkg_PAW+:regenx_pkg_PAW];
					err_q <= unavail[addr_q];
					state <= 2'd2;
				end
				2'd2: state <= 2'd3;
				2'd3: begin
					rsp_valid <= 1'b1;
					rsp_error <= err_q || (read_ok && rd_bad);
					rsp_corrected <= read_ok && rd_fixed;
					rsp_rdata <= (read_ok && !rd_bad ? rd_data : {8 {1'sb0}});
					state <= 2'd0;
				end
			endcase
		end
endmodule
module regenx_scrubber (
	clk,
	rst_n,
	enable,
	kick,
	init_done,
	host_idle,
	hint_valid,
	hint_row,
	busy,
	mem_en,
	mem_we,
	mem_addr,
	mem_wdata,
	mem_rdata,
	l2p_flat,
	assist,
	unavail,
	rm_valid,
	rm_kind,
	rm_row,
	rm_phys,
	have_free,
	free_idx,
	spare_used,
	spare_bad,
	take_valid,
	take_idx,
	take_row,
	rel_valid,
	rel_idx,
	log_valid,
	log_row,
	log_mask,
	ev_check,
	ev_fault,
	ev_migrate,
	ev_round,
	ev_lost,
	lost_row
);
	reg _sv2v_0;
	parameter [0:0] ECC_EN = 1'b1;
	localparam signed [31:0] regenx_pkg_CW = 13;
	parameter signed [31:0] PW = regenx_pkg_CW;
	parameter signed [31:0] PERIOD = 0;
	input wire clk;
	input wire rst_n;
	input wire enable;
	input wire kick;
	input wire init_done;
	input wire host_idle;
	input wire hint_valid;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	input wire [3:0] hint_row;
	output reg busy;
	output reg mem_en;
	output reg mem_we;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	output reg [4:0] mem_addr;
	output reg [PW - 1:0] mem_wdata;
	input wire [PW - 1:0] mem_rdata;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	input wire [(regenx_pkg_LROWS * regenx_pkg_PAW) - 1:0] l2p_flat;
	input wire [15:0] assist;
	input wire [15:0] unavail;
	output reg rm_valid;
	output reg [1:0] rm_kind;
	output reg [3:0] rm_row;
	output reg [4:0] rm_phys;
	input wire have_free;
	input wire free_idx;
	localparam signed [31:0] regenx_pkg_SPARES = 2;
	input wire [1:0] spare_used;
	input wire [1:0] spare_bad;
	output reg take_valid;
	output reg take_idx;
	output reg [3:0] take_row;
	output reg rel_valid;
	output reg rel_idx;
	output reg log_valid;
	output reg [4:0] log_row;
	output reg [PW - 1:0] log_mask;
	output reg ev_check;
	output reg ev_fault;
	output reg ev_migrate;
	output reg ev_round;
	output reg ev_lost;
	output wire [3:0] lost_row;
	reg [4:0] state;
	reg [PW - 1:0] chk;
	always @(*) begin : sv2v_autoblock_1
		reg signed [31:0] i;
		if (_sv2v_0)
			;
		for (i = 0; i < PW; i = i + 1)
			chk[i] = (i % 2) == 1;
	end
	reg is_spare;
	reg mig_sp;
	reg rest_fail;
	reg round_on;
	reg hint_pend;
	reg [3:0] tgt_row;
	reg [3:0] hint_q;
	reg tgt_sp;
	reg [4:0] phys_q;
	reg [2:0] step;
	reg [PW - 1:0] fail_mask;
	reg [7:0] data_q;
	reg [4:0] ptr;
	reg [31:0] tmr;
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	function automatic signed [31:0] ones;
		input reg [PW - 1:0] v;
		reg signed [31:0] n;
		begin
			n = 0;
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < PW; i = i + 1)
					n = n + sv2v_cast_32_signed(v[i]);
			end
			ones = n;
		end
	endfunction
	reg [PW - 1:0] pat;
	always @(*) begin
		if (_sv2v_0)
			;
		case (step)
			3'd0: pat = 1'sb0;
			3'd1: pat = 1'sb1;
			3'd2: pat = 1'sb0;
			3'd3: pat = chk;
			default: pat = ~chk;
		endcase
	end
	assign lost_row = tgt_row;
	wire [PW - 1:0] enc_word;
	wire [7:0] rd_data;
	wire rd_fixed;
	wire rd_bad;
	regenx_ecc_enc #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_enc(
		.data(data_q),
		.word(enc_word)
	);
	regenx_ecc_dec #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_dec(
		.word(mem_rdata),
		.data(rd_data),
		.corrected(rd_fixed),
		.uncorrectable(rd_bad)
	);
	wire failed;
	assign failed = (fail_mask != {PW {1'sb0}}) || rest_fail;
	function automatic signed [4:0] sv2v_cast_5_signed;
		input reg signed [4:0] inp;
		sv2v_cast_5_signed = inp;
	endfunction
	function automatic [4:0] sv2v_cast_5;
		input reg [4:0] inp;
		sv2v_cast_5 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		mem_en = 1'b0;
		mem_we = 1'b0;
		mem_addr = phys_q;
		mem_wdata = pat;
		case (state)
			5'd2, 5'd6, 5'd9: mem_en = 1'b1;
			5'd5: begin
				mem_en = 1'b1;
				mem_we = 1'b1;
			end
			5'd8: begin
				mem_en = 1'b1;
				mem_we = 1'b1;
				mem_wdata = enc_word;
			end
			5'd13: begin
				mem_en = 1'b1;
				mem_we = 1'b1;
				mem_wdata = enc_word;
				mem_addr = sv2v_cast_5_signed(regenx_pkg_LROWS) + sv2v_cast_5(mig_sp);
			end
			5'd14: begin
				mem_en = 1'b1;
				mem_addr = sv2v_cast_5_signed(regenx_pkg_LROWS) + sv2v_cast_5(mig_sp);
			end
			default:
				;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		rm_valid = 1'b0;
		rm_kind = 2'd0;
		rm_row = tgt_row;
		rm_phys = 1'sb0;
		take_valid = 1'b0;
		take_idx = mig_sp;
		take_row = tgt_row;
		rel_valid = 1'b0;
		rel_idx = 1'b0;
		log_valid = 1'b0;
		log_row = phys_q;
		log_mask = fail_mask;
		ev_check = 1'b0;
		ev_fault = 1'b0;
		ev_migrate = 1'b0;
		ev_lost = 1'b0;
		case (state)
			5'd4: begin
				rm_valid = 1'b1;
				rm_kind = 2'd3;
				ev_lost = 1'b1;
			end
			5'd11: begin
				ev_check = 1'b1;
				if (failed) begin
					log_valid = 1'b1;
					log_mask = (fail_mask == {PW {1'sb0}} ? {PW {1'sb1}} : fail_mask);
					ev_fault = 1'b1;
				end
			end
			5'd12:
				if (!have_free) begin
					rm_valid = 1'b1;
					rm_kind = ((ECC_EN && !rest_fail) && (ones(fail_mask) == 1) ? 2'd2 : 2'd3);
				end
			5'd15:
				if ((rd_data == data_q) && !rd_bad) begin
					take_valid = 1'b1;
					rm_valid = 1'b1;
					rm_kind = 2'd1;
					rm_phys = sv2v_cast_5_signed(regenx_pkg_LROWS) + sv2v_cast_5(mig_sp);
					ev_migrate = 1'b1;
					if (phys_q >= sv2v_cast_5_signed(regenx_pkg_LROWS)) begin
						rel_valid = 1'b1;
						rel_idx = phys_q[0];
					end
				end
				else begin
					log_valid = 1'b1;
					log_row = sv2v_cast_5_signed(regenx_pkg_LROWS) + sv2v_cast_5(mig_sp);
					log_mask = 1'sb1;
				end
			default:
				;
		endcase
	end
	wire tmr_hit;
	assign tmr_hit = (((PERIOD != 0) && enable) && init_done) && (tmr == sv2v_cast_32_signed(PERIOD - 1));
	always @(posedge clk)
		if (!rst_n)
			tmr <= 1'sb0;
		else if (tmr_hit)
			tmr <= 1'sb0;
		else if (PERIOD != 0)
			tmr <= tmr + 32'd1;
	always @(posedge clk)
		if (!rst_n) begin
			state <= 5'd0;
			busy <= 1'b0;
			is_spare <= 1'b0;
			tgt_row <= 1'sb0;
			tgt_sp <= 1'b0;
			phys_q <= 1'sb0;
			step <= 1'sb0;
			fail_mask <= 1'sb0;
			rest_fail <= 1'b0;
			data_q <= 1'sb0;
			mig_sp <= 1'b0;
			ptr <= 1'sb0;
			round_on <= 1'b0;
			hint_pend <= 1'b0;
			hint_q <= 1'sb0;
			ev_round <= 1'b0;
		end
		else begin
			ev_round <= 1'b0;
			if ((hint_valid && enable) && !hint_pend) begin
				hint_pend <= 1'b1;
				hint_q <= hint_row;
			end
			if ((((kick || tmr_hit) && enable) && init_done) && !round_on) begin
				round_on <= 1'b1;
				ptr <= 1'sb0;
			end
			case (state)
				5'd0:
					if ((enable && init_done) && host_idle) begin
						if (hint_pend) begin
							hint_pend <= 1'b0;
							tgt_row <= hint_q;
							is_spare <= 1'b0;
							busy <= 1'b1;
							state <= 5'd1;
						end
						else if (round_on) begin
							if (ptr == 5'd18) begin
								round_on <= 1'b0;
								ev_round <= 1'b1;
							end
							else begin
								ptr <= ptr + 5'd1;
								busy <= 1'b1;
								state <= 5'd1;
								if (ptr < 5'd16) begin
									is_spare <= 1'b0;
									tgt_row <= ptr[3:0];
								end
								else begin
									is_spare <= 1'b1;
									tgt_sp <= ptr[0];
								end
							end
						end
					end
				5'd1: begin
					step <= 1'sb0;
					fail_mask <= 1'sb0;
					rest_fail <= 1'b0;
					if (!is_spare) begin
						if (unavail[tgt_row])
							state <= 5'd16;
						else begin
							phys_q <= l2p_flat[tgt_row * regenx_pkg_PAW+:regenx_pkg_PAW];
							state <= 5'd2;
						end
					end
					else if (spare_used[tgt_sp] || spare_bad[tgt_sp])
						state <= 5'd16;
					else begin
						phys_q <= sv2v_cast_5_signed(regenx_pkg_LROWS) + sv2v_cast_5(tgt_sp);
						state <= 5'd5;
					end
				end
				5'd2: state <= 5'd3;
				5'd3:
					if (rd_bad)
						state <= 5'd4;
					else begin
						data_q <= rd_data;
						state <= 5'd5;
					end
				5'd4: state <= 5'd16;
				5'd5: state <= 5'd6;
				5'd6: state <= 5'd7;
				5'd7: begin
					fail_mask <= fail_mask | (mem_rdata ^ pat);
					if (step == 3'd4)
						state <= (is_spare ? 5'd11 : 5'd8);
					else begin
						step <= step + 3'd1;
						state <= 5'd5;
					end
				end
				5'd8: state <= 5'd9;
				5'd9: state <= 5'd10;
				5'd10: begin
					if ((rd_data != data_q) || rd_bad)
						rest_fail <= 1'b1;
					state <= 5'd11;
				end
				5'd11:
					if (!failed || is_spare)
						state <= 5'd16;
					else if ((assist[tgt_row] && !rest_fail) && (ones(fail_mask) <= 1))
						state <= 5'd16;
					else
						state <= 5'd12;
				5'd12:
					if (have_free) begin
						mig_sp <= free_idx;
						state <= 5'd13;
					end
					else
						state <= 5'd16;
				5'd13: state <= 5'd14;
				5'd14: state <= 5'd15;
				5'd15: state <= ((rd_data == data_q) && !rd_bad ? 5'd16 : 5'd12);
				5'd16: begin
					busy <= 1'b0;
					state <= 5'd0;
				end
				default: state <= 5'd0;
			endcase
		end
	initial _sv2v_0 = 0;
endmodule
module regenx_status_regs (
	clk,
	rst_n,
	status_clear,
	reg_addr,
	reg_rdata,
	init_done,
	bist_busy,
	degraded,
	scrub_busy,
	ecc_en,
	fault_count,
	last_valid,
	last_row,
	last_class,
	spare_used,
	spare_bad,
	owner0,
	owner1,
	remapped_cnt,
	assist,
	unavail,
	ev_fix,
	ev_unc,
	ev_verify_fail,
	ev_check,
	ev_fault,
	ev_migrate,
	ev_round,
	ev_lost,
	lost_row,
	data_lost
);
	reg _sv2v_0;
	input wire clk;
	input wire rst_n;
	input wire status_clear;
	input wire [3:0] reg_addr;
	output reg [31:0] reg_rdata;
	input wire init_done;
	input wire bist_busy;
	input wire degraded;
	input wire scrub_busy;
	input wire ecc_en;
	input wire [5:0] fault_count;
	input wire last_valid;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	input wire [4:0] last_row;
	input wire [2:0] last_class;
	localparam signed [31:0] regenx_pkg_SPARES = 2;
	input wire [1:0] spare_used;
	input wire [1:0] spare_bad;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	input wire [3:0] owner0;
	input wire [3:0] owner1;
	input wire [4:0] remapped_cnt;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	input wire [15:0] assist;
	input wire [15:0] unavail;
	input wire ev_fix;
	input wire ev_unc;
	input wire ev_verify_fail;
	input wire ev_check;
	input wire ev_fault;
	input wire ev_migrate;
	input wire ev_round;
	input wire ev_lost;
	input wire [3:0] lost_row;
	output reg data_lost;
	reg [15:0] n_fix;
	reg [15:0] n_unc;
	reg [7:0] n_chk;
	reg [7:0] n_flt;
	reg [7:0] n_mig;
	reg [7:0] n_rnd;
	reg [4:0] n_vfail;
	reg [7:0] n_lost;
	reg [15:0] lost_map;
	function automatic [4:0] sv2v_cast_5;
		input reg [4:0] inp;
		sv2v_cast_5 = inp;
	endfunction
	function automatic [4:0] count16;
		input reg [15:0] v;
		reg [4:0] n;
		begin
			n = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < regenx_pkg_LROWS; i = i + 1)
					n = n + sv2v_cast_5(v[i]);
			end
			count16 = n;
		end
	endfunction
	always @(posedge clk) begin
		if (!rst_n || status_clear) begin
			n_fix <= 1'sb0;
			n_unc <= 1'sb0;
			n_chk <= 1'sb0;
			n_flt <= 1'sb0;
			n_mig <= 1'sb0;
			n_rnd <= 1'sb0;
			n_vfail <= 1'sb0;
			n_lost <= 1'sb0;
			lost_map <= 1'sb0;
			data_lost <= 1'b0;
		end
		if (rst_n && !status_clear) begin
			if (ev_lost) begin
				data_lost <= 1'b1;
				lost_map[lost_row] <= 1'b1;
				if (n_lost != {8 {1'sb1}})
					n_lost <= n_lost + 1'b1;
			end
			if (ev_fix && (n_fix != {16 {1'sb1}}))
				n_fix <= n_fix + 1'b1;
			if (ev_unc && (n_unc != {16 {1'sb1}}))
				n_unc <= n_unc + 1'b1;
			if (ev_check && (n_chk != {8 {1'sb1}}))
				n_chk <= n_chk + 1'b1;
			if (ev_fault && (n_flt != {8 {1'sb1}}))
				n_flt <= n_flt + 1'b1;
			if (ev_migrate && (n_mig != {8 {1'sb1}}))
				n_mig <= n_mig + 1'b1;
			if (ev_round && (n_rnd != {8 {1'sb1}}))
				n_rnd <= n_rnd + 1'b1;
			if (ev_verify_fail && (n_vfail != {5 {1'sb1}}))
				n_vfail <= n_vfail + 1'b1;
		end
	end
	always @(*) begin
		if (_sv2v_0)
			;
		case (reg_addr)
			4'd0: reg_rdata = {25'd0, data_lost, ecc_en, scrub_busy, |unavail, degraded, bist_busy, init_done};
			4'd1: reg_rdata = {26'd0, fault_count};
			4'd2: reg_rdata = {23'd0, last_valid, last_class, last_row};
			4'd3: reg_rdata = {20'd0, owner1, owner0, spare_bad, spare_used};
			4'd4: reg_rdata = {12'd0, n_vfail, count16(unavail), count16(assist), remapped_cnt};
			4'd5: reg_rdata = {16'd0, unavail};
			4'd6: reg_rdata = {n_unc, n_fix};
			4'd7: reg_rdata = {n_rnd, n_mig, n_flt, n_chk};
			4'd8: reg_rdata = {8'd0, n_lost, lost_map};
			default: reg_rdata = 32'd0;
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
module regenx_top (
	clk,
	rst_n,
	req_valid,
	req_ready,
	req_write,
	req_addr,
	req_wdata,
	rsp_valid,
	rsp_rdata,
	rsp_error,
	rsp_corrected,
	scrub_en,
	scrub_req,
	status_clear,
	reg_addr,
	reg_rdata,
	init_done,
	bist_busy,
	degraded,
	scrub_busy,
	data_lost,
	fault_count,
	remapped_count,
	dbg_bad_phys,
	dbg_map_flat,
	dbg_unavail,
	dbg_assist,
	dbg_spare_used,
	dbg_class_row,
	dbg_class
);
	reg _sv2v_0;
	parameter [0:0] ECC_EN = 1'b1;
	parameter signed [31:0] PATROL_PERIOD = 0;
	input wire clk;
	input wire rst_n;
	input wire req_valid;
	output wire req_ready;
	input wire req_write;
	input wire [3:0] req_addr;
	input wire [7:0] req_wdata;
	output wire rsp_valid;
	output wire [7:0] rsp_rdata;
	output wire rsp_error;
	output wire rsp_corrected;
	input wire scrub_en;
	input wire scrub_req;
	input wire status_clear;
	input wire [3:0] reg_addr;
	output wire [31:0] reg_rdata;
	output reg init_done;
	output wire bist_busy;
	output wire degraded;
	output wire scrub_busy;
	output wire data_lost;
	output wire [5:0] fault_count;
	output wire [4:0] remapped_count;
	output wire [17:0] dbg_bad_phys;
	output wire [79:0] dbg_map_flat;
	output wire [15:0] dbg_unavail;
	output wire [15:0] dbg_assist;
	output wire [1:0] dbg_spare_used;
	input wire [4:0] dbg_class_row;
	output wire [2:0] dbg_class;
	localparam signed [31:0] regenx_pkg_CW = 13;
	localparam signed [31:0] regenx_pkg_DW = 8;
	localparam signed [31:0] PW = (ECC_EN ? regenx_pkg_CW : regenx_pkg_DW);
	wire bist_done;
	wire rep_done;
	wire clash;
	wire [3:0] grant;
	wire mem_en;
	wire mem_we;
	wire mem_rvalid;
	localparam signed [31:0] regenx_pkg_PAW = 5;
	wire [4:0] mem_addr;
	wire [PW - 1:0] mem_wdata;
	wire [PW - 1:0] mem_rdata;
	wire b_en;
	wire b_we;
	wire r_en;
	wire r_we;
	wire s_en;
	wire s_we;
	wire h_en;
	wire h_we;
	wire [4:0] b_addr;
	wire [4:0] r_addr;
	wire [4:0] s_addr;
	wire [4:0] h_addr;
	wire [PW - 1:0] b_wdata;
	wire [PW - 1:0] r_wdata;
	wire [PW - 1:0] s_wdata;
	wire [PW - 1:0] h_wdata;
	wire bf_valid;
	wire rl_valid;
	wire sl_valid;
	reg lg_valid;
	wire [4:0] bf_row;
	wire [4:0] rl_row;
	wire [4:0] sl_row;
	reg [4:0] lg_row;
	wire [PW - 1:0] bf_mask;
	wire [PW - 1:0] sl_mask;
	reg [PW - 1:0] lg_mask;
	wire [2:0] bf_elem;
	reg [2:0] lg_elem;
	wire [1:0] bf_pass;
	reg [1:0] lg_pass;
	localparam signed [31:0] regenx_pkg_LROWS = 16;
	wire [(regenx_pkg_LROWS * regenx_pkg_PAW) - 1:0] l2p_flat;
	wire [15:0] remapped;
	wire [15:0] assist;
	wire [15:0] unavail;
	localparam signed [31:0] regenx_pkg_SPARES = 2;
	localparam signed [31:0] regenx_pkg_PROWS = regenx_pkg_LROWS + regenx_pkg_SPARES;
	wire [regenx_pkg_PROWS - 1:0] bad_phys;
	wire [regenx_pkg_PROWS - 1:0] severe_phys;
	wire [1:0] spare_used;
	localparam signed [31:0] regenx_pkg_LAW = 4;
	wire [3:0] owner0;
	wire [3:0] owner1;
	wire have_free;
	wire free_idx;
	wire rp_take;
	wire rp_take_idx;
	wire rp_rel;
	wire rp_rel_idx;
	wire rp_rm_v;
	wire [3:0] rp_take_row;
	wire [3:0] rp_rm_row;
	wire [1:0] rp_rm_kind;
	wire [4:0] rp_rm_phys;
	wire sc_take;
	wire sc_take_idx;
	wire sc_rel;
	wire sc_rel_idx;
	wire sc_rm_v;
	wire [3:0] sc_take_row;
	wire [3:0] sc_rm_row;
	wire [1:0] sc_rm_kind;
	wire [4:0] sc_rm_phys;
	wire rec_start;
	wire rec_done;
	wire rec_pass;
	wire rec_busy;
	wire [3:0] rec_row;
	wire ctl_idle;
	wire hint_valid;
	wire [3:0] hint_row;
	wire ev_fix;
	wire ev_unc;
	wire ev_vfail;
	wire ev_chk;
	wire ev_flt;
	wire ev_mig;
	wire ev_rnd;
	wire ev_lost;
	wire [3:0] lost_row;
	wire [4:0] remap_cnt;
	wire last_valid;
	wire [4:0] last_row;
	wire [2:0] last_class;
	regenx_mem_array #(
		.DEPTH(regenx_pkg_PROWS),
		.WIDTH(PW)
	) u_array(
		.clk(clk),
		.rst_n(rst_n),
		.en(mem_en),
		.we(mem_we),
		.addr(mem_addr),
		.wdata(mem_wdata),
		.rdata(mem_rdata),
		.rvalid(mem_rvalid)
	);
	regenx_mem_arbiter #(.PW(PW)) u_arb(
		.bist_done(bist_done),
		.init_done(init_done),
		.scrub_busy(scrub_busy),
		.b_en(b_en),
		.b_we(b_we),
		.b_addr(b_addr),
		.b_wdata(b_wdata),
		.r_en(r_en),
		.r_we(r_we),
		.r_addr(r_addr),
		.r_wdata(r_wdata),
		.s_en(s_en),
		.s_we(s_we),
		.s_addr(s_addr),
		.s_wdata(s_wdata),
		.h_en(h_en),
		.h_we(h_we),
		.h_addr(h_addr),
		.h_wdata(h_wdata),
		.mem_en(mem_en),
		.mem_we(mem_we),
		.mem_addr(mem_addr),
		.mem_wdata(mem_wdata),
		.grant(grant),
		.clash(clash)
	);
	regenx_bist_controller #(.PW(PW)) u_bist(
		.clk(clk),
		.rst_n(rst_n),
		.done(bist_done),
		.mem_en(b_en),
		.mem_we(b_we),
		.mem_addr(b_addr),
		.mem_wdata(b_wdata),
		.mem_rdata(mem_rdata),
		.flt_valid(bf_valid),
		.flt_row(bf_row),
		.flt_mask(bf_mask),
		.flt_elem(bf_elem),
		.flt_pass(bf_pass)
	);
	always @(*) begin
		if (_sv2v_0)
			;
		lg_valid = (bf_valid | rl_valid) | sl_valid;
		lg_row = (bf_valid ? bf_row : (rl_valid ? rl_row : sl_row));
		lg_mask = (bf_valid ? bf_mask : (rl_valid ? {PW {1'b1}} : sl_mask));
		lg_elem = (bf_valid ? bf_elem : 3'd0);
		lg_pass = (bf_valid ? bf_pass : 2'd3);
	end
	regenx_fault_manager #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_fault(
		.clk(clk),
		.rst_n(rst_n),
		.log_valid(lg_valid),
		.log_row(lg_row),
		.log_mask(lg_mask),
		.log_elem(lg_elem),
		.log_pass(lg_pass),
		.bad_phys(bad_phys),
		.severe_phys(severe_phys),
		.fault_count(fault_count),
		.last_valid(last_valid),
		.last_row(last_row),
		.last_class(last_class),
		.q_row(dbg_class_row),
		.q_class(dbg_class)
	);
	regenx_spare_allocator u_alloc(
		.clk(clk),
		.rst_n(rst_n),
		.spare_bad(bad_phys[regenx_pkg_PROWS - 1:regenx_pkg_LROWS]),
		.take_valid((init_done ? sc_take : rp_take)),
		.take_idx((init_done ? sc_take_idx : rp_take_idx)),
		.take_row((init_done ? sc_take_row : rp_take_row)),
		.rel_valid((init_done ? sc_rel : rp_rel)),
		.rel_idx((init_done ? sc_rel_idx : rp_rel_idx)),
		.used(spare_used),
		.owner0(owner0),
		.owner1(owner1),
		.have_free(have_free),
		.free_idx(free_idx)
	);
	regenx_addr_remap u_remap(
		.clk(clk),
		.rst_n(rst_n),
		.wr_valid((init_done ? sc_rm_v : rp_rm_v)),
		.wr_kind((init_done ? sc_rm_kind : rp_rm_kind)),
		.wr_row((init_done ? sc_rm_row : rp_rm_row)),
		.wr_phys((init_done ? sc_rm_phys : rp_rm_phys)),
		.l2p_flat(l2p_flat),
		.remapped(remapped),
		.assist(assist),
		.unavail(unavail),
		.remapped_cnt(remap_cnt),
		.degraded(degraded)
	);
	regenx_repair_engine u_repair(
		.clk(clk),
		.rst_n(rst_n),
		.bist_done(bist_done),
		.done(rep_done),
		.bad_phys(bad_phys),
		.severe_phys(severe_phys),
		.l2p_flat(l2p_flat),
		.remapped(remapped),
		.assist(assist),
		.have_free(have_free),
		.free_idx(free_idx),
		.take_valid(rp_take),
		.take_idx(rp_take_idx),
		.take_row(rp_take_row),
		.rel_valid(rp_rel),
		.rel_idx(rp_rel_idx),
		.rm_valid(rp_rm_v),
		.rm_kind(rp_rm_kind),
		.rm_row(rp_rm_row),
		.rm_phys(rp_rm_phys),
		.log_valid(rl_valid),
		.log_row(rl_row),
		.rec_start(rec_start),
		.rec_row(rec_row),
		.rec_done(rec_done),
		.rec_pass(rec_pass),
		.ev_verify_fail(ev_vfail)
	);
	regenx_recovery_check #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_recovery(
		.clk(clk),
		.rst_n(rst_n),
		.start(rec_start),
		.row(rec_row),
		.l2p_flat(l2p_flat),
		.busy(rec_busy),
		.done(rec_done),
		.pass(rec_pass),
		.mem_en(r_en),
		.mem_we(r_we),
		.mem_addr(r_addr),
		.mem_wdata(r_wdata),
		.mem_rdata(mem_rdata)
	);
	always @(posedge clk)
		if (!rst_n)
			init_done <= 1'b0;
		else if (rep_done)
			init_done <= 1'b1;
	regenx_mem_controller #(
		.ECC_EN(ECC_EN),
		.PW(PW)
	) u_ctrl(
		.clk(clk),
		.rst_n(rst_n),
		.init_done(init_done),
		.scrub_busy(scrub_busy),
		.req_valid(req_valid),
		.req_ready(req_ready),
		.req_write(req_write),
		.req_addr(req_addr),
		.req_wdata(req_wdata),
		.rsp_valid(rsp_valid),
		.rsp_rdata(rsp_rdata),
		.rsp_error(rsp_error),
		.rsp_corrected(rsp_corrected),
		.l2p_flat(l2p_flat),
		.unavail(unavail),
		.mem_en(h_en),
		.mem_we(h_we),
		.mem_addr(h_addr),
		.mem_wdata(h_wdata),
		.mem_rdata(mem_rdata),
		.idle(ctl_idle),
		.hint_valid(hint_valid),
		.hint_row(hint_row),
		.ev_fix(ev_fix),
		.ev_unc(ev_unc)
	);
	regenx_scrubber #(
		.ECC_EN(ECC_EN),
		.PW(PW),
		.PERIOD(PATROL_PERIOD)
	) u_scrub(
		.clk(clk),
		.rst_n(rst_n),
		.enable(scrub_en),
		.kick(scrub_req),
		.init_done(init_done),
		.host_idle(ctl_idle && !req_valid),
		.hint_valid(hint_valid),
		.hint_row(hint_row),
		.busy(scrub_busy),
		.mem_en(s_en),
		.mem_we(s_we),
		.mem_addr(s_addr),
		.mem_wdata(s_wdata),
		.mem_rdata(mem_rdata),
		.l2p_flat(l2p_flat),
		.assist(assist),
		.unavail(unavail),
		.rm_valid(sc_rm_v),
		.rm_kind(sc_rm_kind),
		.rm_row(sc_rm_row),
		.rm_phys(sc_rm_phys),
		.have_free(have_free),
		.free_idx(free_idx),
		.spare_used(spare_used),
		.spare_bad(bad_phys[regenx_pkg_PROWS - 1:regenx_pkg_LROWS]),
		.take_valid(sc_take),
		.take_idx(sc_take_idx),
		.take_row(sc_take_row),
		.rel_valid(sc_rel),
		.rel_idx(sc_rel_idx),
		.log_valid(sl_valid),
		.log_row(sl_row),
		.log_mask(sl_mask),
		.ev_check(ev_chk),
		.ev_fault(ev_flt),
		.ev_migrate(ev_mig),
		.ev_round(ev_rnd),
		.ev_lost(ev_lost),
		.lost_row(lost_row)
	);
	regenx_status_regs u_regs(
		.clk(clk),
		.rst_n(rst_n),
		.status_clear(status_clear),
		.reg_addr(reg_addr),
		.reg_rdata(reg_rdata),
		.init_done(init_done),
		.bist_busy(bist_busy),
		.degraded(degraded),
		.scrub_busy(scrub_busy),
		.ecc_en(ECC_EN),
		.fault_count(fault_count),
		.last_valid(last_valid),
		.last_row(last_row),
		.last_class(last_class),
		.spare_used(spare_used),
		.spare_bad(bad_phys[regenx_pkg_PROWS - 1:regenx_pkg_LROWS]),
		.owner0(owner0),
		.owner1(owner1),
		.remapped_cnt(remap_cnt),
		.assist(assist),
		.unavail(unavail),
		.ev_fix(ev_fix),
		.ev_unc(ev_unc),
		.ev_verify_fail(ev_vfail),
		.ev_check(ev_chk),
		.ev_fault(ev_flt),
		.ev_migrate(ev_mig),
		.ev_round(ev_rnd),
		.ev_lost(ev_lost),
		.lost_row(lost_row),
		.data_lost(data_lost)
	);
	assign bist_busy = !init_done;
	assign remapped_count = remap_cnt;
	assign dbg_bad_phys = bad_phys;
	assign dbg_map_flat = l2p_flat;
	assign dbg_unavail = unavail;
	assign dbg_assist = assist;
	assign dbg_spare_used = spare_used;
	wire unused_ok;
	assign unused_ok = &{1'b0, mem_rvalid, rec_busy, clash, grant};
	initial _sv2v_0 = 0;
endmodule