#include <stdio.h>

int main(){
    int seg, min, hor, segr;


    printf("Ingrese una cantidad de segundos menor a 86000, para convertirla a Horas Minutos Segundos:\n");
    scanf("%d",&seg);
    hor=seg/3600;
    min=(seg%3600)/60;
    segr=(seg%3600)-(min*60);
    printf("%dh%dm%ds",hor,min,segr);
}