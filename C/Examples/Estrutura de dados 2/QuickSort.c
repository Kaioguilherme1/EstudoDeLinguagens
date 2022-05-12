#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int partition (int arr[], int inicio, int fim){
    int pivo = arr[fim];
    int p = (inicio - 1);

    for(int i = inicio; i <= fim - 1; i++ ){
        if(arr[i] < pivo){
            swap(&arr[++p], &arr[i]);
        }        
    }
    swap(&arr[p + 1], &arr[fim]);
    return (p + 1);
}

void quickSort( int arr[], int inicio, int fim  ){
    if(inicio < fim) {
        int pivo = partition( arr, inicio, fim);

       
        
    }
}

int main(){
    int arr[] = {20, 30, 50, 12}
    return 1;
}