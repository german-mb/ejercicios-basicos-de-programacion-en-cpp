/*
3.	Dada una matriz cuadrada A, determinar si dicha matriz es simétrica. Se considera a una matriz simétrica si A (i, j) = A (j, i) y esto se cumple para todos los elementos i, j de la matriz.
*/
#include <iostream>
using namespace std;
int main() {
    int matriz[4][4] = {{0, 1, 2, 3},
                        {1, 0, 4, 5},
                        {2, 4, 0, 6},
                        {3, 5, 6, 0}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    float simetrica = true;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = false;
                break;
            }
        }
    }
    simetrica ? cout << "La matriz ES simetrica"
              : cout << "La matriz NO ES simetrica" << endl;
    return 0;
}
