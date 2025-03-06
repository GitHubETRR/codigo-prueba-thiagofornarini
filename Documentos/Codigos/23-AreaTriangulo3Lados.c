/*23.	Desarrollar un algoritmo que permita calcular el área de un triángulo en función de las longitudes
de sus lados previamente leídos desde el teclado.*/

#include <stdio.h>
#include <math.h>

int main(){

    float cat1,cat2,cat3,area,semiP;

    printf("Porfavor, ingresá los lados 3 de tu angulo.\n");
    scanf("%f,%f,%f", &cat1,&cat2,&cat3);
    semiP=(cat1+cat2+cat3)/2;
    area=sqrt((semiP-cat1)*(semiP-cat2)*(semiP-cat3));
    printf("El area de su triangulo es %f",area);
}