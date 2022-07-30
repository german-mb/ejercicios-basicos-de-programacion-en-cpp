/*
14.	En un arreglo de 20 posiciones, ingresar por teclado un número N y buscar en el arreglo. Se debe mostrar la posición en que se encuentra. Sino está, indicarlo con un mensaje.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {2, 56, 3, 6, 7, 9, 12, 45, 8, 90, 4, 59, 1200, 88, 77, 50, 1, -3, 99, 0}, numero, pos = -1;
    cout << "Digita un numero para buscar: ";
    cin >> numero;
    for (int i = 0; i < 20; i++) {
        if (arreglo[i] == numero) {
            pos = i;
            break;
        }
    }
    pos == -1 ? cout << "No se encontro el valor buscado"
              : cout << "El valor se encuentra en la posicion " << pos << " del arreglo" << endl;
    for (int i = 0; i < 20; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}
