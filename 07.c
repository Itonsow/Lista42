#include <stdio.h>
#include <stdlib.h>

int main(){

    //Um sistema de equações lineares do tipo:
    // ax + by = c
    // dx + ey = f
    // Pode ser resolvido segundo mostrado abaixo:
    // x = (ce - bf) / (ae - bd)
    // y = (af - cd) / (ae - bd)
    // Escreva um algoritmo que lê os coeficientes “a,b,c,d,e, f” e calcula e mostra os valores de x e y
    //                                              0,1,2,3,4, 5
    float numeros[6], x, y;

    char letras[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

    for(int i = 0; i < 6; i++){
        printf("Digite o valor de %c: ", letras[i]);
        scanf("%f", &numeros[i]);
    }

    x = (numeros[2] * numeros[4] - numeros[1] * numeros[5]) / (numeros[0] * numeros[4] - numeros[1] * numeros[3]);
    y = (numeros[0] * numeros[5] - numeros[2] * numeros[3]) / (numeros[0] * numeros[4] - numeros[1] * numeros[3]);

    printf("X: %.2f\n", x);
    printf("Y: %.2f\n", y);

    return 0;
}