#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, contador = 1;
    scanf("%d", &numero);
    while(contador <= 10){
        int temp = numero * contador;
        printf("%d\n", temp);
        contador++;
    }

    return 0;
}