/*
4.	Escribir un programa que lea una secuencia de números reales que son ingresados por el usuario y que muestre por pantalla “TERMINADO” cuando la suma de los valores ingresados supere 100.
*/
#include <iostream>
using namespace std;
int main() {
    float numero, suma = 0;
    bool bandera = true;
    while (bandera) {
        cout << "Digite un numero: ";
        cin >> numero;
        suma += numero;
        if (suma > 100) {
            cout << "TERMINADO" << endl;
            cout << "Suma total: " << suma << endl;
            bandera = false;
        }
    }
    return 0;
}
