#include <stdio.h>

void counting_sort(int a[], int n, int max) {
  int count[50] = {0}, i, j;

  for (i = 0; i < n; ++i) 
    count[a[i]] = count[a[i]] + 1;

   printf("\nSorted elements are:");

  for (i = 0; i <= max; ++i)
    for (j = 1; j <= count[i]; ++j) {
       printf("%d ", i);
      //  a[i] = 
    }
     
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  int i, max = 0;

  // Calcula max
  for (i = 0; i < n; ++i) {
    if (array[i] > max) max = array[i];
  }

  counting_sort(array, n, max);
  return 0;
}