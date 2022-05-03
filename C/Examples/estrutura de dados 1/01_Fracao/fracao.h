#ifndef _FRACAO_H_
#define _FRACAO_H_

typedef struct
{
    int numerador;
    int denominador;
} Fracao;

Fracao cria_fracao(int numerador, int denominador);
int get_numerador(Fracao f);
int get_denominador(Fracao f);
int mdc(int n1, int n2);
int mmc(int n1, int n2);
Fracao soma(Fracao f1, Fracao f2);

#endif