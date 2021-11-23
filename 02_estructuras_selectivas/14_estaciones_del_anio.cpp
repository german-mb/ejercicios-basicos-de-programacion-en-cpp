/*
14.	Desarrolla un programa que de acuerdo a la fecha que capture te devuelva en que estación del año está la fecha ingresada.
*/
#include <iostream>
using namespace std;
int main()
{
    int dia, mes;
    string estacion = "Sin Estacion";
    cout << "Digite el dia entre 1 - 30 ";
    cin >> dia;
    cout << "Digite los meses entre 1 - 12 ";
    cin >> mes;
    if (dia >= 21 && mes >= 3 || dia < 21 && mes <= 6) {
        estacion = "Otonio";
    }
    cout << "La fecha ingresada correspomde a: " << estacion << endl;
    return 0;
}
