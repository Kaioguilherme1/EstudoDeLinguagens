#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void selecionSort(int lista[],int n){
    int minimoindex;

    for(int j = 0; j < n; j++){
        minimoindex = j;
        for(int i = j+1; i < n; i++){
            if(lista[i] < lista[minimoindex]){
                minimoindex = i;
            }
        }
        int aux = lista[j];
        lista[j] = lista[minimoindex];
        lista[minimoindex] = aux;
    }
}







int main(){

    int lista[] = {7, 5, 1, 8, 3};
    int n = sizeof(lista)/sizeof(lista[0]); //size da lista

    selecionSort(lista, n);

    //imprimir
    for(int i = 0; i < 5; i++){
        printf("%d,", lista[i]);
    }
    puts("");




    return 0;
}