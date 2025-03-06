#include <stdio.h>

int main(){
    float Medida1, Medida2;
    printf("Ingrese las medidas de su rectangulo \n Medida 1 y 2:\n");
    scanf("%f",&Medida1);
    scanf("%f",&Medida2);
    float Area=Medida1*Medida2;
    float Perimetro=Medida1*2+Medida2*2;
    printf("Su area es %f y su perimetro es %f",Area,Perimetro);
    return 0;
}