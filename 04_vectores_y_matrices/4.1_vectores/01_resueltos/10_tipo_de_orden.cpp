/*
10.	Leer por teclado una serie de 5 números enteros. La aplicación debe indicar si los números están ordenados de forma creciente, decreciente, o si están desordenados.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[5], numero;
    string str_result = "";
    bool ascendente = true, descendente = true;
    cout << "Digite valores para el arreglo" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i << ": ";
        cin >> numero;
        arreglo[i] = numero;
    }
    for (int i = 0; i < 4; i++) {
        if (arreglo[i] < arreglo[i + 1])
            descendente = false;
        if (arreglo[i] > arreglo[i + 1])
            ascendente = false;
    }
    ascendente    ? cout << "ARREGLO ASCENDENTE "
    : descendente ? cout << "ARREGLO DESCENDENTE "
                  : cout << "ARREGLO DESORDENADO " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}
