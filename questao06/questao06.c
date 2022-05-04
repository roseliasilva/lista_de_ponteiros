#include <stdio.h>

int main(){
    //Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?
    int pulo[4];

    *(pulo + 2); // mostra o conteudo do terceiro elemento do vetor
    *(pulo + 4);
    pulo + 4;
    pulo + 2; // essa notação referencia o valor do terceiro elemento do vetor

    return 0;
}