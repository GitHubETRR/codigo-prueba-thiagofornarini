#include <stdio.h>

int main(void){
    
    int AñosVividos=0;
    
    printf("Bienvenido! Este programa te dira cuantos dias viviste segun tus años de edad! \n ¿Cuantos años tenes?\n");
    scanf("%d",&AñosVividos);
    float DiasVividos=(AñosVividos*365.25);
    printf("Viviste aproximadamente %f dias", DiasVividos);
}