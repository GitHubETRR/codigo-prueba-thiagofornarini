#include <iostream>
using namespace std;

class Vehiculo{
public:
    virtual void mover(){
        cout << "El vehiculo se mueve" << endl;
    }
    virtual ~Vehiculo(){}
};

class Auto : public Vehiculo{
public:
    void mover() override{
        cout << "El auto se mueve sobre 4 ruedas" << endl;
    }
};

class Moto : public Vehiculo{
public:
    void mover() override{
        cout << "La moto se mueve sobre 2 ruedas" << endl;
    }
};

class Bicicleta : public Vehiculo{
public:
    void mover() override{
        cout << "La bicicleta se mueve con pedales" << endl;
    }
};

int main(){
    Vehiculo* v1 = new Auto();
    Vehiculo* v2 = new Moto();
    Vehiculo* v3 = new Bicicleta();

    cout << " Movimiento de Vehiculos " << endl;
    v1->mover();
    v2->mover();
    v3->mover();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}
