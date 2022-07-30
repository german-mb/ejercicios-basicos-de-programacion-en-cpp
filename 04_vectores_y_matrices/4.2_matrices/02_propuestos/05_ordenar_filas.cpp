/*
5.	Crear un programa que pida crear una matriz de n filas por m columnas. Luego rellenar con números aleatorios comprendidos entre 0 y 100. Posteriormente, cada una de las filas pares deben ordenarse de manera ascendente y las filas impares en orden descendente. Mostrar la matriz base y la resultante.
*/
#include <time.h>

#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));

    int fils, cols, aux, i, j, a, b;
    cout << "Digita el numero de filas: ";
    cin >> fils;
    cout << "Digita el numero de columnas: ";
    cin >> cols;
    int matriz[fils][cols];
    for (int i = 0; i < fils; i++) {
        for (int j = 0; j < cols; j++)
            matriz[i][j] = 0 + rand() % 100;
    }
    cout << "\n\tMATRIZ BASE ";
    for (i = 0; i < fils; i++) {
        cout << endl;
        for (j = 0; j < cols; j++)
            cout << matriz[i][j] << " ";
    }
    for (i = 0; i < fils; i++) {
        if (i % 2 == 0) {
            for (a = 0; a < cols; a++) {
                for (b = 0; b < cols - 1; b++) {
                    if (matriz[i][b] > matriz[i][b + 1]) {
                        aux = matriz[i][b];
                        matriz[i][b] = matriz[i][b + 1];
                        matriz[i][b + 1] = aux;
                    }
                }
            }
        } else {
            for (a = 0; a < cols; a++) {
                for (b = 0; b < cols - 1; b++) {
                    if (matriz[i][b] < matriz[i][b + 1]) {
                        aux = matriz[i][b];
                        matriz[i][b] = matriz[i][b + 1];
                        matriz[i][b + 1] = aux;
                    }
                }
            }
        }
        // }
    }
    cout << "\n\n\tMATRIZ RESULTADO";
    for (i = 0; i < fils; i++) {
        cout << endl;
        for (j = 0; j < cols; j++)
            cout << matriz[i][j] << " ";
    }
    return 0;
}
