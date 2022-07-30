/*
3.	Ordenamiento por inserción
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {-18, 1, 120, 3, 4, 1, 6, 11, -10, 23};
    int dimen = sizeof(arreglo) / sizeof(*arreglo);
    int pos, aux;
    for (int i = 0; i < dimen; i++) cout << arreglo[i] << " ";
    cout << endl;
    for (int i = 0; i < dimen; i++) {
        pos = i;
        aux = arreglo[i];
        while ((pos > 0) && (arreglo[pos - 1] > aux)) {
            arreglo[pos] = arreglo[pos - 1];
            pos--;
        }
        arreglo[pos] = aux;
    }
    cout << "ASCENDENTE" << endl;
    for (int i = 0; i < dimen; i++)
        cout << arreglo[i] << " ";
    cout << "\nDESCENDENTE" << endl;
    for (int i = dimen - 1; i >= 0; i--)
        cout << arreglo[i] << " ";
    return 0;
}
