#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// A utility function to swap two elements
void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int inicio, int fim) {
  int pivot = arr[fim];
  int p = (inicio - 1);  // Índice do elemento menor e indica a posição correta
                         // do pivô encontrado até o momento

  // i : Índice que percorre todo o array
  for (int i = inicio; i <= fim - 1; i++) {
    // Se o elemento atual for menor que o pivô
    if (arr[i] < pivot) {
      //p++;  // incrementa o índice do menor elemento
      swap(&arr[++p], &arr[i]);
    }
  }
  swap(&arr[p + 1], &arr[fim]);
  return (p + 1);
}

void quickSort(int arr[], int inicio, int fim) {
  if (inicio < fim) {
    /* pi é o índice de particionamento,
    arr[p] agora está no lugar certo */
    int pi = partition(arr, inicio, fim);

    // Coloca as outras partes nos seus lugares tbm
    quickSort(arr, inicio, pi - 1);
    quickSort(arr, pi + 1, fim);
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
  quickSort(arr, 0, size - 1);
  printArray(arr, size);

  return 0;
}
