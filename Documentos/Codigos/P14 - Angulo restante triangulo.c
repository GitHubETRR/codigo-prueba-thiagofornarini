
#include <stdio.h>

int main(void){
    float angulo1=0;
    float angulo2=0;
    printf ("Ingrese su angulo 1: ");
    scanf ("%f", &angulo1 );
        if (angulo1<=0){
        printf ("No es el angulo de un triangulo", break) 
        }
    printf ("Ingrese su angulo 2: ");
    scanf ("%f", &angulo2 );
        if (angulo2<=0){
        printf ("No es el angulo de un triangulo", break;) 
        }
    float anguloResultante = 180-angulo1-angulo2;
    printf ("El angulo resultante es %f", anguloResultante);

}