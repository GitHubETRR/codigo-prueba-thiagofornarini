#include <stdio.h>

int main(void){

    int fecha,dia,mes,año;
    printf("Ingrese la fecha en formato DDMMAAAA:\n");
    scanf("%d",&fecha);
    dia=fecha/1000000;
    mes=(fecha%1000000)/10000;
    año=(fecha%10000);
    printf("Su fecha separada es %d,%d,%d",dia,mes,año);
}