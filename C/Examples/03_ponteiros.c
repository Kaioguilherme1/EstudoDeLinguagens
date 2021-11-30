#include <stdio.h>

int main(){
    int x = 10;
    int *px = &x;
    int l = &x;
    *px = 100;
    
    printf("px = %d *px = %d  %d \n", x, px, l);
}