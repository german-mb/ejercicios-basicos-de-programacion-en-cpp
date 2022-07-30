/*
1.	Ordenamiento burbuja
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {0, 1, 2, 3, 4, 5, 6, 11, -10, 23};
    int dimen = sizeof(arreglo) / sizeof(*arreglo), aux;
    bool ordenado = false;
    for (int i = 0; i < dimen; i++)
        cout << arreglo[i] << " ";
    cout << endl;
    for (int i = 0; i < dimen; i++) {
        for (int j = 0; j < dimen - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    cout << "ASCENDENTE" << endl;
    for (int i = 0; i < dimen; i++)
        cout << arreglo[i] << " ";
    cout << "\nDESCENDENTE" << endl;
    for (int i = dimen - 1; i >= 0; i--)
        cout << arreglo[i] << " ";
    return 0;
}
