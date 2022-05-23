#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int inicio, int meio, int fim) {
  // Cria dois vetores L ← A[inicio..meio] e R ← A[meio+1..fim]
  int lsize = meio - inicio + 1;
  int rsize = fim - meio;

  int L[lsize], R[rsize];

  for (int i = 0; i < lsize; i++) L[i] = arr[inicio + i];
  for (int j = 0; j < rsize; j++) R[j] = arr[meio + 1 + j];

  // Maintain o índice corrente of sub-arrays and main array
  int topo_left, topo_right, k;
  topo_left = 0;
  topo_right = 0;
  k = inicio;

  // Até chegarmos a qualquer extremidade de L ou R, escolha o maior
  // entre os elementos L e R e coloque-os na posição correta em
  // arr[inicio..fim]
  while (topo_left < lsize && topo_right < rsize) {
    if (L[topo_left] <= R[topo_right]) {
      arr[k] = L[topo_left];
      topo_left++;
    } else {
      arr[k] = R[topo_right];
      topo_right++;
    }
    k++;
  }

  // Quando ficarmos sem elementos em L ou R, pegue os elementos restantes e
  // coloque em arr[p..r]
  while (topo_left < lsize) {
    arr[k] = L[topo_left];
    topo_left++;
    k++;
  }

  while (topo_right < rsize) {
    arr[k] = R[topo_right];
    topo_right++;
    k++;
  }
}

void mergeSort(int arr[], int inicio, int fim) {
  if (inicio < fim) {
    int meio = inicio + (fim - inicio) / 2; //evita overflow
    mergeSort(arr, inicio, meio);
    mergeSort(arr, meio + 1, fim);
    merge(arr, inicio, meio, fim);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  puts("");
}

int main() {
  int arr[] = {20, 30, 50, 12, 27, 2, 1, 66};
  int size = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, size);
  mergeSort(arr, 0, size-1);
  printArray(arr, size);

  return 0;
}
