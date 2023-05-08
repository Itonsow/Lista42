#include <stdio.h>
#include <stdlib.h>

int main(){

    //Leia o valor de duas variáveis A e B e troque-os, usando o comando de atribuição 
    int a, b, temp;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("-----------\n");
    printf("A: %d\nB: %d", a, b);

    return 0;
}