#include <stdio.h>

int main(){

    int i = 3,j= 4, *p, *q;

    p = i; //ilegal
    
    q = &j; //correta

    /*pegue o endereço de i, depois pegue o conteúdo deste endereço 
    (que obviamente é o valor de i) e depois pegue o endereço deste 
    conteúdo e guarde em p*/
    p = &*&i;

    //i = (*&)j; //ilegal

    /*Pegue o endereço de j e depois pegue o conteúdo 
    deste endereço para guardar em i*/
    i = *&j;

    /* Pegue o endereço de j, pegue o conteúdo 
    deste endereço e pegue o endereço dele e 
    finalmente pegue o conteúdo deste endereço para guardar em i*/
    i = *&*&j;
    
    q = *p; //ilegal

    i = (*p)++ + *q; //correta


    return 0;
}