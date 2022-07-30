/*
2.	Búsqueda binaria
El arreglo debe estar ordenado de manera ascendente
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 18};
    int dimen = sizeof(arreglo) / sizeof(*arreglo), buscar, inferior, superior, mitad;
    bool encontrado = false;
    cout << "Digite el numero a buscar: ";
    cin >> buscar;
    inferior = 0;
    superior = dimen - 1;
    while (inferior <= superior) {
        mitad = (inferior + superior) / 2;
        if (arreglo[mitad] == buscar) {
            encontrado = true;
            break;
        }
        if (arreglo[mitad] > buscar) {
            superior = mitad - 1;
            mitad = (inferior + superior) / 2;
        }
        if (arreglo[mitad] < buscar) {
            inferior = mitad + 1;
            mitad = (inferior + superior) / 2;
        }
    }
    encontrado
        ? cout << "Numero encontrado en la posicion: " << mitad
        : cout << "No fue encontrado el numero buscado" << endl;
    return 0;
}
