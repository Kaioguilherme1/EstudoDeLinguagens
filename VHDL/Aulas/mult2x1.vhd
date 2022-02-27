-- mult2x1
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

ENTITY mult2x1 IS 
PORT(
    A, B, S : IN std_logic;
    S0      : OUT STD_LOGIC
);
END mult2x1

ARQUITECTURE logic OF mult2x1 IS
BEGIN
    process(A, B, S) is
    begin
        if S = '0' then S0 <= A
        else S0 <= B;
        end if;
    end process;
END logic;