#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int inicio, int meio, int fim){
    //printf("Inicio: %d, meio: %d, fim: %d\n", arr[inicio], arr[meio], arr[fim]);
    //cria dois vetores L <-
    int lsize = meio - inicio + 1;
    int rsize = fim - meio;

    int L[lsize], R[rsize];

    for (int i = 0; i < lsize; i++) L[i] = arr[inicio + 1];
    for (int j = 0; j < rsize; j++) R[j] = arr[meio + 1 + j];

    int topo_left, topo_rigth, k;
    topo_left = 0;
    topo_rigth = 0;
    k = inicio;

    while (topo_left < lsize && topo_rigth < rsize) {
        if (L[topo_left] <= R[topo_rigth]) {
            arr[k] = L[topo_left];
            topo_left++;
        }else{
            arr[k] = R[topo_rigth];
            topo_rigth++;
        }
        k++;
        
    }
}

void mergeSort(int arr[], int inicio, int fim){
    if(inicio < fim){
        int meio = inicio + (fim - inicio) / 2; //evita overflow
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);

    }
}

int main() {
    int arr[] = {30, 8, 7, 55, 19, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    //printArray(arr, size);
    mergeSort(arr, 0, size-1);
    //printArray(arr, size);

    return 0;
}