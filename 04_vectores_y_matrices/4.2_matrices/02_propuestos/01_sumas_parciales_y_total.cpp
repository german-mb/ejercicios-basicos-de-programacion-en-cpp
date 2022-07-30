/*
1.	Escribe un programa que pida 20 números enteros. Estos números se deben introducir en una matriz de 4 filas por 5 columnas. El programa debe mostrar las sumas parciales de filas y columnas igual que de una hoja de cálculo. La suma total debe aparecer en la esquina inferior derecha.
*/
#include <iostream>
using namespace std;
int main() {
    int matriz[4][5], sum_fila = 0, cont = 0, sum_col_total = 0, sum_fila_total = 0;
    int sum_col[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Posicion: " << i << "," << j << ": ";
            cin >> matriz[i][j];
            sum_col[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << endl;
        for (int j = 0; j < 5; j++) {
            sum_fila += matriz[i][j];

            (matriz[i][j] < 10)
                ? cout << matriz[i][j] << "    "
            : (matriz[i][j] < 100)
                ? cout << matriz[i][j] << "   "
            : (matriz[i][j] < 1000)
                ? cout << matriz[i][j] << "  "
                : cout << matriz[i][j] << " ";
        }
        cout << "| " << sum_fila;
        sum_fila_total += sum_fila;
        sum_fila = 0;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) sum_col_total += sum_col[i];
    for (int i = 0; i < 5; i++) cout << "-----";
    cout << endl;
    for (int i = 0; i < 5; i++) {
        (sum_col[i] < 10)
            ? cout << sum_col[i] << "    "
        : (sum_col[i] < 100)
            ? cout << sum_col[i] << "   "
        : (sum_col[i] < 1000)
            ? cout << sum_col[i] << "  "
            : cout << sum_col[i] << " ";
    }

    cout << "  " << sum_fila_total + sum_col_total << endl;
    return 0;
}
