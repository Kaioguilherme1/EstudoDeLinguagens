#include <stdio.h>

int main()
{
    char **ponteiros[5], palavra[69];
    int i;

    //ponteiros = malloc(5 * sizeof(char *));

    for ( i = 0; i < 5; i++)
    {
        printf("Digite uma palavra >>> ");
        get(palavra);


    }
    


    return (0);
}