#include <stdio.h>
#include <stdlib.h>

int main(){

    //Dados um valor em real e a cotação do dólar, converta esse valor em dólares 

    float reais, dolar, valor;
    dolar = 5;

    printf("Digite o valor em reais: R$");
    scanf("%f", &reais);

    valor = reais * dolar;

    printf("Voce tem $%.2f dolares", valor);

    return 0;
}