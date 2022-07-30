/*
6.	Desarrolle un programa para determinar si un año leído por teclado es o no bisiesto.
*/
#include <iostream>
using namespace std;
int main() {
    int anio;
    cout << "Ingrese anio: ";
    cin >> anio;
    if ((anio % 400 == 0) or (anio % 4 == 0) and (anio % 100 != 0)) {
        cout << "El anio es BISIESTO" << endl;
    } else {
        cout << "El anio NO es BISIESTO" << endl;
    }

    return 0;
}
