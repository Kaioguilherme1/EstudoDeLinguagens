#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//----DEFINIÇÃO DAS ESTRUCS----
typedef struct _doubly_node
{
    char val[255];
    struct _doubly_node *next;
    struct _doubly_node *prev;
} Doubly_Node, Node;

typedef struct _doubly_linked_list
{
    Node *begin;
    Node *end;
    size_t size;

} Doubly_Linked_List, List;

//----DEFINIÇÃO DOS CONSTRUTORES

Node *create_node(char val[])
{ // contrutor do node
    Node *node = (Node *)malloc(sizeof(Node));
    strcpy(node->val, val);
    node->next = NULL;
    node->prev = NULL;
    return node;
}

List *create_list()
{
    // contrutor da lista
    List *L = (List *)malloc(sizeof(List));
    L->begin = NULL;
    L->end = NULL;
    L->size = 0;
    return L;
}

void destroy_list(List **L_ref)
{
    List *L = *L_ref;
    Node *p = L->begin;
    Node *aux;
    while (p != NULL)
    {
        Node *aux = p;
        p = p->next;
        free(aux);
    }
    free(L);
    *L_ref = NULL;
}

//----DEFINIÇÃO DAS FUNÇÕES----
bool List_is_empty(List *L) { return L->size == 0 && L->begin == NULL; }

void List_add_fist(List *L, char val[])
{
    // caso 1:lista vazia
    Node *p = create_node(val);
    p->next = L->begin;
    if (List_is_empty(L))
    {
        L->end = p;
    }
    else
    {
        L->begin->prev = p;
    }
    L->begin = p;
    L->size++;
}

void List_add_last(List *L, char val[])
{
    // caso 1:lista vazia
    Node *p = create_node(val);
    p->prev = L->end;
    if (List_is_empty(L))
    {
        L->begin = p;
    }
    else
    {
        L->end->next = p;
    }
    L->end = p;
    L->size++;
}

void list_print_new(List *L)
{
    Node *p = L->begin;
    while (p->next != NULL)
    {
        printf("%s ", p->val);
        p = p->next;
    }
    printf("%s\n", p->val);
}

// RESPOSTA PROBLEMA BEE 3160
List *List_add_friend(List *L1, List *L2, char amigo[])
{

    if (!List_is_empty(L1) && !List_is_empty(L2))
    {

        Node *p = L1->begin;

        while (p != NULL)
        {
            if (strncmp(p->val, amigo, strlen(p->val)) == 0)
            {
                // amigo esta no inicio
                if (p == L1->begin)
                {
                    L2->end->next = L1->begin;
                    L1->begin->prev = L2->end;
                    L2->end = L1->end;
                    return L2;
                }
                else
                {
                    // amigo nao esta no inicio
                    p->prev->next = L2->begin;
                    L2->begin->prev = p->prev;
                    L2->end->next = p;
                    p->prev = L2->end;
                    return L1;
                }
            }
            p = p->next;
        }
        // amigo nao esta na lista
        L1->end->next = L2->begin;
        L2->begin->prev = L1->end;
        L1->end = L2->end;
        return L1;
    }
    return NULL;
}

int main()
{
    List *L1 = create_list();
    List *L2 = create_list();
    List *L3 = create_list();

    // ler linha 1
    char linha1[500];
    fgets(linha1, sizeof(linha1), stdin);
    fflush(stdin);

    char *token;
    token = strtok(linha1, " \n");
    while (token != NULL){
        List_add_last(L1, token);
        token = strtok(NULL, " \n");
    }
    
    

    // ler linha 2
    char linha2[500];
    fgets(linha2, sizeof(linha2), stdin);
    fflush(stdin);

    token = NULL;
    token = strtok(linha2, " \n");
    while (token != NULL)
    {
        List_add_last(L2, token);
        token = strtok(NULL, " \n");
    }

    // ler amigo
    char amigo[500];
    fgets(amigo, sizeof(amigo), stdin);
    fflush(stdin);

    // fazer bee 3160
    L3 = List_add_friend(L1, L2, amigo);
    L3->size = L1->size + L2->size;

    // imprimir lista
    list_print_new(L3);

    return 0;
}