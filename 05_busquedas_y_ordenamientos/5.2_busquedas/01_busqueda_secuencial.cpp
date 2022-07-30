/*
1.	Búsqueda secuencial
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {4, 56, -1, 6, 3, -10, 3, 9, 1, 2, 4};
    int dimen = sizeof(arreglo) / sizeof(*arreglo), buscar, i;
    cout << "Digite el numero a buscar: ";
    cin >> buscar;
    bool encontrado = false;
    for (i = 0; i < dimen && encontrado == false; i++) {
        if (arreglo[i] == buscar) encontrado = true;
    }
    encontrado
        ? cout << "Numero encontrado en la posicion: " << i - 1
        : cout << "No fue encontrado el numero: " << buscar << endl;
    return 0;
}
