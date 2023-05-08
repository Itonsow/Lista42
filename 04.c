#include <stdio.h>
#include <stdlib.h>

int main(){

    //  Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros
    //quadrados 

    float comprimento, largura, area;
    printf("Digite o comprimento da sala: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    printf("-----------------\n");
    printf("Area: %.2f metros quadrados\n", area);
    printf("-----------------\n");

    return 0;
}