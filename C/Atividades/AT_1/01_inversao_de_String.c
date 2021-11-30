//Auth: Kaio Guilherme Ferraz 
//date: 2021-26-11

#include <stdio.h>
#include <string.h>


int main(void)
{

    char palavra[10];
    char palavraInvertida[10];
    int tamanho;

    printf("Digite uma palavra >>> ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    //repete o processo o numero de vezes igual ao tamanho da palavra
    for (int i = 0; i < tamanho + 1; i++)
    {   
        //lê as duas variaveis e insere na outra so que uma esta sendo lida de forma invertida
        palavraInvertida[i] = palavra[tamanho -i -1];
        printf("%c | ", palavraInvertida[i]);
        printf("%c \n", palavra[i]);
    }

    printf("%s\n", palavraInvertida);
}