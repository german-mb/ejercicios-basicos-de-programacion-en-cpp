/*
16.	Ingrese N dólares para Javier. Luis tiene la mitad de lo que posee Javier. Juan tiene la mitad de lo que poseen Luis y Javier juntos. Hacer un programa que calcule e imprima la cantidad de dinero que tienen entre los tres.
Javier = 1000
Luis   = 1000/2
Juan   = (1000 + 500)/2
Resultado = 1000 + 500 + 750

*/
#include <iostream>
using namespace std;
int main() {
    float dls_javier, dls_luis, dls_juan, dls_total = 0;
    cout << "Ingrese el monto que tiene Javier: ";
    cin >> dls_javier;
    dls_luis = dls_javier / 2;
    dls_juan = (dls_javier + dls_luis) / 2;
    dls_total = dls_javier + dls_luis + dls_juan;
    cout << "Javier: $" << dls_javier << endl;
    cout << "Luis: $" << dls_luis << endl;
    cout << "Juan: $" << dls_juan << endl;
    cout << "Suma total: $" << dls_total << endl;
    return 0;
}
