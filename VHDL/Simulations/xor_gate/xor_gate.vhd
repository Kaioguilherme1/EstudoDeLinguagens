--kaio Guilherme
entity xor_gate is
    port (
        a : in bit;
        b : in bit;
        c : out bit
    );
    end entity xor_gate;

    architecture main of xor_gate is
    begin
        c <= a xor b;
    end architecture main;