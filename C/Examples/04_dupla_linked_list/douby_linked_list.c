#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//----DEFINIÇÃO DAS ESTRUCS----
typedef struct _doubly_node{
    int val;
    struct _doubly_node *next;
    struct _doubly_node *prev;
}Doubly_Node, Node;

typedef struct _doubly_linked_list{
    Node *begin;
    Node *end;
    size_t size;

}Doubly_Linked_List, List;

//----Construtures E Destrutores----
Node *create_node(int val) { //contrutor do node
    Node *node = (Node *) malloc(sizeof(Node));
    node->val = val;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

List *create_list() { //contrutor da lista
    List *L = (List *) malloc(sizeof(List));
    L->begin = NULL;
    L->end = NULL;
    L->size = 0;
    return L;
}

void destroy_list(List **L_ref){
    List *L = *L_ref;
    Node *p = L->begin;
    Node *aux;
    while(p != NULL){
        Node *aux = p;
        p = p->next;
        free(aux);
    }
    free(L);
    *L_ref = NULL;
}
//----FUNÇÕES----
bool List_is_empty(List *L){
    return L->size == 0 && L->begin == NULL; 
}

void List_add_fist(List *L, int val){
    //caso 1:lista vazia
    Node *p = create_node(val);
    p->next = L->begin;
    if(List_is_empty(L)){  
        L->end = p;
    }else{
        L->begin->prev = p;
        
    }
    L->begin = p;
    L->size++;
}

void List_add_last(List *L,int val){
    //caso 1:lista vazia
    Node *p = create_node(val);
    p->prev = L->end;
    if(List_is_empty(L)){  
        L->begin = p;
    }else{
        L->end->next = p;
    }
    L->end = p;
    L->size++;
}

void List_print(List* L) {
    Node *p = L->end;
    while(p != NULL){
        printf("%d-> ", p->val);
        p = p->prev;
    }
    printf("NULL\n");

    // if(L->end ==NULL){
    //     printf("L->end = NULL\n");
    // }else{
    //     printf("L->end = %d\n", L->end);
    // }

    //if ternario
    L->begin == NULL ? printf("L->begin = NULL\n") 
                     : printf("L->begin = %d\n", L->begin->val);

    printf("size = %ld\n", L->size);
}

//remove node passado no parametro
void Node_remove(Node *p){
    if(p->prev != NULL){
        p->prev->next = p->next;
    }
    if(p->next != NULL){
        p->next->prev = p->prev;
    }
    free(p);
 }

void List_remove(List *L, int val) {
    Node *p = L->begin;
    do{
        p = p->next;
    }while(p->val != val);
    Node_remove(p);
    L->size--;
}

//falta corrigir 
void List_remove_all(List *L, int val) {
    Node *p = L->begin;
    size_t size = L->size;
    
    for(int i = 0; i < (L->size+1); i++) {
        p = p->next;
        if(p->prev->val == val) {
            Node_remove(p->prev);
            L->size--;
        } 
    }
    
}

//----TESTE DO CÓDIGO-----
int main(){
    List *L = create_list();
    List_add_last(L, 1);
    List_add_last(L, 2);
    List_add_last(L, 1);
    List_add_last(L, 2);
    List_add_last(L, 1);
    List_add_last(L, 2);
    List_add_last(L, 1);
    List_add_last(L, 2);
    List_add_last(L, 1);
    List_add_last(L, 2);

    List_remove_all(L, 1);
    List_print(L);

    destroy_list(&L);
    return 0;
}