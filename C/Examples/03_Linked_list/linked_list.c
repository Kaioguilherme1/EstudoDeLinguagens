#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
    int val;
    struct _node *next;

} Node;

typedef struct _linked_list {
     Node *begin;
     Node *end;

} LinkedList;

Node* node_create(int val){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;

}

LinkedList* LinkedList_create(){
    LinkedList *L = (LinkedList*)malloc(sizeof(LinkedList));
    L->begin = NULL;
    return L;
}
// old
// void LinkedList_add_first(LinkedList *L, int val){
//     if(L->begin == NULL){
//         Node* p = node_create(val);
//         L->begin = p;
//     }
//     else{
//         Node* p = node_create(val);
//         p->next = L->begin;
//         L-> begin = p;
//     }
    
// }

void LinkedList_add_first(LinkedList *L, int val){
    Node *p = node_create(val);
    p->next = L->begin;
    L->begin = p;
    
}

void LinkedList_add_last_slow(LinkedList *L, int val){
    Node *q = node_create(val);
    // se a lista estiver vazia
    if (L->begin == NULL){
        L->begin = q;
    }
    else{
        Node* p = L->begin;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = q;
    }
}

void LinkedList_add_last(LinkedList *L, int val)
{
    Node *q = node_create(val);
    // se a lista estiver vazia
    if (L->begin == NULL)
    {
        L->begin = q;
        L->end = q;
    }
    else
    {
        L->end->next = q;
        L->end = q;
    }
}

void LinkedList_print(LinkedList *L){
    Node* p = L->begin;
    printf("L-> ");
    while (p != NULL){
        printf("%d-> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
    
}