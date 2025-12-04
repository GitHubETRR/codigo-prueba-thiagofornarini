#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Campeon{
protected:
    string nombre;
public:
    Campeon(string nom){ nombre = nom; }
    virtual void accion(){
        cout << nombre << " Objetivos: farmear y ganar la linea" << endl;
    }
    virtual string getRol(){ return "Campeon"; }
    string getNombre(){ return nombre; }
    virtual ~Campeon(){}
};

class Top : public Campeon{
public:
    Top(string nom) : Campeon(nom){}
    void accion() override{
        cout << nombre << " farmea en TOP Line, es tanque y hace buen daño" << endl;
    }
    string getRol() override{ return "Top"; }
};

class Mid : public Campeon{
public:
    Mid(string nom) : Campeon(nom){}
    void accion() override{
        cout << nombre << " farmea en MID line, normalmente mago con buen daño pero bajo HP" << endl;
    }
    string getRol() override{ return "Mid"; }
};

class Bot : public Campeon{
public:
    Bot(string nom) : Campeon(nom){}
    void accion() override{
        cout << nombre << " farmea en BOT line y hace mucho daño pero con poco HP" << endl;
    }
    string getRol() override{ return "Bot"; }
};

void mostrarMenu(){
    cout << "\n=== Menu de Juego ===" << endl;
    cout << "1. Agregar Top" << endl;
    cout << "2. Agregar Mid" << endl;
    cout << "3. Agregar Bot" << endl;
    cout << "4. Mostrar Campeones" << endl;
    cout << "5. Acciones en partida" << endl;
    cout << "6. Salir" << endl;
    cout << "Opcion: ";
}

int main(){
    vector<Campeon*> equipo;
    int opcion;
    string nombre;
    cin.ignore(); // Limpia el buffer antes de usar getline

    do{
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpia buffer antes de leer el nombre

        switch(opcion){
            case 1:
                cout << "Nombre del Top: ";
                getline(cin, nombre);
                equipo.push_back(new Top(nombre));
                break;
            case 2:
                cout << "Nombre del Mid: ";
                getline(cin, nombre);
                equipo.push_back(new Mid(nombre));
                break;
            case 3:
                cout << "Nombre del Bot: ";
                getline(cin, nombre);
                equipo.push_back(new Bot(nombre));
                break;
            case 4:
                cout << "\n=== Lista de Campeones ===" << endl;
                for(size_t i = 0; i < equipo.size(); i++){
                    cout << i + 1 << ". " << equipo[i]->getRol()
                         << ": " << equipo[i]->getNombre() << endl;
                }
                break;
            case 5:
                cout << "\n=== Acciones en Partida ===" << endl;
                for(size_t i = 0; i < equipo.size(); i++){
                    equipo[i]->accion();
                }
                break;
            case 6:
                cout << "Saliendo del juego..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }

    }while(opcion != 6);

    for(Campeon* c : equipo) delete c;
    return 0;
}
