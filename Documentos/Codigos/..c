#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAM_TXT 50
#define NUM_ASIENTOS 100
#define COSTO_ASIENTO 1000

typedef struct {
    int dia;
    int mes;
    int anio;
} fecha_venta_t;

typedef struct {
    char nombre[TAM_TXT];
    char apellido[TAM_TXT];
    fecha_venta_t fecha_venta;
    bool estado; // Disponible (false), No disponible (true)
} reservas_t;

void inicializarReservas(reservas_t reservas[NUM_ASIENTOS]) {
    for (int i = 0; i < NUM_ASIENTOS; i++) {
        reservas[i].estado = false;
    }
}

void registrarVenta(reservas_t reservas[NUM_ASIENTOS]) {
    int asiento;
    printf("Ingrese el número de asiento (0-99): ");
    scanf("%d", &asiento);

    if (asiento < 0 || asiento >= NUM_ASIENTOS) {
        printf("Número de asiento inválido.\n");
        return;
    }

    if (reservas[asiento].estado) {
        printf("El asiento ya está vendido.\n");
        return;
    }

    printf("Ingrese el nombre del comprador: ");
    scanf("%s", reservas[asiento].nombre);
    printf("Ingrese el apellido del comprador: ");
    scanf("%s", reservas[asiento].apellido);
    printf("Ingrese la fecha de venta (DD MM AAA): ");
    scanf("%d %d %d", &reservas[asiento].fecha_venta.dia, &reservas[asiento].fecha_venta.mes, &reservas[asiento].fecha_venta.anio);

    reservas[asiento].estado = true;
    printf("Venta registrada exitosamente.\n");
}

void mostrarDisponibles(reservas_t reservas[NUM_ASIENTOS]) {
    int disponibles = 0;
    int total_recaudado = 0;

    for (int i = 0; i < NUM_ASIENTOS; i++) {
        if (!reservas[i].estado) {
            disponibles++;
        } else {
            total_recaudado += COSTO_ASIENTO;
        }
    }

    printf("Asientos disponibles: %d\n", disponibles);
    printf("Total recaudado: $%d\n", total_recaudado);

    int opcion;
    printf("¿Desea ver la lista de asientos disponibles? (1 si / 2- no): ");
    scanf(" %d", &opcion);

    if (opcion == '1') {
        printf("Asientos disponibles:\n");
        for (int i = 0; i < NUM_ASIENTOS; i++) {
            if (!reservas[i].estado) {
                printf("Asiento %d\n", i);
            }
        }
    }
}

void consultar(reservas_t reservas[NUM_ASIENTOS]) {
    int opcion;
    printf("Seleccione una opción:\n");
    printf("1- Consultar por asiento\n");
    printf("2- Consultar por apellido\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        int asiento;
        printf("Ingrese el número de asiento: ");
        scanf("%d", &asiento);

        if (asiento < 0 || asiento >= NUM_ASIENTOS) {
            printf("Numero de asiento inválido.\n");
            return;
        }

        if (reservas[asiento].estado) {
            printf("El asiento %d está vendido.\n", asiento);
            printf("Comprador: %s %s\n", reservas[asiento].nombre, reservas[asiento].apellido);
            printf("Fecha de venta: %02d/%02d/%04d\n", reservas[asiento].fecha_venta.dia, reservas[asiento].fecha_venta.mes, reservas[asiento].fecha_venta.anio);
        } else {
            printf("El asiento %d está disponible.\n", asiento);
        }
    } else if (opcion == 2) {
        char apellido[TAM_TXT];
        printf("Ingrese el apellido: ");
        scanf("%s", apellido);

        int vendidos = 0;
        for (int i = 0; i < NUM_ASIENTOS; i++) {
            if (reservas[i].estado && strcmp(reservas[i].apellido, apellido) == 0) {
                vendidos++;
            }
        }
        printf("Cantidad de asientos vendidos a compradores con apellido '%s': %d\n", apellido, vendidos);
    } else {
        printf("Opción inválida.\n");
    }
}

void cerrarVentas(reservas_t reservas[NUM_ASIENTOS]) {
    int total_recaudado = 0;
    int vendidos = 0;

    for (int i = 0; i < NUM_ASIENTOS; i++) {
        if (reservas[i].estado) {
            vendidos++;
            total_recaudado += COSTO_ASIENTO;
        }
        reservas[i].estado = false;
    }

    printf("Total recaudado: $%d\n", total_recaudado);
    printf("Porcentaje de ocupación: %.2f%%\n", (vendidos / (float)NUM_ASIENTOS) * 100);
    printf("Todas las ventas han sido cerradas y los asientos están disponibles nuevamente.\n");
}

int main() {
    reservas_t reservas[NUM_ASIENTOS];
    inicializarReservas(reservas);

    int opcion;
    do {
        printf("\n------ Menú ------\n");
        printf("1. Registrar venta\n");
        printf("2. Mostrar asientos disponibles\n");
        printf("3. Consultar\n");
        printf("4. Cerrar ventas\n");
        printf("5. Salir\n");
        printf("-------------------\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrarVenta(reservas);
                break;
            case 2:
                mostrarDisponibles(reservas);
                break;
            case 3:
                consultar(reservas);
                break;
            case 4:
                cerrarVentas(reservas);
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 5);

    return 0;
}