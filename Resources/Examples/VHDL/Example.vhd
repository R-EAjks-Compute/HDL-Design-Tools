--  Collection of HDL Design Tools
--  Copyright (c) 2025 Andrea and Eric DELAGE <Contact@by-EAjks.Com>
--
--  This program is free software: you can redistribute it and/or modify
--  it under the terms of the GNU General Public License as published by
--  the Free Software Foundation, either version 3 of the License, or
--  (at your option) any later version.
--
--  This program is distributed in the hope that it will be useful,
--  but WITHOUT ANY WARRANTY; without even the implied warranty of
--  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
--  GNU General Public License for more details.
--
--  You should have received a copy of the GNU General Public License
--  along with this program.  If not, see <https://www.gnu.org/licenses/>.

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity axis_mathematics_add_v1_0_top_level is

    generic(
        g_number_of_streams        : positive;
        g_number_of_elements       : positive;
        g_number_of_fields         : positive;
        g_sa_axis_size             : positive;
        g_sa_axis_precision        : integer;
        g_sb_axis_size             : positive;
        g_sb_axis_precision        : integer;
        g_mz_axis_size             : positive;
        g_mz_axis_precision        : integer;
        g_include_final_rounding   : boolean;
        g_include_final_saturation : boolean
    );

    port(
        p_aclk           : in  std_logic;
        p_aresetn        : in  std_logic;
        -- AXI-Stream Compliant Receiver Interface
        -- All signals are sampled on the rising edge of p_aclk.
        p_sa_axis_tvalid : in  std_logic;
        p_sa_axis_tready : out std_logic;
        p_sa_axis_tdata  : in  std_logic_vector((((((((g_sa_axis_size + 7)/8)*8)*g_number_of_fields)*g_number_of_elements)*g_number_of_streams) - 1) downto  0);
        p_sa_axis_tuser  : in  std_logic_vector(95 downto  0);
        -- AXI-Stream Compliant Receiver Interface
        -- All signals are sampled on the rising edge of p_aclk.
        p_sb_axis_tvalid : in  std_logic;
        p_sb_axis_tready : out std_logic;
        p_sb_axis_tdata  : in  std_logic_vector((((((((g_sb_axis_size + 7)/8)*8)*g_number_of_fields)*g_number_of_elements)*g_number_of_streams) - 1) downto  0);
        p_sb_axis_tuser  : in  std_logic_vector(95 downto  0);
        -- AXI-Stream Compliant Transmitter Interface
        -- All signals are sampled on the rising edge of p_aclk.
        p_mz_axis_tvalid : out std_logic;
        p_mz_axis_tready : in  std_logic;
        p_mz_axis_tdata  : out std_logic_vector((((((((g_mz_axis_size + 7)/8)*8)*g_number_of_fields)*g_number_of_elements)*g_number_of_streams) - 1) downto  0);
        p_mz_axis_tuser  : out std_logic_vector(95 downto  0)
    );

    attribute secure_bitstream   : string;
    attribute secure_config      : string;
    attribute secure_netlist     : string;
    attribute secure_net_editing : string;
    attribute secure_net_probing : string;

    attribute secure_bitstream   of axis_mathematics_add_v1_0_top_level : entity is "off";
    attribute secure_config      of axis_mathematics_add_v1_0_top_level : entity is "protect";
    attribute secure_netlist     of axis_mathematics_add_v1_0_top_level : entity is "encrypt";
    attribute secure_net_editing of axis_mathematics_add_v1_0_top_level : entity is "prohibit";
    attribute secure_net_probing of axis_mathematics_add_v1_0_top_level : entity is "prohibit";

end entity axis_mathematics_add_v1_0_top_level;

architecture rtl of axis_mathematics_add_v1_0_top_level is

    constant c_sa_axis_tdata_size  : positive := (((((g_sa_axis_size + 7)/8)*8)*g_number_of_fields)*g_number_of_elements)*g_number_of_streams;
    constant c_sb_axis_tdata_size  : positive := (((((g_sb_axis_size + 7)/8)*8)*g_number_of_fields)*g_number_of_elements)*g_number_of_streams;
    constant c_mz_axis_tdata_size  : positive := (((((g_mz_axis_size + 7)/8)*8)*g_number_of_fields)*g_number_of_elements)*g_number_of_streams;

    signal   s_sa_axis_tready_shlo : std_logic                                              := '0';
    signal   s_sb_axis_tready_shlo : std_logic                                              := '0';
    signal   s_mz_axis_tvalid_shlo : std_logic                                              := '0';
    signal   s_mz_axis_tdata_sxlo  : std_logic_vector((c_mz_axis_tdata_size - 1) downto  0) := (others => '0');
    signal   s_mz_axis_tuser_sxlo  : std_logic_vector(95 downto  0)                         := (others => '0');

    -- Let's define the size & precision
    -- for all pipeline elements
    -- to improve the VHDL code readability.

    function f_initialize_pe1_add_size return positive is

        variable v_pe1_add_size : positive := 1;

    begin

        if  (g_sa_axis_precision >  g_sb_axis_precision)
        then if ((g_sa_axis_size - g_sa_axis_precision) >  (g_sb_axis_size - g_sb_axis_precision))
             then v_pe1_add_size := (g_sa_axis_size + 1);
             else v_pe1_add_size := (g_sb_axis_size - g_sb_axis_precision + g_sa_axis_precision + 1);
             end if;
        else if ((g_sa_axis_size - g_sa_axis_precision) >  (g_sb_axis_size - g_sb_axis_precision))
             then v_pe1_add_size := (g_sa_axis_size - g_sa_axis_precision + g_sb_axis_precision + 1);
             else v_pe1_add_size := (g_sb_axis_size + 1);
             end if;
        end if;

        return v_pe1_add_size;

    end function f_initialize_pe1_add_size;

    function f_initialize_pe1_add_precision return integer is

        variable v_pe1_add_precision : integer := 0;

    begin

        if  (g_sa_axis_precision >  g_sb_axis_precision)
        then v_pe1_add_precision := g_sa_axis_precision;
        else v_pe1_add_precision := g_sb_axis_precision;
        end if;

        return v_pe1_add_precision;

    end function f_initialize_pe1_add_precision;

    constant c_pe1_add_size        : positive := f_initialize_pe1_add_size;
    constant c_pe1_add_precision   : integer  := f_initialize_pe1_add_precision;
    constant c_pe2_rnd_size        : positive := c_pe1_add_size - c_pe1_add_precision + g_mz_axis_precision + 1;
    constant c_pe2_rnd_precision   : integer  := g_mz_axis_precision;
    constant c_pe2_sat_size        : positive := g_mz_axis_size;
    constant c_pe2_sat_precision   : integer  := g_mz_axis_precision;

    signal   s_reset_clock_shl     : std_logic_vector( 3 downto  0)                         := (others => '1');

    type t_sa_axis_data_sxli is
        array(
            1 to g_number_of_streams,
            1 to g_number_of_elements,
            1 to g_number_of_fields
        ) of
            signed((g_sa_axis_size - 1) downto  0);

    type t_sb_axis_data_sxli is
        array(
            1 to g_number_of_streams,
            1 to g_number_of_elements,
            1 to g_number_of_fields
        ) of
            signed((g_sb_axis_size - 1) downto  0);

    type t_pe1_add_data_sxl is
        array(
            1 to g_number_of_streams,
            1 to g_number_of_elements,
            1 to g_number_of_fields
        ) of
            signed((c_pe1_add_size - 1) downto  0);

    signal   s_pe1_compute         : boolean                                                := false;
    signal   s_sa_axis_data_sxli   : t_sa_axis_data_sxli;--                                 := (others => (others => (others => (others => '0'))));
    signal   s_sb_axis_data_sxli   : t_sb_axis_data_sxli;--                                 := (others => (others => (others => (others => '0'))));
    signal   s_pe1_add_data_sxl    : t_pe1_add_data_sxl;--                                  := (others => (others => (others => (others => '0'))));
    signal   s_pe1_add_time_sxl    : std_logic_vector(95 downto  0);--                      := (others => '0');

    type t_pe2_rnd_data_sxl is
        array(
            1 to g_number_of_streams,
            1 to g_number_of_elements,
            1 to g_number_of_fields
        ) of
            signed((c_pe2_rnd_size - 1) downto  0);

    type t_pe2_sat_data_sxl is
        array(
            1 to g_number_of_streams,
            1 to g_number_of_elements,
            1 to g_number_of_fields
        ) of
            signed((c_pe2_sat_size - 1) downto  0);

    signal   s_pe2_compute         : boolean                                                := false;
    signal   s_pe2_rnd_data_sxl    : t_pe2_rnd_data_sxl;--                                  := (others => (others => (others => (others => '0'))));
    signal   s_pe2_rnd_time_sxl    : std_logic_vector(95 downto  0);--                      := (others => '0');
    signal   s_pe2_sat_data_sxl    : t_pe2_sat_data_sxl;--                                  := (others => (others => (others => (others => '0'))));
    signal   s_pe2_sat_time_sxl    : std_logic_vector(95 downto  0);--                      := (others => '0');

    attribute async_reg : string;
    attribute async_reg of s_reset_clock_shl : signal is "true";

begin

    main_process_on_clock:
    process(
        p_aresetn,
        p_aclk
    )

        function f_decode_sa_axis_tdata(a_sa_axis_tdata : in std_logic_vector) return t_sa_axis_data_sxli is

            constant c_sa_axis_size       : positive            := ((g_sa_axis_size + 7)/8)*8;

            variable v_ijk_index          : integer             := 0;
            variable v_ijk_index_lsb      : integer             := 0;
            variable v_ijk_index_msb      : integer             := 0;
            variable v_sa_axis_tdata_sxli : t_sa_axis_data_sxli := (others => (others => (others => (others => '0'))));

        begin

            for i in 1 to g_number_of_streams
            loop for j in 1 to g_number_of_elements
                 loop for k in 1 to g_number_of_fields
                      loop v_ijk_index                   := ((((i - 1)*g_number_of_elements) + (j - 1))*g_number_of_fields) + (k - 1);
                           v_ijk_index_lsb               := v_ijk_index*c_sa_axis_size;
                           v_ijk_index_msb               := v_ijk_index_lsb + (g_sa_axis_size - 1);
                           v_sa_axis_tdata_sxli(i, j, k) := signed(a_sa_axis_tdata(v_ijk_index_msb downto v_ijk_index_lsb));
                      end loop;
                 end loop;
            end loop;

            return v_sa_axis_tdata_sxli;

        end function f_decode_sa_axis_tdata;

        variable v_sa_axis_queueisempty_shl : boolean                                := true;
        variable v_sa_axis_data_sxli        : t_sa_axis_data_sxli                    := (others => (others => (others => (others => '0'))));
        variable v_sa_axis_time_sxli        : std_logic_vector(95 downto  0)         := (others => '0');

        function f_decode_sb_axis_tdata(a_sb_axis_tdata : in std_logic_vector) return t_sb_axis_data_sxli is

            constant c_sb_axis_size       : positive            := ((g_sb_axis_size + 7)/8)*8;

            variable v_ijk_index          : integer             := 0;
            variable v_ijk_index_lsb      : integer             := 0;
            variable v_ijk_index_msb      : integer             := 0;
            variable v_sb_axis_tdata_sxli : t_sb_axis_data_sxli := (others => (others => (others => (others => '0'))));

        begin

            for i in 1 to g_number_of_streams
            loop for j in 1 to g_number_of_elements
                 loop for k in 1 to g_number_of_fields
                      loop v_ijk_index                   := ((((i - 1)*g_number_of_elements) + (j - 1))*g_number_of_fields) + (k - 1);
                           v_ijk_index_lsb               := v_ijk_index*c_sb_axis_size;
                           v_ijk_index_msb               := v_ijk_index_lsb + (g_sb_axis_size - 1);
                           v_sb_axis_tdata_sxli(i, j, k) := signed(a_sb_axis_tdata(v_ijk_index_msb downto v_ijk_index_lsb));
                      end loop;
                 end loop;
            end loop;

            return v_sb_axis_tdata_sxli;

        end function f_decode_sb_axis_tdata;

        variable v_sb_axis_queueisempty_shl : boolean                                := true;
        variable v_sb_axis_data_sxli        : t_sb_axis_data_sxli                    := (others => (others => (others => (others => '0'))));
        variable v_sb_axis_time_sxli        : std_logic_vector(95 downto  0)         := (others => '0');

        variable v_pe1_disable              : boolean                                := false;
        variable v_pe2_disable              : boolean                                := false;
        variable v_pe2_rnd_data_sxl         : signed((c_pe2_rnd_size - 1) downto  0) := (others => '0');
        variable v_pe2_sat_data_sxl         : signed((c_pe2_sat_size - 1) downto  0) := (others => '0');

    begin

        -- Generate a local synchronous reset
        -- from the global asynchronous reset.
        -- See Xilinx White Paper WP272.

        if  (p_aresetn  = '0')
        then s_reset_clock_shl <= (others => '1');
        else if rising_edge(p_aclk)
             then s_reset_clock_shl <= '0' & s_reset_clock_shl( 3 downto  1);
             end if;
        end if;

        if rising_edge(p_aclk) then

            if  (v_sa_axis_queueisempty_shl  = true)
            then if ((p_sa_axis_tvalid  = '1') and
                     (s_sa_axis_tready_shlo  = '1'))
                 then v_sa_axis_queueisempty_shl := false;
                      s_sa_axis_tready_shlo      <= '0';
                      v_sa_axis_data_sxli        := f_decode_sa_axis_tdata(p_sa_axis_tdata);
                      v_sa_axis_time_sxli        := p_sa_axis_tuser;
                 else v_sa_axis_queueisempty_shl := true;
                      s_sa_axis_tready_shlo      <= '1';
                 end if;
            else v_sa_axis_queueisempty_shl := false;
                 s_sa_axis_tready_shlo      <= '0';
            end if;

            if  (v_sb_axis_queueisempty_shl  = true)
            then if ((p_sb_axis_tvalid  = '1') and
                     (s_sb_axis_tready_shlo  = '1'))
                 then v_sb_axis_queueisempty_shl := false;
                      s_sb_axis_tready_shlo      <= '0';
                      v_sb_axis_data_sxli        := f_decode_sb_axis_tdata(p_sb_axis_tdata);
                      v_sb_axis_time_sxli        := p_sb_axis_tuser;
                 else v_sb_axis_queueisempty_shl := true;
                      s_sb_axis_tready_shlo      <= '1';
                 end if;
            else v_sb_axis_queueisempty_shl := false;
                 s_sb_axis_tready_shlo      <= '0';
            end if;

            -- Pipeline Element #1: Addition

            -- Pipeline Element #1
            -- Stall Condition(s)

            if ((s_pe1_compute  = true) and
                (s_pe2_compute  = true) and
                (p_mz_axis_tready  = '0'))
            then v_pe1_disable := true;
            else v_pe1_disable := false;
            end if;

            -- Pipeline Element #1
            -- Control Path

            if  (v_pe1_disable  = false)
            then if ((v_sa_axis_queueisempty_shl  = false) and
                     (v_sb_axis_queueisempty_shl  = false))
                 then v_sa_axis_queueisempty_shl := true;
                      s_sa_axis_tready_shlo      <= '1';
                      v_sb_axis_queueisempty_shl := true;
                      s_sb_axis_tready_shlo      <= '1';
                      s_pe1_compute              <= true;
                 else s_pe1_compute              <= false;
                 end if;
            end if;

            -- Pipeline Element #1
            -- Data Path

            if  (v_pe1_disable  = false)
            then s_sa_axis_data_sxli <= v_sa_axis_data_sxli;
                 s_sb_axis_data_sxli <= v_sb_axis_data_sxli;
                 for i in 1 to g_number_of_streams
                 loop for j in 1 to g_number_of_elements
                      loop for k in 1 to g_number_of_fields
                           loop s_pe1_add_data_sxl(i, j, k) <=
                                    shift_left(resize(v_sa_axis_data_sxli(i, j, k), c_pe1_add_size), (c_pe1_add_precision - g_sa_axis_precision)) +
                                    shift_left(resize(v_sb_axis_data_sxli(i, j, k), c_pe1_add_size), (c_pe1_add_precision - g_sb_axis_precision));
                           end loop;
                      end loop;
                 end loop;
                 s_pe1_add_time_sxl  <= v_sa_axis_time_sxli; -- No time resynchronization between SA and SB!
            end if;

            -- Pipeline Element #2: Rounding & Saturation

            -- Pipeline Element #2
            -- Stall Condition(s)

            if ((s_pe2_compute  = true) and
                (p_mz_axis_tready  = '0'))
            then v_pe2_disable := true;
            else v_pe2_disable := false;
            end if;

            -- Pipeline Element #2
            -- Control Path

            if ((g_include_final_rounding  = false) and
                (g_include_final_saturation  = false))
            then s_pe2_compute <= true;
            else if  (v_pe2_disable  = false)
                 then s_pe2_compute <= s_pe1_compute;
                 end if;
            end if;

            -- Pipeline Element #2
            -- Data Path

            if  (v_pe2_disable  = false)
            then for i in 1 to g_number_of_streams
                 loop for j in 1 to g_number_of_elements
                      loop for k in 1 to g_number_of_fields
                           loop if  (c_pe2_rnd_precision >= c_pe1_add_precision)
                                then -- Up-Scaling
                                     -- No Rounding
                                     v_pe2_rnd_data_sxl := shift_left (resize(s_pe1_add_data_sxl(i, j, k), c_pe2_rnd_size), (c_pe2_rnd_precision - c_pe1_add_precision));
                                else -- Re-Scaling
                                     -- & Rounding
                                     v_pe2_rnd_data_sxl := resize(shift_right(s_pe1_add_data_sxl(i, j, k), (c_pe1_add_precision - c_pe2_rnd_precision)), c_pe2_rnd_size);
                                     if  (g_include_final_rounding  = true)
                                     then if  (s_pe1_add_data_sxl(i, j, k)(c_pe1_add_precision - c_pe2_rnd_precision - 1)  = '1')
                                          then v_pe2_rnd_data_sxl := v_pe2_rnd_data_sxl + 1;
                                          end if;
                                     end if;
                                end if;
                                s_pe2_rnd_data_sxl(i, j, k) <= v_pe2_rnd_data_sxl;
                                if  (g_include_final_saturation  = true)
                                then if  (v_pe2_rnd_data_sxl(v_pe2_rnd_data_sxl'high)  = '0')
                                     then if  (shift_right(v_pe2_rnd_data_sxl, (c_pe2_sat_size - 1))  =  0)
                                          then v_pe2_sat_data_sxl := resize(v_pe2_rnd_data_sxl, c_pe2_sat_size);
                                          else v_pe2_sat_data_sxl := (others => '1');
                                               v_pe2_sat_data_sxl(v_pe2_sat_data_sxl'high) := '0';
                                          end if;
                                     else if  (shift_right(v_pe2_rnd_data_sxl, (c_pe2_sat_size - 1))  = -1)
                                          then v_pe2_sat_data_sxl := resize(v_pe2_rnd_data_sxl, c_pe2_sat_size);
                                          else v_pe2_sat_data_sxl := (others => '0');
                                               v_pe2_sat_data_sxl(v_pe2_sat_data_sxl'high) := '1';
                                          end if;
                                     end if;
                                else v_pe2_sat_data_sxl := resize(v_pe2_rnd_data_sxl, c_pe2_sat_size);
                                end if;
                                s_pe2_sat_data_sxl(i, j, k) <= v_pe2_sat_data_sxl;
                           end loop;
                      end loop;
                 end loop;
                 s_pe2_rnd_time_sxl <= s_pe1_add_time_sxl;
                 s_pe2_sat_time_sxl <= s_pe1_add_time_sxl;
            end if;

            -- Synchronous Reset

            if  (s_reset_clock_shl( 0)  = '1')
            then v_sa_axis_queueisempty_shl := true;
                 s_sa_axis_tready_shlo      <= '0';
                 v_sb_axis_queueisempty_shl := true;
                 s_sb_axis_tready_shlo      <= '0';
                 s_pe1_compute              <= false;
                 s_pe2_compute              <= false;
            end if;

        end if;

    end process main_process_on_clock;

    mz_axis_selection:
    process(
        s_pe1_compute,
        s_pe1_add_data_sxl,
        s_pe1_add_time_sxl,
        s_pe2_compute,
        s_pe2_sat_data_sxl,
        s_pe2_sat_time_sxl
    )

        constant c_mz_axis_size  : positive := ((g_mz_axis_size + 7)/8)*8;

        variable v_ijk_index     : integer  := 0;
        variable v_ijk_index_lsb : integer  := 0;
        variable v_ijk_index_msb : integer  := 0;

    begin

        if ((g_include_final_rounding  = false) and
            (g_include_final_saturation  = false))
        then if  (s_pe1_compute  = true)
             then s_mz_axis_tvalid_shlo <= '1';
             else s_mz_axis_tvalid_shlo <= '0';
             end if;
             if  (c_pe2_rnd_precision >= c_pe1_add_precision)
             then for i in 1 to g_number_of_streams
                  loop for j in 1 to g_number_of_elements
                       loop for k in 1 to g_number_of_fields
                            loop v_ijk_index     := ((((i - 1)*g_number_of_elements) + (j - 1))*g_number_of_fields) + (k - 1);
                                 v_ijk_index_lsb := v_ijk_index*c_mz_axis_size;
                                 v_ijk_index_msb := v_ijk_index_lsb + (c_mz_axis_size - 1);
                                 s_mz_axis_tdata_sxlo(v_ijk_index_msb downto v_ijk_index_lsb) <= std_logic_vector(resize(signed(resize(unsigned(shift_left (resize(s_pe1_add_data_sxl(i, j, k), c_pe2_rnd_size), (c_pe2_rnd_precision - c_pe1_add_precision))), c_pe2_sat_size)), c_mz_axis_size));
                            end loop;
                       end loop;
                  end loop;
             else for i in 1 to g_number_of_streams
                  loop for j in 1 to g_number_of_elements
                       loop for k in 1 to g_number_of_fields
                            loop v_ijk_index     := ((((i - 1)*g_number_of_elements) + (j - 1))*g_number_of_fields) + (k - 1);
                                 v_ijk_index_lsb := v_ijk_index*c_mz_axis_size;
                                 v_ijk_index_msb := v_ijk_index_lsb + (c_mz_axis_size - 1);
                                 s_mz_axis_tdata_sxlo(v_ijk_index_msb downto v_ijk_index_lsb) <= std_logic_vector(resize(signed(resize(unsigned(resize(shift_right(s_pe1_add_data_sxl(i, j, k), (c_pe1_add_precision - c_pe2_rnd_precision)), c_pe2_rnd_size)), c_pe2_sat_size)), c_mz_axis_size));
                            end loop;
                       end loop;
                  end loop;
             end if;
             s_mz_axis_tuser_sxlo <= s_pe1_add_time_sxl;
        else if  (s_pe2_compute  = true)
             then s_mz_axis_tvalid_shlo <= '1';
             else s_mz_axis_tvalid_shlo <= '0';
             end if;
             if  (true)
             then for i in 1 to g_number_of_streams
                  loop for j in 1 to g_number_of_elements
                       loop for k in 1 to g_number_of_fields
                            loop v_ijk_index     := ((((i - 1)*g_number_of_elements) + (j - 1))*g_number_of_fields) + (k - 1);
                                 v_ijk_index_lsb := v_ijk_index*c_mz_axis_size;
                                 v_ijk_index_msb := v_ijk_index_lsb + (c_mz_axis_size - 1);
                                 s_mz_axis_tdata_sxlo(v_ijk_index_msb downto v_ijk_index_lsb) <= std_logic_vector(resize(s_pe2_sat_data_sxl(i, j, k), c_mz_axis_size));
                            end loop;
                       end loop;
                  end loop;
             end if;
             s_mz_axis_tuser_sxlo <= s_pe2_sat_time_sxl;
        end if;

    end process mz_axis_selection;

    p_sa_axis_tready <= s_sa_axis_tready_shlo;
    p_sb_axis_tready <= s_sb_axis_tready_shlo;
    p_mz_axis_tvalid <= s_mz_axis_tvalid_shlo;
    p_mz_axis_tdata  <= s_mz_axis_tdata_sxlo;
    p_mz_axis_tuser  <= s_mz_axis_tuser_sxlo;

end architecture rtl;
