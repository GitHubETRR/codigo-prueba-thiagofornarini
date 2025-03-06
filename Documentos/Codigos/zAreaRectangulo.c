
#include <stdio.h>

int main(void)
{
    float height= 0;
    float base= 0;
    printf("Ingrese la altura del cuadrado:");
    scanf("%f", &height);
    printf("Ingrese la base del cuadrado:");
    scanf("%f", &base);
    float area= base*height;
    printf("El area de su cuadrado es: %f", area);
    return 0;
}
