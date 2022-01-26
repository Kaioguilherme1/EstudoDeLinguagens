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

//remove node passado no parametro : Modelo antigo
// void Node_remove(Node *p){
//     if(p->prev != NULL){
//         p->prev->next = p->next;
//     }
//     if(p->next != NULL){
//         p->next->prev = p->prev;
//     }
//     free(p);
//  }

//remove da aula
// void List_remove(List *L, int val) {
//     if(!List_is_empty(L)){
//         //caso 1:elemento esta no begin
//         if(L->begin->val == val){
//             Node *p = L->begin;
//             //caso 1.1: = a lista possui 1 elemento
//             if(L->size == 1){
//                 L->begin = NULL;
//                 L->end = NULL;
//                 free(p);
//                 L->size--;
//             }else{
//             //caso 1.2: = a lista possui mais de 1 elemento
//                 L->begin = p->next;
//                 L->begin->prev = NULL;
//                 free(p);
//                 L->size--;
//             }
//         //caso 2 ou 3: o elemento esta no meio ou no final
//         }else{
//             Node *p = L->begin->next;
//             //realiza a buscar 
//             while(p != NULL){
//                 if(p->val == val){
//                     //caso 3: final
//                     if(L->end = p){
//                         p->prev->next = NULL;
//                         L->end = p->prev;
//                     //caso 2: meio
//                     }else{
//                         p->prev->next = p->next;
//                         p->next->prev = p->prev;
                        
//                     }
//                     free(p);
//                     L->size--;
//                 }else{
//                     p = p->next;
//                 }
                
//             }           
//         }
//     }
// }

//não consegui implementar de forma satisfatoria
// void List_remove_all(List *L, int val) {
//     Node *p = L->begin;
//     size_t size = L->size;
    
//     for(int i = 0; i < (L->size+1); i++) {
//         p = p->next;
//         if(p->prev->val == val) {
//             Node_remove(p->prev);
//             L->size--;
//         } 
//     }
    
// }

void List_remove(List *L, int val) {
    Node *p = L->begin;
    while(p != NULL){
        if(p->val == val){
            if(p->val == val){
                L->begin = p->next;
                p->next->prev = NULL;
            }else{
                p->prev->next = p->prev;
            }
            free(p);
            L->size--;
        }
        p = p->next;
    }
}
//----TESTE DO CÓDIGO-----
int main(){
    List *L = create_list();
    List_add_last(L, 1);
    List_add_last(L, 2);
    List_add_last(L, 3);
    List_add_last(L, 4);
    List_add_last(L, 5);
    List_add_last(L, 6);
    List_add_last(L, 7);
    List_add_last(L, 8);
    List_add_last(L, 9);
    List_add_last(L, 10);

    List_print(L);
    List_remove(L, 1);

    List_print(L);

    destroy_list(&L);
    return 0;
}