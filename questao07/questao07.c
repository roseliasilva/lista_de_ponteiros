#include <stdio.h>

int main (){
    //Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.
    
    int mat[4], *p, x;

    p = mat + 1; // operação válida, está percorrendo os bits do vetor
    //p = mat++; // operação inválida
    //p = ++mat; // operação inválida
    x = (*mat)++; // operação válida, pois o certo é incrementar o valor do que está sendo armazenado

    printf("%d",x);

    return 0;
}