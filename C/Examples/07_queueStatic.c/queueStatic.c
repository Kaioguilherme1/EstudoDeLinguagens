#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct _static_queue {
    int *data;
    long capacity;
    long size;
    long begin;
    long end;
} QueueStatic;

//----Construtores----

QueueStatic *createQueueStatic(long capacity) {
    QueueStatic *Q = (QueueStatic *)malloc(sizeof(QueueStatic));
    Q->capacity = capacity;
    Q->data = (int *)malloc(sizeof(int) * capacity);
    Q->size = 0;
    Q->begin = 0;
    Q->end = 0;
}

void destroy(void **ref_Q) {
    QueueStatic *Q = *ref_Q;
    free(Q->data);
    free(Q);
    *ref_Q = NULL;
}

//----Funções----

bool isEmpty(QueueStatic *Q) {
    return Q->size == 0;
}
bool isFull(QueueStatic *Q) {
    return Q->size == Q->capacity;
}

long size(QueueStatic *Q) {
    return Q->size;
}

void enqueue(QueueStatic *Q, int val) {
    if (isFull(Q)) {
        printf("Queue is full\n");
        exit(EXIT_FAILURE);
    }
    Q->data[Q->end] = val;
    Q->end = (Q->end + 1) % Q->capacity; //fila circular
    Q->size++;
    
}

int peek(QueueStatic *Q) {
    if (isEmpty(Q)) {
        printf("Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    return Q->data[Q->begin];
}

int denqueue(QueueStatic *Q){
    if (isEmpty(Q)) {
        printf("Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    int val = Q->data[Q->begin];
    Q->begin = (Q->begin + 1) % Q->capacity; //fila circular
    Q->size--;
    return val;
}

void printQueue(QueueStatic *Q){
    printf("size: %ld\n", Q->size);
    printf("capacity: %ld\n", Q->capacity);
    printf("begin: %ld\n", Q->begin);
    printf("end: %ld\n\n", Q->end);          

    long s, i;
    for (s = 0, i = Q->begin; s <Q->size; s++, i = (i + 1) % Q->capacity) {
        printf("%d \n", Q->data[i]);
    }    
}

//teste
int main(){
    QueueStatic *Q = createQueueStatic(5);
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