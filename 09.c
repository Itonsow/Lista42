#include <stdio.h>
#include <stdlib.h>

int main(){

    //Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar,
    //sabendo que a decisão é sempre pelo mais barato

    float preco[3], menor = 999999;

    for(int i = 0; i < 3; i++){
        scanf("%f", &preco[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        if(preco[i] < menor){
            menor = preco[i];
        }
    }

    printf("Menor: %.2f", menor);

    return 0;
}