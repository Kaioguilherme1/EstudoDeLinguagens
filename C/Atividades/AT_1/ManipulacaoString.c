#include <stdio.h>
#include <string.h>

void main(void){
    char PalavraChave[10];

    printf("Digite uma palavra >>> ");
    scanf("%s", PalavraChave);

    int tamanho = strlen(PalavraChave);
    printf(" palavra: %s tamanho:%d  local: %s\n", PalavraChave, tamanho,  &PalavraChave[tamanho - 1]);
    int *endereco;
    endereco = &PalavraChave[tamanho - 1];

    printf("endereço = %p  o que tem dentro: %c",endereco, *endereco);

   

}