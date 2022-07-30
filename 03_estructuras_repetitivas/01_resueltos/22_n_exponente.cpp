/*
22.	Crear un programa que calcule x^y donde x como y son números enteros positivos. No utilizar la función pow.
*/
#include <iostream>
using namespace std;
int main() {
    int x, y, resultado;
    cout << "Digite la base: ";
    cin >> x;
    cout << "Digite el exponente: ";
    cin >> y;
    resultado = x;
    for (int i = 1; i < y; i++) {
        resultado *= x;
    }
    cout << "El resultado: " << resultado << endl;
    return 0;
}
