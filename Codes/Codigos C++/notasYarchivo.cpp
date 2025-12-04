#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Alumno {
    char nombre[50];
    float nota;
};

void guardarAlumno(){
    Alumno a;
    cout << "Nombre: ";
    cin.ignore();
    cin.getline(a.nombre, 50);
    cout << "Nota: ";
    cin >> a.nota;

    ofstream archivo("alumnos.dat", ios::app | ios::binary);
    if(!archivo){
        cout << "Error al abrir el archivo.\n";
        return;
    }
    archivo.write((char*)&a, sizeof(Alumno));
    archivo.close();
    cout << "Alumno guardado.\n";
}

void mostrarAlumnos(){
    ifstream archivo("alumnos.dat", ios::binary);
    if(!archivo){
        cout << "No hay registros.\n";
        return;
    }
    Alumno a;
    cout << "\n--- LISTA DE ALUMNOS ---\n";
    while(archivo.read((char*)&a, sizeof(Alumno))){
        cout << "Nombre: " << a.nombre << " | Nota: " << a.nota << endl;
    }
    archivo.close();
}

void promedioNotas(){
    ifstream archivo("alumnos.dat", ios::binary);
    if(!archivo){
        cout << "No hay datos.\n";
        return;
    }
    Alumno a;
    float suma = 0;
    int contador = 0;
    while(archivo.read((char*)&a, sizeof(Alumno))){
        suma += a.nota;
        contador++;
    }
    if(contador == 0) cout << "Sin alumnos.\n";
    else cout << "Promedio: " << (suma / contador) << endl;
    archivo.close();
}

void borrarArchivo(){
    ofstream archivo("alumnos.dat", ios::trunc | ios::binary);
    archivo.close();
    cout << "Archivo borrado.\n";
}

int main(){
    int opcion;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Agregar alumno\n";
        cout << "2. Mostrar alumnos\n";
        cout << "3. Promedio general\n";
        cout << "4. Borrar archivo\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                guardarAlumno();
                break;
            case 2:
                mostrarAlumnos();
                break;
            case 3:
                promedioNotas();
                break;
            case 4:
                borrarArchivo();
                break;
            case 0:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida.\n";
        }
    } while(opcion != 0);
    return 0;
}
