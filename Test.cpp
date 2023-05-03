#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
};


int main(){

    enum dia_semana {Lunes, Martes, Miercoles, Jueves, Viernes};

    dia_semana examenFisica = Lunes;

    string gato = "Murcy";

    cout << gato << endl;
    cout << examenFisica << " " << (char) examenFisica << endl;

    return 0;
}