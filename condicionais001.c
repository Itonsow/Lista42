#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, numero1;
    scanf("%d", &numero);
    scanf("%d", &numero1);
    int soma = numero + numero1;
    if (soma >= 10) {
        printf("A soma dos numeros e maior ou igual a 10.\n");
    } else if (soma < 10) {
        printf("A soma dos numeros e menor que 10.\n");
    }

    return 0;
}