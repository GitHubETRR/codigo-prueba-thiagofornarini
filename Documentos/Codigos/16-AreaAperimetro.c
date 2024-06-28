#include <stdio.h>
#include <math.h>
int main (){

    float area=0;
    printf("Ingrese el área que del cuadrado que quiera obtener su perimetro:\n");
    scanf("%f", &area);
    float perimetro= sqrt(area)*4;
    printf("Su perimetro es %f", perimetro);
    return 0;
}