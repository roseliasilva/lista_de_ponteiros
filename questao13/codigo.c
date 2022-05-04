#include <stdio.h>
#include <stdlib.h>

//função que ordena os valores do vetor
void ordena(int n, float *valores){
    int i, j;

    for(i=0; i<n; i++){
        float aux;
        for(j=0; j<n; j++){
            if(valores[i]<valores[j]){
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }

    //imprimindo os valores
    printf("valores ordenados: \n");
    for(i=0; i<n; i++){
        printf("%.1f, ", valores[i]);
    }
}

int main(){
    int n, i;
    float *valores; 

    //pedindo a quantidade de elementos do vetor
    printf("digite quantos valores vc quer ordenar: \n");
    scanf("%d", &n);

    //alocação dinâmica do vetor
    valores = malloc(n*sizeof(float));

    //preencendo o vetor
    printf("digite os valores que vc quer ordenar: \n");
    for(i=0; i<n; i++){
        scanf("%f", &valores[i]);
    }

    //chamada da função para ordenar os valores
    ordena(n, valores);

    //liberação da memória
    free(valores);
}