/*
3.	Realizar un programa que lea 10 números enteros por teclado, guardar en un array. Calcular y mostrar la media de los números que estén en las posiciones pares del array.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[10], numero;
    float suma;
    for (int i = 0; i < 10; i++) {
        cout << "Posicion " << i << ": ";
        cin >> numero;
        arreglo[i] = numero;
    }
    cout << "Valores en las posiciones pares: ";
    for (int i = 0; i < 10; i += 2) {
        cout << arreglo[i] << " ";
        suma += arreglo[i];
    }
    cout << "\nLa media es: " << suma / 5 << endl;
    return 0;
}
