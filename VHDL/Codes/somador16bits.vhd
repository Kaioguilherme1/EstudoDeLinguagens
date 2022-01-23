--kaio guilherme
entity somador16bit is
    port(
        A, B : in integer range 0 to 15;
        s    : out integer range 0 to 15
    );
end somador16bit;

architecture main of somador16bit is
begin
    s <= A + B;

end architecture main;