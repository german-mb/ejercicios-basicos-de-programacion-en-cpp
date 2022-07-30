/*
7.	Crear y cargar una matriz de tamaño n x m, mostrar la suma de cada fila y de cada columna.
*/
#include <iostream>
using namespace std;
int main() {
    int filas, columnas;
    cout << "Numero de filas: ";
    cin >> filas;
    cout << "Numero de columnas: ";
    cin >> columnas;
    int matriz[filas][columnas], suma_filas[filas], suma_columnas[columnas];
    for (int i = 0; i < filas; i++) suma_filas[i] = 0;
    for (int i = 0; i < columnas; i++) suma_columnas[i] = 0;
    cout << "INGRESE VALORES PARA LA MATRIZ" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Posicion: " << i << "," << j << ": ";
            cin >> matriz[i][j];
            suma_filas[i] += matriz[i][j];
            suma_columnas[j] += matriz[i][j];
        }
    }
    cout << "\tMATRIZ BASE" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\tSUMA FILAS" << endl;
    for (int i = 0; i < filas; i++)
        cout << "Fila " << i + 1 << ": " << suma_filas[i] << endl;
    cout << "\tSUMA COLUMNAS" << endl;
    for (int i = 0; i < columnas; i++)
        cout << "Columna " << i + 1 << ": " << suma_columnas[i] << endl;
    return 0;
}
