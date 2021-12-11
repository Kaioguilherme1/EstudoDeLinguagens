//auth Kaio Guilherme Ferraz
//date 2021-12-10

#include <stdio.h>

int potencia(int base, int expoente){
    int i, potencia = 1;
    for(i = 0; i < expoente; i++){
        potencia = potencia * base;
    }
    return potencia;
}

int main(int argc, char const *argv[])
{
    int x, y;

    x = 8;
    y = 6;

    printf("%d elevado a %d = %d\n", x, y, potencia(x, y));
    return 0;
}
