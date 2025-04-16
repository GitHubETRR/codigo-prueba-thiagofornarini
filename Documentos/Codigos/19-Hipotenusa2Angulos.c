#include <stdio.h>
#include <math.h>

int main(){

    float Cat1, Cat2, Hip;
    printf("Ingrese los 2 catetos conocidos:\n");
    scanf("%f",&Cat1);
    scanf("%f",&Cat2);
    Hip=sqrt(Cat1*Cat1+Cat2*Cat2);
    printf("La hipotenusa de su triangulo es %f", Hip);
}