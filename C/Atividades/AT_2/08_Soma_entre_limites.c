//auth Kaio Guilherme Ferraz
//date 2021-12-10

#include <stdio.h>

int somarLimitando(int menor, int maior){
    int soma = 0;
    int i;
    for(i = menor; i <= maior; i++){
        soma += i;
    }
    return soma;
}


int main(void){
    printf("%d", somarLimitando(3, 7));
}