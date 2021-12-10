#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>

/*------------- Metodos Privados -------------*/
void isFull(floatVector* vec) {
    if (vec->size == vec->capacity)
    {
        fprintf(stderr, "ERRO in append ()\n");
        fprintf(stderr, "vector is full\n");
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
    if(index >= vec -> size || index < 0){
        fprintf(stderr, "ERRO in get ()\n");
        fprintf(stderr, "Index [&d] is out of bounds: [0, %d] \n",index, vec->size);
        exit(EXIT_FAILURE);
    }
    return vec->data[index];
}

void append(floatVector *vec, float val){
    isFull(vec);

    vec->data[vec->size++] = val;
    //vec->size++;
}

void set(floatVector *vec, int index, float val){
    isFull(vec);
    
    if(index >= vec -> size || index < 0){
        fprintf(stderr, "ERRO in set ()\n");
        fprintf(stderr, "Index [&d] is out of bounds: [0, %d] \n",index, vec->size);
        exit(EXIT_FAILURE);
    }
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
