#include <stdio.h>

int main(void){
    float Cm=0;
    printf("Bienvenido al programa conversor de cm a pies y pulgadas!\n Porfavor, ingrese los cm que desea convertir:");
    scanf("%f",&Cm);
    int Pies=Cm*0.0328;
    float PulgadaRestante=(Cm*0.394)-(Pies*12);
    printf("Su equivalente en pies y pulgadas es %d'%f",Pies,PulgadaRestante);
    
    

}