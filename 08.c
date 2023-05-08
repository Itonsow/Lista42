#include <stdio.h>
#include <stdlib.h>

int main(){

    //Uma certa importância será dividida entre três ganhadores de um concurso.
    //Sendo que da quantia total:
    //• O primeiro ganhador recebera 46%;
    //• O segundo recebera 32%;
    //• O terceiro recebera o restante;
    //Elabore um programa que dado o valor do concurso em reais ele, calcule e imprima a quantia ganha por
    //cada um dos ganhadores

    float tot;

    printf("Quantia total(que sera distribuida): R$");
    scanf("%f", &tot);

    printf("Primeiro: R$%.2f\n", tot * 0.46);
    printf("Segundo: R$%.2f\n", tot * 0.32);
    printf("Terceiro: R$%.2f\n", tot * 0.22);

    return 0;
}