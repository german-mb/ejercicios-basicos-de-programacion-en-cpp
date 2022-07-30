/*
9.	Leer por teclado dos arreglos de 5 números enteros y mezclarlas en una tercera de la forma: el 1 de A, el 1 de B, el 2 de A, el 2 de B, etc.
*/
#include <iostream>
using namespace std;
int main() {
    int arregloA[5], arregloB[5], arregloC[10], numero, posA = 0, posB = 0;
    cout << "Ingrese valores para arreglo A" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i + 1 << ": ";
        cin >> numero;
        arregloA[i] = numero;
    }
    cout << "Ingrese valores para arreglo B" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i + 1 << ": ";
        cin >> numero;
        arregloB[i] = numero;
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            arregloC[i] = arregloA[posA];
            posA++;
        } else {
            arregloC[i] = arregloB[posB];
            posB++;
        }
    }
    cout << "\tARREGLO C" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arregloC[i] << " ";
    }
    return 0;
}
