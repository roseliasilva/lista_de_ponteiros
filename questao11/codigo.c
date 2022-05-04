#include <stdio.h>

int main(){
    return 0;

    float aloha[10];
    float coisas[10][5]; //matriz 10l e 5c
    float *pf;
    float value = 2.2;
    int i=3;

    //atribui o valor de "value" na terceira posição do vetor "aloha"
    aloha[2] = value; //válido

    //pede ao usuário para digitar um valor do tipo float e guarda esse valor no vetor "aloha"
    scanf("%f", &aloha);//válido
    
    //Erro de escrita/sintaxe
    //aloha = value"; Inválido

    //Imprime o vetor "aloha"
    printf("%f", aloha); //Válido

    //atribui o valor da quarta posição do vetor "aloha" á matriz "coisas"
    coisas[4][4] = aloha[3]; //Válida

    //Atribuição Inválida
    //coisas[5] = aloha; //Inválido

    //pf deveria receber o endereço de value
    //pf = value; //Inválido

    //pf recebe o endereço do vetor na primeira posição
    pf = aloha; //Válido

}