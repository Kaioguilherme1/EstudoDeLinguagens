#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    //teste de performace
    puts("Teste de performace inicio");
    
    LinkedList *L_slow = LinkedList_create();

    double time_spent = 0.0;

    clock_t begin = clock();

    //ação
    for(int i = 0; i < 200000; i++) {
        LinkedList_add_last_slow(L_slow, i);
    }
    

    clock_t end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Performace add_last_slow %f secunds\n", time_spent);

    //---------------------------------------------------

    LinkedList *L_fast = LinkedList_create();

    double time_spent2 = 0.0;

    clock_t begin2 = clock();

    // ação
    for (int i = 0; i < 2000000; i++)
    {
        LinkedList_add_last(L_fast, i);
    }

    clock_t end2 = clock();

    time_spent += (double)(end2 - begin2) / CLOCKS_PER_SEC;
    printf("Performace add_last_fast %f secunds\n", time_spent2);

    return 0;
}