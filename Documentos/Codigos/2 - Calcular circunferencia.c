
#include <stdio.h>

int main(void)
{
    float radio= 0;
    const float pi=3.1415;
    printf("Ingrese el radio del circulo:");
    scanf("%f", &radio);
    float circunferencia= pi*radio;
    printf("La circunferencia de su circulo es: %f", circunferencia);
}
