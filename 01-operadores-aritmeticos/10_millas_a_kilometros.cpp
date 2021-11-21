/*
10.	Realice un programa que convierta millas a kilómetros. Se sabe que una milla equivale a 1.609344 kilómetros.
*/

#include <iostream>
using namespace std;
int main()
{
    float millas, kilometros;
    cout << "Ingrese las millas a convertir ";
    cin >> millas;
    kilometros = millas * 1.609344;
    cout << "Kilometros equivalentes: " << kilometros << endl;
    return 0;
}
