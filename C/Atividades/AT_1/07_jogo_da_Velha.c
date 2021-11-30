#include <stdio.h>
#include <stdbool.h>

void ExibirJogo(char JogoDaVelha[3][3]){
    int x, y;
    for (x = 0; x < 3; x++){
        for (y = 0; y < 3; y++)
            printf("%c ", JogoDaVelha[x][y]);
        printf("\n");    
        }
}

void Jogada(char JogoDaVelha[3][3], char *posicao, int jogador){

    int x, y;
    /*for (x = 0; x < 3; x++){
        for (y = 0; y < 3; y++){
            if(JogoDaVelha[x][y] == 'x' || JogoDaVelha[x][y] == 'o'){
                printf("Você jogou onde já foi jogado, jogue novamente");
            
                if (icone == 'x'){
                    printf("\nJogador 1: ");
                    scanf("%d", &x);
                    printf(" ");
                    scanf("%d", &y);
                    Jogada(JogoDaVelha, posicao, "x");
                    ExibirJogo(JogoDaVelha);
                    break;
                }else{
                    printf("\nJogador 2: ");
                    scanf("%d", &x);
                    printf(" ");
                    scanf("%d", &y);
                    Jogada(JogoDaVelha, posicao, "o");
                    ExibirJogo(JogoDaVelha);
                    break;
                }
                
            }
            
    }*/
    posicao = "x";
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
        
        posicao = jogoDaVelha[posX][posY];

        Jogada(jogoDaVelha, posicao, 'x');
        printf("%c, %p", *posicao, posicao);
        ExibirJogo(jogoDaVelha);

        printf("Jogador 2: ");
        scanf("%d", &posX);
        printf(" ");
        scanf("%d", &posY);

        posicao = &jogoDaVelha[posX][posY];
        Jogada(jogoDaVelha, posicao, 1);
        ExibirJogo(jogoDaVelha);

    }
    return 0;
}