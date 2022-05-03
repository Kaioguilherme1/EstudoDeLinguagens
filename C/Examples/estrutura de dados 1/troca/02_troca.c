#include <stdio.h>

void troca(int *a, int *b){

    printf("memorias a %d b %d\n ,", a, b);
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    //troca
    printf("antes x %d y %d\n ,", x, y);
    troca(&x, &y);

    printf("durante x %d y %d\n ,", x, y);

    return 0;
}