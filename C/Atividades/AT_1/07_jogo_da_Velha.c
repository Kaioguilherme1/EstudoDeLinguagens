#include <stdio.h>
#include <stdbool.h>

void ExibirJogo(char *ponteiro){
    int x, y;
    for (x = 0; x < 3; x++){
        for (y = 0; y < 3; y++)
            printf("%c ", *ponteiro);
        
        ponteiro++;
        printf("\n");    
        }
}

void jogada(char *ponteiro, int jogador){
    int i;

    if (jogador == 1){
        ponteiro = "X";
        printf("%p %c \n\n", ponteiro, *ponteiro);
    }else{
        ponteiro = "O";
    }
    
    
}

int main(void){
    char jogoDaVelha[3][3];
    int cordenadaX, cordenadaY, posX, posY, *posicao;
    bool fim = false;

    system("clear");
    printf("iniciando o jogo.....\n");
    //Exibe o jogoDaVelha
    for (cordenadaX = 0; cordenadaX < 3; cordenadaX++){
        for (cordenadaY = 0; cordenadaY < 3; cordenadaY++){
            jogoDaVelha[cordenadaX][cordenadaY] = '*';
            printf("%c ", jogoDaVelha[cordenadaX][cordenadaY]);
        }
        printf("\n");
    }
    
    while (fim == false){
    
        printf("Jogador 1: ");
        scanf("%d", &posX);
        printf(" ");
        scanf("%d", &posY);

        jogada(&jogoDaVelha[posX-1][posY-1], 1);
        ExibirJogo(&jogoDaVelha[0][0]);



       

    }
    return 0;
}