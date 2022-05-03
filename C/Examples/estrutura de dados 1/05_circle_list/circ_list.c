#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//----DEFINIÇÃO DAS ESTRUCS----
typedef struct _circ_node{
    int val;
    struct _circ_node *next;
    struct _circ_node *prev;
} Circ_node, CircNode;

typedef struct _doubly_linked_list{
    CircNode *begin;
    CircNode *end;
    size_t size;

} Circ_List, CircList;

//----Construtures E Destrutores----
CircNode *create_node(int val){ // contrutor do node
    CircNode *node = (CircNode *)malloc(sizeof(CircNode));
    node->val = val;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

CircList *create_list(){ // contrutor da lista
    CircList *L = (CircList *)malloc(sizeof(CircList));
    L->begin = NULL;
    L->end = NULL;
    L->size = 0;
    return L;
}

void destroy_list(CircList **L_ref){
    CircList *L = *L_ref;
    CircNode *p = L->begin;
    CircNode *aux;
    while (p != L->end){}
    {
        CircNode *aux = p;
        p = p->next;
        free(aux);
    }
    free(p);
    free(L);
    *L_ref = NULL;
}

void destroy_list_2(CircList **L_ref){
    CircList *L = *L_ref;

    CircNode *p = L->begin;
    CircNode *aux;
    
    for (size_t i = 0; i < L->size; i++){
        CircNode *aux = p;
        p = p->next;
        free(aux);
    }
    free(L);
    *L_ref = NULL;
    
}
//----FUNÇÕES----
bool CircList_is_empty(CircList *L){
    return L->size == 0 && L->begin == NULL; 
}

void CircList_add_fist(CircList *L, int val){
    CircNode *p = create_node(val);

    //caso 1:lista vazia
    if(CircList_is_empty(L)){
        L->begin = p;
        L->end = p;
    }else{
        p->next = L->begin;
        L->begin->prev = p;
        L->begin = p;
        //parte circular
        p->prev = L->end;
        L->end->next = p;
    }
    L->size++;
}

void CircList_print(CircList *L){
    if(CircList_is_empty(L)){
        printf("L -> NULL\n");
        printf("L->begin-> NULL");
    }else{
        CircNode *p = L->begin; 
        printf("L-> ");
        do{
            printf("%d-> ", p->val);
            p = p->next;
        }while (p != L->begin);
        //printf("\n L->end: %d",L->end->val);  
    }
    printf("\nSize: %lu \n", L->size);
}

void CircList_remove(CircList *L, int val){
    if(!CircList_is_empty(L)){
        CircNode *p = L->begin;
        int i = 0;
        //caso 1:val no begin
        if(p->val == val){
            if(L->size == 1){
                L->begin = NULL;
                L->end = NULL;
            }else{
                L->begin = p->next;
                L->begin->prev = L->end;
                L->end->next = L->begin;
            }
        
        }else{
            //caso 2:val no end
            if(L->end->val == val){
                p = L->end;
                L->end = p->prev;
                L->end->next = L->begin;
                L->begin->prev = L->end;
                
                
            }else{
                //caso 3:val no meio
            
                while(i != L->size){
                    if (p->val == val){
                        p->prev->next = p->next;
                        p->next->prev = p->prev;
                        break;
                    }
                    p = p->next;
                    i++;
                }
                printf("\nValor não encontrado\n");
                return;
            }
        }
        if(i != L->size){
            L->size--;
            free(p);
        }
        
    }
}

void remove_duplicate(CircList *L){
    CircNode *p = L->begin;
    CircNode *aux;
    int val, cont;
    for (size_t i = 0; i < L->size; i++){
        
        cont = 0;
        val = p->val;
        for (size_t i = 0; i < L->size; i++){
            if(p->val == val){
                cont++;
            }else if(p->val == val && cont == 2){
                aux = p->next;
                p->prev->next = p->next;
                p->next->prev = p->prev;
                free(p);
                L->size--;
                p = aux;
            }
            p = p->next;
        }
        p = p->next;
    }
}

double somar_List(CircList *L1 , CircList *L2){
    CircNode *p1 = L1->begin;
    CircNode *p2 = L2->begin;
    int casa_decimal1, casa_decimal2, maior, casa_decimal_exedente;
    double soma = 0;
    casa_decimal1 = L1->size;
    casa_decimal2 = L2->size;

    //verificar maior tamanho
    if(casa_decimal1 > casa_decimal2){
        maior = casa_decimal1;
        casa_decimal_exedente = casa_decimal1 - casa_decimal2;
    }else{
        maior = casa_decimal2;
        casa_decimal_exedente = casa_decimal2 - casa_decimal1;
    }

    for (size_t i = 0; i < maior; i++){
        if(casa_decimal_exedente != 0){
            if(casa_decimal1 > casa_decimal2){
                soma += p1->val + pow(10,casa_decimal1);
                casa_decimal1--;
                p1 = p1->next;
            }else{
                soma += p2->val * pow(10,casa_decimal2);
                casa_decimal2--;
                p2 = p2->next;
            }
            
        }else if (L1->size > L2->size){
            soma += (p1->val * pow(10,casa_decimal1)) + (p2->val * pow(10,casa_decimal2));
            casa_decimal1--;
            casa_decimal2--;
        }
        p1 = p1->next;
        p2 = p2->next;
    }    
    return soma;
}

int main(int argc, char **argv){
    CircList *L1 = create_list();
    CircList *L2 = create_list();

    // puts("add Fist: 3, 4, 1, 3, 1, 5, 9, 4, 3");
    // CircList_add_fist(L, 3);
    // CircList_add_fist(L, 4);
    // CircList_add_fist(L, 9);
    // CircList_add_fist(L, 5);
    // CircList_add_fist(L, 1);
    // CircList_add_fist(L, 3);
    // CircList_add_fist(L, 1);
    // CircList_add_fist(L, 4);
    // CircList_add_fist(L, 3);
    // puts("primeiro");
    // CircList_print(L);
    
    CircList_add_fist(L1, 3);
    CircList_add_fist(L1, 4);
    CircList_add_fist(L1, 1);

    CircList_add_fist(L2, 3);
    CircList_add_fist(L2, 4);
    CircList_add_fist(L2, 1);
    
    CircList_print(L1);
    CircList_print(L2);
    printf("\nSoma: %f\n", somar_List(L1, L2));
    //destroy_list_2(&L);
    return 0;
}

    
