//nibliotecas para o funcionamento do código
#include <stdio.h>
#include <stdlib.h>

//função de comparação
int compare (const void * a, const void * b){
    //recupera o valor em float
    return ( *(float*)a - *(float*)b );
}

int main(){
    int n, i; //variável para guardar a quantidade de elementos do vetor e a inicialização do for
    float *valores; //vetor

    printf("digite quantos valores vc quer ordenar: \n");
    scanf("%d", &n); //quantidade dos elementos do vetor

    //alocação dinânica do vetor
    valores = malloc(n*sizeof(float));

    //preenchendo o vetor de floats
    printf("digite os valores que vc quer ordenar: \n");
    for(i=0; i<n; i++){
        scanf("%f", &valores[i]);
    }

    //utilizando a função qsort para comparar e ordenar os elementos do vetor
    qsort (valores, n, sizeof(float), compare);

    //imprimindo os valores do vetor ordenados
    printf("valores ordenados: \n");
    for(i=0; i<n; i++){
        printf("%.1f, ", valores[i]);
    }

    //liberando a memória
    free(valores);
}