//auth kaio guilherme ferraz
//date 2021-26-11

#include <stdio.h>

void Exibir(int *endereco){
    printf("   %d   |  %p \n", *endereco, endereco);

}

void main(void) {

    int numeroA, numeroB, numeroC, numeroD, controleDeLoop, modificardor;
    int *ponteiroA, *ponteiroB, *ponteiroC, *ponteiroD;

    printf("Digite o primeiro numero >>>  ");
    scanf("%d", &numeroA);
    printf("Digite o segundo numero >>> ");
    scanf("%d", &numeroB);
    printf("Digite o terceiro numero >>> ");
    scanf("%d", &numeroC);
    printf("Digite o quarto numero >>> ");
    scanf("%d", &numeroD);

    ponteiroA = &numeroA;
    ponteiroB = &numeroB;
    ponteiroC = &numeroC;
    ponteiroD = &numeroD;

    printf("\n\n");
    printf(" numero | Endereço \n");
    Exibir(ponteiroA);
    Exibir(ponteiroB);
    Exibir(ponteiroC);
    Exibir(ponteiroD);

    controleDeLoop = 1;

    while (controleDeLoop == 1){
        printf("\n\n\n====================================\n");
        printf("digite 1 para mudar o primeiro valor\n");
        printf("digite 2 para mudar o segundo valor\n");
        printf("digite 3 para mudar o terceiro valor\n");
        printf("digite 4 para mudar o quarto valor\n");
        printf("digite 5 para sair\n");
        printf("====================================\n");

        printf("qual numero você gostaria de modificar >>> ");
        scanf("%d", &modificardor);

        switch (modificardor){
            case 1:
                printf("Digite o novo numero de A>>> ");
                //insere o valor digitado no endereço do ponteiro
                scanf("%d", ponteiroA);
                break;
            case 2:
                printf("Digite o novo numero de B>>> ");
                scanf("%d", ponteiroB);
                break;
            case 3:
                printf("Digite o novo numero de C >>> ");
                scanf("%d", ponteiroC);
                break;
            case 4:
                printf("Digite o novo numero de D >>> ");
                scanf("%d", ponteiroD);
                break;
            case 5:
                controleDeLoop = 0;
                break;

            default:
            printf("comando invalido");
            break;

        
        }
        printf("\n\n");
        printf("valores atuais \n");
        printf(" numero | Endereço \n");
        Exibir(ponteiroA);
        Exibir(ponteiroB);
        Exibir(ponteiroC);
        Exibir(ponteiroD);
    }
}