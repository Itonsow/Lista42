#include <stdio.h>
#include <stdlib.h>

int main(){

    // A loja “FiqueFeliz” resolveu liquidar todos os seus produtos, para isso necessita de um programa que
    //ajude calcular os novos preços desses produtos. Elabore um programa que leia o preço de um produto,
    //o valor do desconto(em porcentagem) e calcule o novo preço. 

    float valorProduto, desconto, valorNovo;
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    printf("Digite o desconto: ");
    scanf("%f", &desconto);

    valorNovo = valorProduto - valorProduto * (desconto/100);

    printf("-----------------\n");
    printf("Valor novo: R$%.2f\n", valorNovo);
    printf("-----------------\n");

    return 0;
}