#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //Elabore um programa que leia os parâmetros a, b e c de uma equação quadrá*ca e determine as raízes
    //desta equação.

    double numeros[3], res1, res2, delta;

    for(int i = 0; i < 3; i++){
        scanf("%lf", &numeros[i]);
    }

    delta = (numeros[1] * numeros[1]) - 4 * numeros[0] * numeros[2];

    res1 = (-numeros[1] + sqrt(delta)) / (2 * numeros[0]);
    res2 = (-numeros[1] - sqrt(delta)) / (2 * numeros[0]);

    if(delta == 0){
        printf("Nao da, delta = 0!\n");
    }else{
        printf("Delta: %.2lf\n", delta);
        printf("Resultado 1: %.2lf\n", res1);
        printf("Resultado 2: %.2lf\n", res2);
    }
    
    return 0;
}