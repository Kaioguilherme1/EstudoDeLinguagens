--kaio Guilherme
library ieee;
use ieee.numeric_std.all;

entity extensor8x16 is  
    port(
        A_8  : in  std_logic_vector( 8 - 1 downto 0);
        S_16 : out std_logic_vector(16 - 1 downto 0)	 
	 ); 
end extensor8x16;

architecture main of extensor8x16 is
begin
    S_16 <= std_logic_vector(resize(signed(A_8), S_16'length));
end architecture;