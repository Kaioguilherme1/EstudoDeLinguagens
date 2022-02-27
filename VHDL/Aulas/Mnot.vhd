-- Mnot gate
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

ENTITY Mnot is
PORT(
    A : IN STD_LOGIC;
    F : OUT STD_LOGIC
);
END Mnot;

architecture logic OF Mnot IS
begin
    F <= not A;
END logic;