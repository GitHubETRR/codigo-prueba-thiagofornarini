#include <stdio.h>

#define N 5

void recorre_matriz(int matriz[N][N]);
void mostrar_matriz(int matriz[N][N]);

int main(){
    
    int matriz [N][N];
    recorre_matriz(matriz);
    mostrar_matriz(matriz);
}

void recorre_matriz(int matriz[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("Ingrese el numero que desea meter \n");
            scanf("%d", &matriz [i][j]);
        }
    }
}

void mostrar_matriz (int matriz[N][N]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%2d", matriz[i][j]);
        }printf("\n");
    }
}