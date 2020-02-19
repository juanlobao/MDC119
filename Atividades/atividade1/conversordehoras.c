#include<stdio.h>
#include<stdlib.h>


    int main () {
        int segundos = 3000;
        int horas = segundos/3600 ;
        segundos = segundos%3600;
        int minutos = segundos/60;
        segundos = segundos%60;

    printf("Sao %d horas , %d minutos, %d segundos\n",horas,minutos,segundos);
    
    return 0 ;
    }


    