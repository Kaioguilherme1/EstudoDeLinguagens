#include <stdio.h>
#include "fracao.h"

typedef struct{
    int numerador;
    int denominador;
    }Fracao;

Fracao cria_fracao(int numerador, int denominador){
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

int get_numerador(Fracao f){
    return f.numerador;
} 

int get_denominador(Fracao f){
    return f.denominador;
}

Fracao soma(Fracao f1,Fracao f2){
    int n1 = get_numerador(f1);
    int d1 = get_denominador(f1);
    int n2 = get_numerador(f2);
    int d2 = get_denominador(f2);

    int denF = mmc(d1,d2);
    int numF = (n1*(denF/d1)) + (n2*(denF/d2));

    return cria_fracao(numF,denF);
}

int mdc(int n1, int n2){
    int resto;
    while(n2 != 0){
        int resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    return n1;
}

int mmc(int n1, int n2){
    int Mdc = mdc(n1,n2);
    return (n1*n2)/Mdc;
}

