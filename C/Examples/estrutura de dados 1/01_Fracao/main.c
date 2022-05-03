#include <stdio.h>
#include "fracao.h"

int main()
{

    Fracao f1 = cria_fracao(4, 6);
    Fracao f2 = cria_fracao(5, 3);

    printf("%d/%d + %d/%d = %d/%d\n", get_numerador(f1), get_denominador(f1), get_numerador(f2), get_denominador(f2), get_numerador(soma(f1, f2)), get_denominador(soma(f1, f2)));

    return 0;
}