//auth kaio guilherme Ferraz
//Date: 2021-27-11

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// função que inicializa o jogo e reseta todas as variáveis
void iniciarJogo(char *enderecoDaPalavraSecreta, char *enderecoDaPalavraExibida, int *enderecoErros){

    char palavra_secreta[20];

    system("clear");
    printf("Iniciando Jogo da Forca...\n");
    printf("Jogador 1: Digite a palavra secreta: ");
    scanf("%s", palavra_secreta);
    system("clear");

    //faz a copia da palavra secreta e palavra exibida para a variável do main
    for (int i = 0; i < strlen(palavra_secreta); i++)
    {   
        *enderecoDaPalavraSecreta = palavra_secreta[i];
        *enderecoDaPalavraExibida = '_';

        enderecoDaPalavraExibida++;
        enderecoDaPalavraSecreta++;
    }

        printf("palavra digitada!\n");

    *enderecoErros = 0;
}

int main(void){

    char palavraSecreta[20], palavraExibida[20];
    char letra[2];
    int erros; 
    bool acerto = false;

    iniciarJogo(&palavraSecreta, &palavraExibida, &erros);

    printf("%s \n",palavraExibida);

    while(erros < 6){
        printf("Jogador numero 2: \n");
        printf("Digite uma letra: ");
        scanf("%s", &letra);

        if (strlen(letra) > 1){
            printf("Digite apenas uma letra!\n");
            continue;
        }else{
            for (int i = 0; i < strlen(palavraSecreta); i++){
                if (palavraSecreta[i] == letra[0]){
                    palavraExibida[i] = letra[0];
                    acerto = true;
                }
            }

            if (acerto == false){
                erros++;
                }

            acerto = false;  
        }
        
        printf("%s\n", palavraExibida);
        printf("Erros: %d/5 /n",erros);
        
        if(erros == 5){
            
            printf("Jogador 2 perdeu!\n");
            printf("Deseja jogar de novo?(y/n)");
            scanf("%s", &letra);
            if (letra[0] == 'y')
            {   
                //limpa as variáveis
                memset(palavraExibida, 0, sizeof(palavraExibida));
                memset(palavraSecreta, 0, sizeof(palavraSecreta));

                iniciarJogo(&palavraSecreta, &palavraExibida, &erros);
            }
            else
            {
                printf("Obrigado por jogar!\n");
                return 0;
            }
        }

        if (strcmp(palavraExibida, palavraSecreta) == 0){
            printf("Parabéns você venceu, a palavra era: %s!!!!!!!\n", palavraExibida);
            printf("Deseja jogar de novo?(y/n)");
            scanf("%s", &letra);

            if (letra[0] == 'y'){
                
                //limpa as variáveis
                memset(palavraExibida, 0, sizeof(palavraExibida));
                memset(palavraSecreta, 0, sizeof(palavraSecreta));

                iniciarJogo(&palavraSecreta, &palavraExibida, &erros);
            }else{
                printf("Obrigado por jogar!\n");
                return 0;
            }
            
        }
        
    }
}