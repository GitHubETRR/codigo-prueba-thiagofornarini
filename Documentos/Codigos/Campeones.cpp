#include <iostream>
#include <vector>
using namespace std;

#define AGREGAR 1
#define MOSTRAR 2
#define SALIR 3

class Campeon
{
private:
    string nombre;
    int hp;
    int ataque;
    int defensa;
public:    
    void get_datos(string& n2, int& hp2, int& atk2, int& def2);

    void set_datos(string n1, int hp1, int atk1, int def1);

    void cargar();

    void mostrar();
};

void menu();

int main(){
    menu();
    return 0;
}

void Campeon :: get_datos(string& n2, int& hp2, int& atk2, int& def2){
    n2 = nombre ;
    hp2 = hp ; 
    atk2 = ataque ;
    def2 = defensa ;
}

void Campeon :: set_datos(string n1, int hp1, int atk1, int def1){
    nombre = n1;
    hp = hp1; 
    ataque = atk1;
    defensa = def1;
}

void Campeon :: cargar(){
    string n_in;
    int hp_in, atk_in, def_in;

    cout << "Nombre del campeon: ";
    cin.ignore();
    getline(cin, n_in); 

    cout << "HP: ";
    cin >> hp_in;

    cout << "Ataque: ";
    cin >> atk_in;

    cout << "Defensa: ";
    cin >> def_in;

    set_datos(n_in, hp_in, atk_in, def_in); 
}

void Campeon :: mostrar(){
    string n_out;
    int hp_out, atk_out, def_out;

    get_datos(n_out, hp_out, atk_out, def_out );

    cout << "Nombre: " << n_out << endl;
    cout << "HP: " << hp_out << endl;
    cout << "Ataque: " << atk_out << endl;    
    cout << "Defensa: " << def_out << endl;    
}

void menu(){
    Campeon c1;
    int opcion;
    vector<Campeon>lista;
    do
    {
        cout << "------MENU-----\n";
        cout << "1. Agregar campeon\n";
        cout << "2. Mostrar campeones\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
            switch (opcion)
    {
        case AGREGAR:
            c1.cargar();
            lista.push_back(c1);
            break;
        case MOSTRAR:
            for (int i = 0; i < lista.size(); i++)
            {
                lista[i].mostrar();
            }
                break;
        case SALIR:
            cout << "Saliendo...";
            break;
        default :
            cout << "Esta opcion no es valida";         
            break;
    }
    } while (opcion != SALIR);
}
