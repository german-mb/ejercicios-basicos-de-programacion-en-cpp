/*
12.	Crear un programa que lea por teclado una tabla de N números enteros y desplace K posiciones en el arreglo (N y K es digitado por el usuario).
*/
#include <iostream>
using namespace std;
int main() {
    int dimension, numero, aux, k;
    cout << "DIGITE LA DIMENSION DEL ARREGLO: ";
    cin >> dimension;
    int arreglo[dimension];
    cout << "DIGITE LAS POSICIONES A DESPLAZAR: ";
    cin >> k;
    cout << "INGRESE VALORES PARA EL ARREGLO" << endl;
    for (int i = 0; i < dimension; i++) {
        cout << "Posicion " << i + 1 << ": ";
        cin >> numero;
        arreglo[i] = numero;
    }
    cout << "ARREGLO BASE" << endl;
    for (int i = 0; i < dimension; i++) {
        cout << arreglo[i] << " ";
    }
    k = k % dimension;
    for (; k > 0; --k) {
        aux = arreglo[dimension - 1];
        for (int i = dimension - 1; i >= 0; i--) {
            i == 0 ? arreglo[i] = aux : arreglo[i] = arreglo[i - 1];
        }
    }
    cout << "\nARREGLO CON DESPLAZAMIENTO" << endl;
    for (int i = 0; i < dimension; i++) {
        cout << arreglo[i] << " ";
    }
    return 0;
}
