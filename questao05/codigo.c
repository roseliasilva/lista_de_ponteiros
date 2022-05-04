#include <stdio.h>

int main(void){
  
  float vet[5] = {1.1,2.2,3.3,4.4,5.5}; //vetor de float
  float *f; //ponteiro para float
  int i; //inteiro para inicialização do for
  f = vet; //f aponta para vet
  printf("contador/valor/valor/endereco/endereco");

  //repetir 4 vezes
  for(i = 0 ; i <= 4 ; i++){
    //imprimir o contador de 0 a 4
    printf("\ni = %d; ",i); //esperado
    //vet[i] = vet[i] -> valores
    printf("vet[%d] = %.1f; ",i, vet[i]); //esperado
    //mesma coisa do anterior
    printf("*(f + %d) = %.1f; ",i, *(f+i));
    //imprimir os endereços das posições
    printf("&vet[%d] = %X; ",i, &vet[i]);
    //mesma coisa do anterior
    printf("(f + %d) = %X; ",i, f+i);
  }
}

//todos os valores foram esperados, porém
//no 3° e no 5° printf foram usadas atribuições
//diferentes