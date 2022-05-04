#include <stdio.h>

int main(){
    //tipo char ocupa 1 byte
    //tipo int ocupa 2 bytes
    //tipo float ocupa 4 bytes
    //double ocupa 8 bytes

    char x[4];
    //mesmo vetor de x, porém usando variáveis diferentes e tipos diferentes
    int y[4]; 
    float z[4];
    double w[4];

    //levando em consideração que o endereço de x[0] = 4092

    printf("posicao char = %X", x); //4092
    printf("\nposicao char = %X", x+1); //4093
    printf("\nposicao char = %X", x+2); //4094
    printf("\nposicao char = %X\n", x+3); ////4095

    printf("\nposicao int = %X", y); //4092
    printf("\nposicao int = %X", y+1); //4096
    printf("\nposicao int = %X", y+2); //4100
    printf("\nposicao int = %X\n", y+3); //4104

    printf("\nposicao float = %X", z); //4092
    printf("\nposicao float = %X", z+1); //4096
    printf("\nposicao float = %X", z+2); //4100
    printf("\nposicao float = %X\n", z+3); //4104

    printf("\nposicao double = %X", w); //4092
    printf("\nposicao double = %X", w+1); //4100
    printf("\nposicao double = %X", w+2); //4108
    printf("\nposicao double = %X\n", w+3); //4116

    return 0;
}