#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _queue_node{
    int data;
    struct _queue_node *next;
    struct _queue_node *prev;
} Node;

typedef struct _queue_dinamic {
    Node *begin;
    Node *end;
    long size;
    long capacity;
} _queue_dinamic, queue, QueueDinamic;

//----Construtures E Destrutores----

Node *Create_Node(int val){
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

queue *Create_Queue(long capacity){
    queue *Q = (queue *)malloc(sizeof(queue));
    Q->begin = NULL;
    Q->end = NULL;
    Q->size = 0;
    Q->capacity = capacity;
    return Q;
}

void Destroy_Queue(queue **Q_ref){
    queue *Q = *Q_ref;
    Node *p = Q->begin;
    Node *aux;

    for (size_t i = 0; i < Q->size; i++)
    {
        aux = p;
        p = p->next;
        free(aux);
    }
    free(Q);
    *Q_ref = NULL;
}

//----Funções----

bool isFull(queue *Q){
    return Q->size == Q->capacity;
}

bool isEmpty(queue *Q){
    return Q->size == 0;
}

long get_size(queue *Q){
    return Q->size;
}

void enqueue (queue *Q, int val){
    if (isFull(Q)){
        printf("Queue is full\n");
        exit(EXIT_FAILURE);
    }
    Node *p = Create_Node(val);

    // caso 1:lista vazia
        if (isEmpty(Q)){
            Q->begin = p;
            Q->end = p;
        }else{
            // caso 2: lista não vazia
            Q->end->next = p;
            p->prev = Q->end;
            Q->end = p;

            // parte circular
            Q->end->next = Q->begin;
            Q->begin->prev = Q->end;
        }
        Q->size++;
}

int denqueue (queue *Q){
    if (isEmpty(Q)){
        printf("Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    int val = Q->begin->data;
    Node *p = Q->begin;
    Q->begin = Q->begin->next;
    Q->begin->prev = Q->end;
    Q->end->next = Q->begin;
    Q->size--;
    free(p);
    return val;
}

int peek (queue *Q){
    if (isEmpty(Q)){
        printf("Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    return Q->begin->data;
}

void printQueue(queue *Q){
    printf("size: %ld\n", Q->size);
    printf("capacity: %ld\n", Q->capacity);
    if(isEmpty(Q)){
        printf("begin: NULL\n");
        printf("end: NULL\n\n");
    }else{
        printf("begin: %d\n", Q->begin->data);
        printf("end: %d\n\n", Q->end->data);
    }
    

    Node *p = Q->begin;
    for (size_t i = 0; i < Q->size; i++)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main(){
    QueueDinamic *Q = Create_Queue(5);
    int val;

    printQueue(Q);
    puts("Enqueue 10 20 30");
    enqueue(Q, 10);
    enqueue(Q, 20);
    enqueue(Q, 30);

    puts("\npeek");
    val = peek(Q);
    printf("val = %d\n", val);
    printQueue(Q);

    puts("\ndenqueue");
    val = denqueue(Q);
    printf("val = %d\n", val);
    printQueue(Q);

    puts("\n Enqueue 40 , 50");
    enqueue(Q, 40);
    enqueue(Q, 50);
    printQueue(Q);

    puts("\n denqueue");
    val = denqueue(Q);
    printf("val = %d\n", val);
    printQueue(Q);

    puts("\n Enqueue 100, 200");
    enqueue(Q, 100);
    enqueue(Q, 200);
    printQueue(Q);

    return 0;
}
