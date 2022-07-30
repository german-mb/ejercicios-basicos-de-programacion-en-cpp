/*
3.	Dado el sueldo de un trabajador, aplique un aumento del 15% si su sueldo es inferior a $1000. Imprima el sueldo que percibirá.
*/
#include <iostream>
using namespace std;
int main() {
    float sueldo;
    cout << "Digite el monto del salario: ";
    cin >> sueldo;
    if (sueldo < 1000) {
        sueldo = sueldo + sueldo * .15;
    }
    cout << "El salario es: " << sueldo << endl;
    return 0;
}
