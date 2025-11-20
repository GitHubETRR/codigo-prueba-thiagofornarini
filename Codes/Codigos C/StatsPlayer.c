#include <stdio.h>

#define MAX_CHAR 50
#define MAX_PLAYERS 3

typedef struct {
    char nombre[MAX_CHAR];
    int puntos;
    int rebotes;
    int perdidas;
    int robos;
} stats_t;

void registrar(stats_t listaJugadores[]);
void mostrar(stats_t listaJugadores[]);

int main() {
    stats_t listaJugadores[MAX_PLAYERS];
    registrar(listaJugadores);
    mostrar(listaJugadores);
    return 0;
}

void registrar(stats_t listaJugadores[]) {
    for (int i = 0; i < MAX_PLAYERS; i++) {
        printf("\nIngrese el nombre del jugador:\n");
        scanf("%s", listaJugadores[i].nombre); 
        
        printf("Ingrese los puntos del jugador en el partido:\n");
        scanf("%d", &listaJugadores[i].puntos);

        printf("Ingrese los rebotes del jugador en el partido:\n");
        scanf("%d", &listaJugadores[i].rebotes);
        
        printf("Ingrese las pérdidas del jugador en el partido:\n");
        scanf("%d", &listaJugadores[i].perdidas);
        
        printf("Ingrese los robos del jugador en el partido:\n");
        scanf("%d", &listaJugadores[i].robos);
    }
}

void mostrar(stats_t listaJugadores[]){
    int jugador;
    printf("¿De qué jugador querés ver las stats? (1-%d):\n", MAX_PLAYERS);
    scanf("%d", &jugador);

    if (jugador < 1 || jugador > MAX_PLAYERS) {
        printf("Número inválido, debe ser entre 1 y %d.\n", MAX_PLAYERS);
        return;
    }


    printf("\nEstadísticas del jugador %d:\n", jugador + 1);
    printf("Nombre: %s\n", listaJugadores[jugador].nombre);
    printf("Puntos: %d\n", listaJugadores[jugador].puntos);
    printf("Rebotes: %d\n", listaJugadores[jugador].rebotes);
    printf("Perdidas: %d\n", listaJugadores[jugador].perdidas);
    printf("Robos: %d\n", listaJugadores[jugador].robos);
}
