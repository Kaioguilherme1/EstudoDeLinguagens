//auth Kaio Guilherme Ferraz 
// date: 2021-26-11
#include <stdio.h>

int main(void) {

    int matriz[3][4], j, i, *ponteiro;

    for ( i = 0; i < 3; i++) 
        for ( j = 0; j < 4; j++) {
            printf("Digite o valor a ser incerido >>> ");
            scanf("%d", &matriz[i][j]);
        }
    printf("fim\n\n");
    
    ponteiro = &matriz[0][0];
    i , j = 0;

    for (i = 0; i < 3; i++){
        for ( j = 0; j < 4 ; j++) {
            //passa pela matriz somando 4 bytes no endereço do ponteiro
            printf("%d |", *ponteiro);
            ponteiro++;
            
        }
        printf("\n");
        }
    
    return 0;
}
    
