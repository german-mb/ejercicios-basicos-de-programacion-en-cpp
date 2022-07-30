/*
6.	Crear una matriz de tamaño n x n, rellenarla de forma que los elementos de la diagonal secundaria sean 1 y el resto 0.
*/
#include <iostream>
using namespace std;
int main() {
    int dimension;
    cout << "Digite la dimension de la matriz: ";
    cin >> dimension;
    int matriz[dimension][dimension];
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++)
            i == dimension - 1 - j ? matriz[i][j] = 1
                                   : matriz[i][j] = 0;
    }
    for (int i = 0; i < dimension; i++) {
        cout << "\n";
        for (int j = 0; j < dimension; j++)
            cout << matriz[i][j] << " ";
    }
    cout << "\n\n";
    return 0;
}