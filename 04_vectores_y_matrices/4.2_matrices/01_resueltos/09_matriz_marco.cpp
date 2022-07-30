/*
9.	Crear una matriz “marco” de n x n; todos sus elementos deben ser 0 salvo los de los bordes que deben ser 1.
*/
#include <iostream>
using namespace std;
int main() {
    int dimension;
    cout << "Digite la dimension de la matriz: ";
    cin >> dimension;
    int matriz[dimension][dimension];
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            i == 0 || j == 0 || i == dimension - 1 || j == dimension - 1
                ? matriz[i][j] = 1
                : matriz[i][j] = 0;
        }
    }
    for (int i = 0; i < dimension; i++) {
        cout << endl;
        for (int j = 0; j < dimension; j++)
            cout << matriz[i][j] << " ";
    }
    return 0;
}
