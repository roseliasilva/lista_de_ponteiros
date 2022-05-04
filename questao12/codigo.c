//Um ponteiro para uma função é usado para guardar endereços de áreas de código

//exemplo de aplicação: convertendo de horas para dias
#include <stdio.h>

int f_dias(int horas){
    int dias;
    dias = horas/24;
    return dias;
}

int main(){
    int horas;
    scanf("%d", &horas);
    int (*pf) (int) = &f_dias;

    printf("%d horas = %d dias", horas, pf(horas));

    return 0;
}