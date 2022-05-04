#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *A, *B, *C;
    void somaVetores(int n, int *A, int *B, int *C);
    
    printf("Com quantos elementos o vetor trabalhará?");
    scanf("%d", &n);
    
    // 1) Alocando os vetores:
    A = malloc(n*sizeof(int));
    B = malloc(n*sizeof(int));
    C = malloc(n*sizeof(int));

    // 2) Preenchendo os vetores A e B:
    printf("Digite os elementos do vetor A:");
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    
    printf("Digite os elementos do vetor B:");
    for(int i=0; i<n; i++){
        scanf("%d", &B[i]);
    }
    
    // 3) Chamando a função que soma os vetores:
    somaVetores(n, A, B, C);

    // 6) Liberando a alocação dinâmica de memória: 
    free(A);
    free(B);
    free(C);

    return 0;
}

void somaVetores(int n, int *A, int *B, int *C){
    // 4) Fazendo a soma dos vetores:
    for(int i=0; i<n; i++){
        C[i] = A[i] + B[i];
    }
    
    // 5) Imprimindo os valores:
    for(int i=0; i<n; i++){
        printf("%d,", C[i]);
    }
}