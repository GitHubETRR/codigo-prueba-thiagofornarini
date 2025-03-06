
#include <stdio.h>

int main(void){
    float angulo1=0;
    float angulo2=0;
    float angulo3=0;
    int apagado=0;
    do{
    printf ("Ingrese los valores de los angulos conocidos: \n");
    scanf ("%f %f", &angulo1, &angulo2);
    float angulo3= 180-angulo1-angulo2;
    if (0>angulo1 || 0>angulo2){
        printf("Ingrese angulos positivos porfavor\n");
        }else{
            if (180>angulo3 && angulo3>0 ){
                printf ("Su angulo es %f\n", angulo3 );
            }else{
                printf("Ingrese valores de angulos menores a 180\n");
            }
        }
    printf("¿Queres volver a ejecutar el codigo?, 1(si) - Cualquier otro valor(no)\n");
    scanf("%i", &apagado);
    }
    
    while(apagado==1);
}