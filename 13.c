#include <stdio.h>
#include <stdlib.h>

int main(){

    int plano;
    float salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite o plano(1: 10%%, 2: 15%%, 3: 20%%): ");
    scanf("%d", &plano);
    switch(plano){
        case 1:
            system("clear");
            printf("Salario: %.2f\n", salario * 1.1);
            break;
        case 2:
            system("clear");
            printf("Salario: %.2f\n", salario * 1.15);
            break;
        case 3:
            printf("Salario: %.2f\n", salario * 1.2);
            break;
        default:
            system("clear");
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}