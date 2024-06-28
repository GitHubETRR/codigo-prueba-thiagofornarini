#include <stdio.h>

int main(){
    int HHMMSS1;
    int HHMMSS2;
    int HHMMSS;
    int HH, MM, SS;
    printf("Porfavor, ingrese los 2 tiempos que desee sumar(HHMMSS):\n");
    scanf("%d", &HHMMSS1);
    scanf("%d", &HHMMSS2);
    
    HH=(HHMMSS1/10000)+(HHMMSS2/10000);
    MM=((HHMMSS1%10000-HHMMSS1%100)/100)+((HHMMSS2%10000-HHMMSS1%100)/100);
    SS=(HHMMSS1%100)+(HHMMSS2%100);
    if(MM>60){
        MM=MM-60;
        HH++;
    }
    if(SS>60){
    SS=SS-60;
    MM+=2;
    }
    HHMMSS=HH*10000+MM*100+SS;
    printf("La suma de sus 2 tiempos es %d",HHMMSS);
}