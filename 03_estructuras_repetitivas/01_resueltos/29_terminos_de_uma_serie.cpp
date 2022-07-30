/*
29.	Diseñar un programa que halle el número de términos necesarios de la serie 1 + 1/2 + 1/3 + 1/4 + ⋯ + 1/n  para rebasar cierto valor positivo que se debe ingresar por teclado.
*/
#include <iostream>
using namespace std;
int main() {
    int i = 1, limite;
    float suma = 0, aux = 0, numerador = 1, n_terminos = 0;
    cout << "Digite un numero: ";
    cin >> limite;
    while (suma <= limite) {
        aux = numerador / i;
        suma += aux;
        i++;
        aux = 0;
        cout << suma << endl;
        n_terminos++;
    }
    cout << "Para rebasar a " << limite << " son ncesarios: " << n_terminos << " terminos" << endl;
    return 0;
}
