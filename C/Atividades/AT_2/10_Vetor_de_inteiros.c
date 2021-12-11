//auth Kaio Guilherme Ferraz
//date 2021-12-10

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *vetor, valor, size;
    size = 0;
    vetor = (int*)malloc(sizeof(int));

    do{
        printf("Digite um valor >>> ");
        scanf("%d", &valor);

        if (valor != 0){

            vetor[size] = valor; //atribui o valor digitado ao vetor
            size++;
            vetor = (int *)realloc(vetor, sizeof(int) * (size + 1)); // realoca o vetor para o tamanho do vetor + 1
            printf("\nValor: %d\n", vetor[size - 1]);
        }
        
        

    }while(valor != 0);

    //Imprimindo o vetor
    printf("\n|Indice | valor |");
    for(int i = 0; i < size; i++){
        printf("\n|   %2d  |   %2d  |",i , vetor[i]);
    }

    puts("\n");

    return 0;
}