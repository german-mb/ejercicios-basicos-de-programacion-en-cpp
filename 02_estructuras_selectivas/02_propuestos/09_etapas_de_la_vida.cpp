/*
9.	Crear un programa que al ingresar una edad muestre a la etapa de la vida que pertenece:
    •	Infancia 0 a 5 años,
    •	Niñez 6 a 12 años,
    •	Adolescente 13 a 18 años,
    •	Juventud 19 a 25 años,
    •	Adultez 26 a 60 años y
    •	Ancianidad 60 años en adelante

*/
#include <iostream>
using namespace std;
int main() {
    int edad;
    cout << "Ingrese una edad: ";
    cin >> edad;
    edad >= 0 && edad <= 5
        ? cout << "INFANCIA"
    : edad >= 6 && edad <= 12
        ? cout << "NINEZ"
    : edad >= 13 && edad <= 18
        ? cout << "ADOLESCENTE"
    : edad >= 19 && edad <= 25
        ? cout << "JUVENTUD"
    : edad >= 26 && edad <= 60
        ? cout << "ADULTEZ"
    : edad >= 60
        ? cout << "ANCIANIDAD"
        : cout << "EDAD NO VALIDA";
    return 0;
}
