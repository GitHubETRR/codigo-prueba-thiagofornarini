#include <stdio.h>
#define N 5


void rellenar(int*arr);
void mostrar(int*arr);

int main(){
    
    int gero[N];
    rellenar(gero);
    mostrar(gero);

    return 0;
}

void rellenar(int*arr){
    
    for(int i=0;i<N;i++){
        printf("Ingrse el valor al vector");
        scanf("%d", &arr[i]);
    }
}


void mostrar(int*arr){
    for(int i=0;i<N;i++){
        printf("%d", arr[i]);
    }
}