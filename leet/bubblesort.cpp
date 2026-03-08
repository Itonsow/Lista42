#include <iostream>
#define TAM 4

using namespace std;

void imprimeVetor(int vetor[]){
    cout << "\n";
    for(int i = 0; i < TAM; i++){
        cout << "|" << vetor[i] << "| ";
    }
}

void bubblesortVetor(int vetor[]){
    int aux;
    for(int i = 0; i < TAM; i++){
        for(int j = i + 1; j < TAM; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    imprimeVetor(vetor);
}

int main(){

    int vetor[TAM] = {10, 9, 8, 3};

    imprimeVetor(vetor);
    bubblesortVetor(vetor);

    return 0;
}