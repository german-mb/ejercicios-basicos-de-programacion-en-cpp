/*
11.	Crear un programa que lea por teclado un array de 5 números enteros y la desplace una posición: el primero pasa a ser segundo, el segundo pasa a ser tercero y así sucesivamente. El último pasa a ser primero.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[5], numero, aux;
    cout << "\tINGRESE VALORES PARA EL ARREGLO" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i << ": ";
        cin >> numero;
        arreglo[i] = numero;
    }
    cout << "\tARREGLO BASE" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << " ";
    }
    aux = arreglo[4];
    for (int i = 4; i >= 0; i--) {
        i == 0 ? arreglo[i] = aux : arreglo[i] = arreglo[i - 1];
    }
    cout << "\n\tARREGLO CON DESPLAZAMIENTO" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << " ";
    }
    return 0;
}
