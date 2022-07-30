/*
2.	Realizar un programa para sumar 2 matrices. Sean 2 matrices A y B, para que se puedan sumar deben poseer el mismo número de filas y columnas, cada elemento de la matriz resultante será la suma de los correspondientes elementos de las matrices A y B. C (i, j) = A (i, j) + B (i, j)
*/
#include <iostream>
using namespace std;
int main() {
    int filA, colA, filB, colB;
    cout << "Digite filas y columnas de la matriz A: " << endl;
    cin >> filA >> colA;
    cout << "Digite filas y columnas de la matriz B: " << endl;
    cin >> filB >> colB;

    if (filA == filB && colA == colB) {
        int matrizA[filA][colA], matrizB[filB][colB], matrizC[filA][colA];
        cout << "\tVALORES PARA MATRIZ A" << endl;
        for (int i = 0; i < filA; i++) {
            for (int j = 0; j < colA; j++) {
                cout << "Posicion: " << i << " " << j << ": ";
                cin >> matrizA[i][j];
            }
        }
        cout << "\tVALORES PARA MATRIZ B" << endl;
        for (int i = 0; i < filB; i++) {
            for (int j = 0; j < colB; j++) {
                cout << "Posicion: " << i << " " << j << ": ";
                cin >> matrizB[i][j];
            }
        }
        for (int i = 0; i < filB; i++) {
            for (int j = 0; j < colB; j++)
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
        cout << "\tMATRIZ C";
        for (int i = 0; i < filB; i++) {
            cout << "" << endl;
            for (int j = 0; j < colB; j++)
                cout << matrizC[i][j] << " ";
        }
    } else {
        cout << "No se puede sumar las matrices" << endl;
    }
    return 0;
}
