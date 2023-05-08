#include <stdio.h>
#include <stdlib.h>

int main(){

    //Leia o salário mensal atual de um funcionário e o percentual de reajuste e determine o valor do novo
    //salário.

    float salarioVelho, salarioNovo, percentualReajuste;

    printf("Digite o seu salario: ");
    scanf("%f", &salarioVelho);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    salarioNovo = salarioVelho * (percentualReajuste / 100) + salarioVelho;
    printf("R$%.2f", salarioNovo);

    return 0;
}