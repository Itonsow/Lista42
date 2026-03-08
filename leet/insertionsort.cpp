#include <iostream>
#define TAM 4

using namespace std;

void imprimeVetor(int vetor[]){
    cout << "\n";
    for(int i = 0; i < TAM; i++){
        cout << "|" << vetor[i] << "| ";
    }
}

void insertionVetor(int vetor[]){
    int atual, j;
    for(int i = 1; i < TAM; i++){
        atual = vetor[i];

        j = i - 1;
        while(j >= 0 && (atual < vetor[j])){
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = atual;
    }
    imprimeVetor(vetor);
}

int main(){

    int vetor[TAM] = {10, 8, 3, 5};
    imprimeVetor(vetor);
    insertionVetor(vetor);

    return 0;
}