#include <stdio.h>

#define MAX_CHAR 50
#define MAX_PLAYERS 50

typedef struct{
    char nombre[MAX_CHAR];
    int puntos;
    int rebotes;
    int perdidas;
    int robos;
}stats_t

void registrar(stats_t listaJugadores[]);

int main (){
    stats_t listaJugadores [MAX_PLAYERS];
}

void regitrar(stats_t listaJugadores[]){
    for(int i=0;i<MAX_PLAYERS;)
}