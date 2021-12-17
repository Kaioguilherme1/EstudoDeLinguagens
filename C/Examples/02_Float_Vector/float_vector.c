#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>

/*------------- Metodos Privados -------------*/
void isFull(floatVector* vec, char funcao[]) {
    if (vec->size == vec->capacity)
    {
        fprintf(stderr, "ERRO in %s ()\n", funcao);
        fprintf(stderr, "vector is full\n");
        exit(EXIT_FAILURE);
    }
}

void IndexInvalid(floatVector *vec, int index, char funcao[]){
    if (index >= vec->size || index < 0){
        fprintf(stderr, "ERRO in %s ()\n", funcao);
        fprintf(stderr, "Index [&d] is out of bounds: [%d, %d] \n", index, vec->size);
        exit(EXIT_FAILURE);
    }
}

/*------------- Metodos Publicos -------------*/
floatVector *create(int capacity){
    floatVector *vec = (floatVector*) malloc(sizeof(floatVector));
    vec-> capacity = capacity;
    vec-> size = 0;
    vec-> data = malloc(sizeof(float) * capacity);
    return vec;
}

void destroy(floatVector **vec_ref){
    floatVector* vec = *vec_ref;
    free(vec->data);
    free(vec);
    *vec_ref = NULL;
}

int size(floatVector *vec){
    return vec->size;
}

int capacity(floatVector *vec){
    return vec->capacity;
}

float get(floatVector *vec, int index){
    IndexInvalid(vec, index, "get");
    return vec->data[index];
}

void append(floatVector *vec, float val){
    isFull(vec, "append");

    vec->data[vec->size++] = val;
    //vec->size++;
}

void set(floatVector *vec, int index, float val){
    isFull(vec, "set");
    IndexInvalid(vec, index, "set");
    append(vec, vec->data[index]);

    vec->data[index] = val;
    
}

void print(floatVector *vec){
    puts("---------------FloatVector---------------");
    printf("Capacity: %d\n", vec->capacity);
    printf("Size: %d\n", vec->size);

    
    for(int i = 0; i < vec->size; i++){
        printf("%d | %.2f | \n",i ,  vec->data[i]);
    }
    puts(".........................");
}

void Remove(floatVector *vec, int index){
    IndexInvalid(vec, index, "remove");
    for(int i = index; i < vec->size; i++){
        vec->data[i] = vec->data[i+1];
    }
    vec->size--;
    
}

void erase(floatVector *vec){
    vec->size = 0;
}

floatVector *clone(floatVector *vec){
    
    floatVector *clone = create(vec->capacity);
    for(int i = 0; i < vec->size; i++){
        append(clone, vec->data[i]);
    }
    return clone;
}

