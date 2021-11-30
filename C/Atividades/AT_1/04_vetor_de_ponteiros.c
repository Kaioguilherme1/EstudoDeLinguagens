//auth Kaio Guilherme Ferraz
//date 2021-26-11

#include <stdio.h>

int main(void) {
    int vetor[10], *ponteiros[10], ponteirosInvertidos[10] ,d, i;

    for (i = 0; i < 10; i++){

        vetor[i] = rand() % 100;

        ponteiros[i] = &vetor[i];
    
    }

    i = 0;
    d = 9;
    printf("Val  |   endereço   |    endereço \n");
    printf("ores |   ordenado   |   decresente \n");
    printf("====================================\n");

    for(int i = 0; i < 10; i++){
        
        //inverte a ordem dos ponteiros
        //é já que os ponteiros são organizados em ordem crescente assim teremos a ordem decrescente dos mesmos.

        ponteirosInvertidos[i] = ponteiros[d];
        d--;

        printf("%d   |  %d  |  %d   \n", vetor[i], ponteiros[i], ponteirosInvertidos[i]);
    }
    return 0;
}