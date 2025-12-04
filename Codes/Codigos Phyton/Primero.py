class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def mostrar(self):
        print(f"Nombre: {self.nombre}")
        print(f"Edad  : {self.edad}")


class Estudiante(Persona):
    def __init__(self, nombre, edad, curso):
        super().__init__(nombre, edad)
        self.curso = curso

    def mostrar(self):
        super().mostrar()
        print(f"Curso : {self.curso}")


p1 = Persona("Thiago", 17)
p1.mostrar()

p2 = Persona("Agustin", 18)
p2.mostrar()

e1 = Estudiante("Thiago", 17, "Programación")
e1.mostrar()
