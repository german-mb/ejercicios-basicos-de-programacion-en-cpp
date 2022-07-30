/*
5.	Crear un programa que devuelva el número de elementos positivos, negativos y ceros en un array de 10 enteros.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[10], numero, positivos = 0, negativos = 0, ceros = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Posicion " << i << ": ";
        cin >> numero;
        arreglo[i] = numero;
        if (arreglo[i] < 0) negativos++;
        if (arreglo[i] > 0) positivos++;
        if (arreglo[i] == 0) ceros++;
    }
    cout << "\nNegativos: " << negativos << endl;
    cout << "Positivos: " << positivos << endl;
    cout << "Ceros: " << ceros << endl;
    return 0;
}
