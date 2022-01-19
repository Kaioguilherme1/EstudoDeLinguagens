#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {

    printf("argc: %d\n", argc);
    
    int n = atoi(argv[1]);
    
    //teste de performace
    printf("n: %d\nn , t\n", n);
    
    LinkedList *L_slow = LinkedList_create();

    double time_spent = 0.0;


    //ação
    for(int i = 0; i < n; i++) {
        clock_t begin = clock();
         LinkedList_add_last_slow(L_slow, i);
         clock_t end = clock();

         time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
         printf("%d, %f \n", i, time_spent);
     }
    


    //---------------------------------------------------

    return 0;
}