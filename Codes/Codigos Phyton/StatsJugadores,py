MAX_PLAYERS = 3

def registrar():
    jugadores = []
    for i in range(MAX_PLAYERS):
        print(f"\n--- Jugador {i+1} ---")
        nombre = input("Nombre del jugador: ")
        puntos = int(input("Puntos en el partido: "))
        rebotes = int(input("Rebotes en el partido: "))
        perdidas = int(input("Pérdidas en el partido: "))
        robos = int(input("Robos en el partido: "))
        jugador = {"nombre": nombre, "puntos": puntos, "rebotes": rebotes, "perdidas": perdidas, "robos": robos}
        jugadores.append(jugador)
    return jugadores

def mostrar(jugadores):
    try:
        jugador = int(input(f"\n¿De qué jugador querés ver las stats? (1-{MAX_PLAYERS}): "))
        if jugador < 1 or jugador > MAX_PLAYERS:
            print("Número inválido.")
            return
        j = jugadores[jugador - 1]
        print(f"\n--- Estadísticas del jugador {jugador} ---")
        print(f"Nombre: {j['nombre']}")
        print(f"Puntos: {j['puntos']}")
        print(f"Rebotes: {j['rebotes']}")
        print(f"Pérdidas: {j['perdidas']}")
        print(f"Robos: {j['robos']}")
    except ValueError:
        print("Ingresá un número válido.")

def main():
    jugadores = registrar()
    mostrar(jugadores)

if __name__ == "__main__":
    main()
