/*
5.	Calcular la edad en años de un perro a partir de la edad de una persona.
Análisis:

edad_persona <= 2:
edad_perro = edad_persona * 10.5

edad_persona > 2:
edad_perro = 21 + (edad_persona - 2) * 4
*/
#include <iostream>
using namespace std;
int main() {
    float edad_persona, edad_perro;
    cout << "Ingrese la edad de una persona" << endl;
    cin >> edad_persona;
    if (edad_persona < 0) {
        cout << "Ingrese una edad valida" << endl;
    } else {
        edad_persona <= 2 ? edad_perro = edad_persona* 10.5 : edad_perro = 21 + (edad_persona - 2) * 4;
        cout << "La edad del perro es: " << edad_perro << endl;
    }

    return 0;
}
