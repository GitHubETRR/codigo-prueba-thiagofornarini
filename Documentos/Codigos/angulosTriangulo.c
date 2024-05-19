
#include <stdio.h>

int main(void){
    float angulo1=0;
    float angulo2=0;
    printf ("Ingrese los valores de los angulos conocidos: \n");
    scanf ("%f", &angulo1);
    if(angulo1<=0){
        do{
        printf("El angulo ingresado no es valido, porfavor ingrese uno que lo sea");
        scanf ("%f", &angulo1);
    } while (angulo1<= 0 || angulo1>= 180);
    }
    return 0;
}
