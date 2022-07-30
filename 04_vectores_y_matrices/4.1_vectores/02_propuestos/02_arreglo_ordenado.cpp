/*
2.	Crear un arreglo de números enteros ordenados de forma creciente. Luego pedir al usuario que digite un número e insertar al arreglo en la posición n de tal manera que el vector siga ordenado.
*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[10] = {-20, 5, 20, 24, 56, 60, 66, 79, 100};
    int num;
    cout << "Digite un numero: ";
    cin >> num;
    if (num >= arreglo[8]) {
        arreglo[9] = num;
    } else {
        for (int i = 0; i < 10; i++) {
            if (num <= arreglo[i]) {
                for (int j = 9; j >= i; j--) {
                    arreglo[j] = arreglo[j - 1];
                }
                arreglo[i] = num;
                break;
            }
        }
    }
    for (int i = 0; i < 10; i++) cout << arreglo[i] << " ";
    return 0;
}
