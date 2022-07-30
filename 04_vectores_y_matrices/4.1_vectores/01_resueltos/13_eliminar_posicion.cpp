/*
13.	Leer por teclado una tabla de 10 elementos numéricos enteros y una posición (entre 0 y 9).  Eliminar el elemento situado en la posición dada sin dejar huecos. Mostrar el elemento eliminado y el nuevo arreglo.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[5], numero, eliminar = 0;
    cout << "Digite valores para el arreglo" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i << ": ";
        cin >> arreglo[i];
    }
    cout << "Arreglo base" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\nDigite un numero entre 0 - 4: ";
    cin >> eliminar;
    numero = arreglo[eliminar];
    for (int i = eliminar; i < 5 - 1; i++) {
        arreglo[i] = arreglo[i + 1];
    }
    cout << "Valor eliminado: " << numero << endl;
    cout << "Arreglo despues de eliminar la posicion " << eliminar << endl;
    for (int i = 0; i < 5 - 1; i++) {
        cout << arreglo[i] << " ";
    }
    return 0;
}
