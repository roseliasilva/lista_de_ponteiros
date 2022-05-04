#include <stdio.h>

/*int main(){
  int vet[] = {4,9,13};
  int i;
  
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i)); // percorre cada elemento do vetor
  }
}*/

int main(){
  int vet[] = {4,9,13};
  int i;
  
  for(i=0;i<3;i++){
    printf("%X ",vet+i); // exibirá o endereço dos elementos do vetor
  }
}
