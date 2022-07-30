/*
1.	Escribir un programa que pida al usuario un número entero y muestre por pantalla si es para o impar.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    numero % 2 == 0 ? cout << "Numero PAR" : cout << "Numero IMPAR" << endl;
    return 0;
}
