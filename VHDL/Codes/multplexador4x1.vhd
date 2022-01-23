-- AUTH:KAIO GUILHERME 

entity multplexador4x1 is
  port (
    C0, C1, A, B, C, D: in bit;
    S                 : out bit   
  ) ;
end  multplexador4x1;

architecture main of multplexador4x1 IS
begin
    s <= A when C1 = '0' and C0 = '0' else
         B when C1 = '0' and C0 = '1' else
         c when C1 = '1' and C0 = '0' else
         d when C1 = '1' and C0 = '1' ;
end architecture main;
