#include <stdio.h>
#include <stdlib.h>

int main(){

    //Escrever um algoritmo que leia uma quantidade desconhecida de numeros e conte quantos deles estao nos seguintes intervalos: 
    //[0,25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.

    int numero, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    system("clear");

    printf("Digite os numeros que eu vou classificalos.\n");

    while(-1){
        printf("Numero(digite um numero negativo para parar): ");
        scanf("%d", &numero);

        if(numero < 0){
            break;
        }else if(numero > 0 && numero <= 25){
            c1++;
        }else if(numero > 25 && numero <= 50){
            c2++;
        }else if(numero > 50 && numero <= 75){
            c3++;
        }else if(numero > 75 && numero <= 100){
            c4++;
        }else{
            continue;
        }
    }

    printf("[0,25]: %d\n", c1);
    printf("[26,50]: %d\n", c2);
    printf("[51,75]: %d\n", c3);
    printf("[76,100]: %d\n", c4);

    return 0;
}