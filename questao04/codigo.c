#include <stdio.h>

int main() {
  int valor;
  int *p1; //ponteiro
  float temp;
  float *p2; //ponteiro
  char aux;
  char *nome = "Ponteiros"; //ponteiro
  char *p3; //ponteiro
  int idade;
  int vetor[3];
  int *p4; //ponteiro
  int *p5; //ponteiro

  /* (a) */
  valor = 10;
  p1 = &valor; //p1 guarda o endereço de valor
  *p1 = 20;  //conteúdo de valor=20
  printf("%d \n", valor);

  /* (b) */
  temp = 26.5;
  p2 = &temp; //p2 = endereço de temp
  *p2 = 29.0; //temp = 29.0
  printf("%.1f \n", temp);

  /* (c) */
  p3 = &nome[0]; //p3 = endereço do vetor nome na posição [0]
  aux = *p3; //aux = conteúdo de p3 = nome[0] = P
  printf("%c \n", aux);

  /* (d) */
  p3 = &nome[4];
  aux = *p3; //aux = e
  printf("%c \n", aux);

  /* (e) */
  //esperado: "Ponteiros"
  p3 = nome; //p3 recebe a posição 0 do nome
  printf("%c \n", *p3); // = P

  /* (f) */
  p3 = p3 +4; //vai andar 4 casas em nome
  printf("%c \n", *p3); // = e

  /* (g) */
  p3--; //voltou 1 posição
  printf("%c \n", *p3); // = t

  /* (h) */
  vetor[0] = 31; //atribuindo valores ás posições
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor; 
  idade = *p4;
  printf("%d \n", idade); // = 31

  /* (i) */
  p5 = p4 +1;
  idade = *p5;
  printf("%d \n", idade); // = 45

  /* (j) */
  p4 = p5 +1;
  idade = *p4;
  printf("%d \n", idade); // = 27

  /* (l) */
  p4 = p4 -2;
  idade = *p4;
  printf("%d \n", idade); // = 31

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5); // = 45
  
  /* (n) */
  p5++;
  printf("%d \n", *p5);
  return(0); // = 27
}