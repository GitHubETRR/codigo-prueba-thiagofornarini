
#include <stdio.h>

int main(void){
    float angulo1=0;
    float angulo2=0;
    printf ("Ingrese los valores de los angulos conocidos: \n");
    scanf ("%f %f", &angulo1, &angulo2);
    float angulo3= 180-angulo1-angulo2;
    if (0>angulo1 || 0>angulo2){
        printf("Ingrese angulos positivos porfavor");
        }else{
            if (180>angulo3 && angulo3>0 ){
                printf ("Su angulo es %f", angulo3 );
            }else{
                printf("Ingrese valores de angulos menores a 180");
        }
    }
}