#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define TAM 21

typedef struct
{
    char nome[TAM];
} aluno;

int comp(const void *p1, const void *p2)
{
    aluno *i = (aluno *)p1, *j = (aluno *)p2;
    return strcmp(i->nome, j->nome);
}

int main(int argc, char *argv[])
{

    int x, n, k;
    scanf("%d %d", &n, &k);
    aluno aluno[n];
    for (x = 0; x <= n; x++)
    {
        scanf(" %s", aluno[x].nome);
    }
    qsort(aluno, n, sizeof(aluno[0]), comp);
    printf("%s\n", aluno[k - 1].nome);
    return 0;
}