/*
8.	Crear una matriz n x m, asignar valores en cada posición y mostrar la suma de los números pares.
*/
#include <iostream>
using namespace std;
int main() {
    int fils, cols, pares = 0;
    cout << "Numero de filas: ";
    cin >> fils;
    cout << "Numero de columnas: ";
    cin >> cols;
    int matriz[fils][cols];
    cout << "INGRESE VALORES PARA LA MATRIZ" << endl;
    for (int i = 0; i < fils; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Posicion: " << i << "," << j << ": ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < fils; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < fils; i++) {
        for (int j = 0; j < cols; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares += matriz[i][j];
            }
        }
    }
    cout << "Suma de numeros pares: " << pares << endl;
    return 0;
}
