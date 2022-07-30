/*
1.	Crear un programa que permita al usuario ingresar valores por teclado a un arreglo de n posiciones, luego el programa debe verificar si existen datos repetidos, y si existe debe reemplazar por un 0 a dichos valores.
*/
#include <iostream>
using namespace std;
int main() {
    int dimension;
    cout << "Digite la dimension del arreglo: ";
    cin >> dimension;
    int arreglo[dimension];
    bool igual = false;
    for (int i = 0; i < dimension; i++) {
        cout << "Posicion " << i << ": ";
        cin >> arreglo[i];
    }
    cout << "\nARREGLO BASE" << endl;
    for (int i = 0; i < dimension; i++) cout << arreglo[i] << " ";

    for (int i = 0; i < dimension - 1; i++) {
        for (int j = i + 1; j < dimension; j++) {
            if (arreglo[i] == 0) {
                break;
            } else if (arreglo[i] == arreglo[j]) {
                arreglo[j] = 0;
                igual = true;
            }
        }
        if (igual) {
            arreglo[i] = 0;
            igual = false;
        }
    }

    cout << "\nARREGLO RESULTANTE" << endl;
    for (int i = 0; i < dimension; i++) cout << arreglo[i] << " ";
    return 0;
}
