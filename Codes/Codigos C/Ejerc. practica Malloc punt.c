#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, suma = 0;

    printf("Cuantos numeros quieres escribir?\n");
    scanf("%d",&n);

    int *numeros = (int *)malloc (n*sizeof(int));

    if (numeros==NULL){
        printf("No se asignó correctamente el espacio en memoria");
        return 1;
    }
    for(i=0;i<n;i++){
        printf("Ingrese el numero %d", i+1);
        scanf("%d", &nuemros[i]);
        suma+=numeros[i];
    }

    printf("La suma es %d", suma);

    free(numeros);
}