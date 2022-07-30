/*
2.	Crear un programa que lea 10 números enteros por teclado, guardar en un arreglo y determine el mayor elemento.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[10], mayor, numero;
    for (int i = 0; i < 10; i++) {
        cout << "Posicion " << i << ": ";
        cin >> numero;
        arreglo[i] = numero;
    }
    mayor = arreglo[0];
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << " ";
        if (arreglo[i] > mayor) mayor = arreglo[i];
    }
    cout << "\nEl numero mayor es: " << mayor << endl;
    return 0;
}
