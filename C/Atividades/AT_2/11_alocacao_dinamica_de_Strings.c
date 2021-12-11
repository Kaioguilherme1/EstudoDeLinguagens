// não consegui :(


    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char data[1][1];
    int index, *vector;
} VetorString;

VetorString *createVector(char word[]){
    VetorString *v = (VetorString*)malloc(sizeof(VetorString));
    v->index = 0;
    v->data[0] = (char*)malloc(sizeof(char));
    
}

void add_string(VetorString *v, char word[]){
    v->index++;
    v->data = (char*)realloc(v->data, sizeof(char)*strlen(word));

}

int main(void){
    
   /* printf("Digite uma palavra: ");
    scanf("%s", word);
    VetorString *vec = createVector(word);

    printf("%s\n", vec->data);
    return 0; */

}