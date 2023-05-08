#include <stdio.h>
#include <stdlib.h>

int main(){

    //  Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a
    //média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. 

    float nota[3], media;

    for(int i = 0; i < 3; i++){
        printf("Digite a %d nota: ", i+1);
        scanf("%f", &nota[i]);
    }

    media = 0.2 * nota[0] + 0.3 * nota[1] + 0.5 * nota[2];
    printf("Media: %.2f", media);

    return 0;
}