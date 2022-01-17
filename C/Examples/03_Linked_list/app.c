#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    LinkedList *L = LinkedList_create();
    // LinkedList_add_first(L, 1);
    // LinkedList_add_first(L, 2);
    // LinkedList_add_first(L, 3);
    // LinkedList_add_first(L, 4);
    // LinkedList_add_first(L, 5);
    // LinkedList_print(L);

    LinkedList_add_last(L, 1);
    LinkedList_add_last(L, 2);
    LinkedList_add_last(L, 3);
    LinkedList_add_last(L, 4);
    LinkedList_add_last(L, 5);
    LinkedList_print(L);
    return 0;
}