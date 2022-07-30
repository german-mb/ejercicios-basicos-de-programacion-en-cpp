/*
25.	Escribir un algoritmo que invierta los dígitos de un número positivo entero. Usar operadores módulo y división para ir obteniendo los dígitos uno a uno. Por ejemplo, si se ingresa 37368 debe retornar el número 86373.
*/
#include <iostream>
using namespace std;
int main() {
    int numero, nuevo_numero = 0;
    cout << "Digite un numero: ";
    cin >> numero;
    while (numero > 0) {
        nuevo_numero = nuevo_numero * 10 + (numero % 10);
        numero = numero / 10;
    }
    cout << "Numero invertido: " << nuevo_numero << endl;
    return 0;
}
