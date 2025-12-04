personas = {}

n = int(input("Cuántas personas querés registrar?: "))

for i in range(n):
    print(f"\nPersona {i+1}")
    nombre = input("Nombre: ")
    edad = int(input("Edad: "))
    dni = input("DNI: ")
    estado_civil = input("Estado civil: ")
    datos = (nombre, edad, dni, estado_civil)
    personas[dni] = datos

print("\nLista de personas registradas:")
for dni, datos in personas.items():
    print("\n---")
    print("DNI:", datos[2])
    print("Nombre:", datos[0])
    print("Edad:", datos[1])
    print("Estado civil:", datos[3])

dni_buscar = input("\nIngresá un DNI para ver los datos: ")

if dni_buscar in personas:
    datos = personas[dni_buscar]
    print("\nDatos de la persona:")
    print("DNI:", datos[2])
    print("Nombre:", datos[0])
    print("Edad:", datos[1])
    print("Estado civil:", datos[3])
else:
    print("No se encontró ese DNI.")
