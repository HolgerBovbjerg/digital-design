LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.numeric_std.all;

ENTITY display_7segment_4digit_tb IS

END display_7segment_4digit_tb;


ARCHITECTURE behavior OF display_7segment_4digit_tb IS

 
-- Component Declaration for the Unit Under Test (UUT)
 


COMPONENT display_7segment_4digit
    Port ( i_clock_32Mhz : in STD_LOGIC;-- 32Mhz clock on Papilio Pro FPGA board
           i_reset : in STD_LOGIC; -- reset
           o_Anode_Activate : out STD_LOGIC_VECTOR (3 downto 0);-- 4 Anode signals
           o_LED_out : out STD_LOGIC_VECTOR (6 downto 0));-- Cathode patterns of 7-segment display
end COMPONENT;
 

--Inputs
signal r_clk : std_logic := '0';
signal r_reset : std_logic := '0';
 

--Outputs
signal w_Anode : STD_LOGIC_VECTOR (3 downto 0);
signal w_LED : std_logic_vector(6 downto 0);

constant period : time := 32 ns; -- ~32 ns for 32 MHz 

BEGIN

-- Instantiate the Unit Under Test (UUT)

uut: display_7segment_4digit PORT MAP (

i_clock_32Mhz => r_clk,
i_reset => r_reset,
o_Anode_Activate(3 downto 0) => w_Anode(3 downto 0),
o_LED_out(6 downto 0) => w_LED(6 downto 0)
);

 

-- Clock Process
clk_proc: process
begin
	r_clk <= '0';
	wait for period/2;
	r_clk <= '1';
	wait for period/2;
end process;

-- Stimulus process
stim_proc: process
begin
	r_reset <= '1';
	wait for 20 ns;    
	r_reset <= '0';
	wait;
end process;

END;

