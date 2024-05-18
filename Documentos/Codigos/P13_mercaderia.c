
#include <stdio.h>

int main(void)
{
    float mercaderia= 0;
    float precio= 0;
    printf ("Ingrese los kilos de mercaderi que desee comprar y su valor por kg:");
    scanf("%f, \n", &mercaderia );
    scanf("%f", &precio );
    float total = mercaderia * precio ;
    printf("El total a pagar es: %f", total);


}

