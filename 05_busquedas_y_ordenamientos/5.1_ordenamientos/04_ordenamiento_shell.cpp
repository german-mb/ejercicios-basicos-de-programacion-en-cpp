/*
4.	Ordenamiento shell.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {5, 1, 55, 3, 4, 90, 6, 11, -10, -2};
    int dimen = sizeof(arreglo) / sizeof(*arreglo);
    int salto, j, k, aux;
    for (int i = 0; i < dimen; i++)
        cout << arreglo[i] << " ";
    cout << endl;
    salto = dimen / 2;
    while (salto > 0) {
        for (int i = salto; i < dimen; i++) {
            j = i - salto;
            while (j >= 0) {
                k = j + salto;
                if (arreglo[j] <= arreglo[k])
                    j = -1;
                else {
                    aux = arreglo[j];
                    arreglo[j] = arreglo[k];
                    arreglo[k] = aux;
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
    cout << "ASCENDENTE" << endl;
    for (int i = 0; i < dimen; i++)
        cout << arreglo[i] << " ";
    cout << "\nDESCENDENTE" << endl;
    for (int i = dimen - 1; i >= 0; i--)
        cout << arreglo[i] << " ";
    return 0;
}