/*
8.	Realizar un programa que pida ingresar el nombre de un mes, luego mostrar el número de días que tiene dicho mes.
*/
#include <string.h>

#include <iostream>
using namespace std;
int main() {
    char nmes[50];
    cout << "Ingrese el nombre de un mes: ";
    cin >> nmes;
    strlwr(nmes);
    string mes = nmes;
    (mes == "abril" || mes == "junio" || mes == "septiembre" || mes == "noviembre")
        ? cout << strupr(nmes) << " tiene 30 dias"
    : (mes == "enero" || mes == "marzo" || mes == "mayo" || mes == "julio" || mes == "agosto" || mes == "octubre" || mes == "diciembre")
        ? cout << strupr(nmes) << " tiene 31 dias"
    : (mes == "febrero")
        ? cout << strupr(nmes) << " tiene 28 dias" << endl
        : cout << strupr(nmes) << " NO ES UN MES VALIDO" << endl;

    return 0;
}
