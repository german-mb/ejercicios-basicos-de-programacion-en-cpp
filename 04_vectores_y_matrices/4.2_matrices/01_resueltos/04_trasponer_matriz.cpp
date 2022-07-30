/*
4.	Realizar un programa para crear y cargar una matriz de n x n, trasponerla y mostrarla.
*/
#include <iostream>
using namespace std;
int main() {
    int dimension;
    cout << "Digitar dimension de la matriz: ";
    cin >> dimension;
    int matriz[dimension][dimension];
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << "Posicion: " << i << "," << j << ": ";
            cin >> matriz[i][j];
        }
    }
    cout << "\tMATRIZ BASE";
    for (int i = 0; i < dimension; i++) {
        cout << endl;
        for (int j = 0; j < dimension; j++)
            cout << matriz[i][j] << " ";
    }
    cout << "\n\tMATRIZ TRASPUESTA";
    for (int i = 0; i < dimension; i++) {
        cout << endl;
        for (int j = 0; j < dimension; j++)
            cout << matriz[j][i] << " ";
    }
    return 0;
}
