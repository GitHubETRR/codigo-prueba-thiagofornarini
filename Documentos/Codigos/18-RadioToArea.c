#include <stdio.h>

int main (){
    float radio;
    float area;
    const pi=3.1415;

    printf("Porfavor ingrese el radio de su circunferencia:\n");
    scanf("%f", &radio);
    area=pi*radio*radio;
    printf("El area de su circulo es %f", area);
}