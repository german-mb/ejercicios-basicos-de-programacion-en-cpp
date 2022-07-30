/*
2.	Ordenamiento por selección
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {0, 1, 234, 3, -2, 5, 28, 11, -10, 23};
    int dimen = sizeof(arreglo) / sizeof(*arreglo);
    int min, aux;
    for (int i = 0; i < dimen; i++)
        cout << arreglo[i] << " ";
    cout << endl;
    for (int i = 0; i < dimen; i++) {
        min = i;
        for (int j = i + 1; j < dimen; j++) {
            if (arreglo[j] < arreglo[min]) min = j;
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }
    cout << "ASCENDENTE" << endl;
    for (int i = 0; i < dimen; i++)
        cout << arreglo[i] << " ";
    cout << "\nDESCENDENTE" << endl;
    for (int i = dimen - 1; i >= 0; i--)
        cout << arreglo[i] << " ";
    return 0;
}
