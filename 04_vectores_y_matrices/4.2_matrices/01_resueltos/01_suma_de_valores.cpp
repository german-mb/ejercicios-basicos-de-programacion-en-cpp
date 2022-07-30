/*
1.	Crear y cargar una matriz de tamaño n x m y sumar todos los valores de la matriz. 
*/
#include <iostream>
using namespace std;
int main() {
    int filas, columnas, suma = 0;
    cout << "Digite las filas y columnas de la matriz: " << endl;
    cin >> filas >> columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Posicion: " << i << " " << j << ": ";
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }
    cout << "La suma de valores de la matriz es: " << suma << endl;
    return 0;
}
