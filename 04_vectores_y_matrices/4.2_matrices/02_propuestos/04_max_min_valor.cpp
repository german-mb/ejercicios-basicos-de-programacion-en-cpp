/*
4.	Realizar un programa que pida crear una matriz de n filas por m columnas. Luego rellenar con números aleatorios comprendidos entre 0 y 1000. A continuación, el programa deberá dar la posición tanto del máximo como del mínimo valor.
*/
#include <time.h>

#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));

    int fils, cols, l = 1, maxf, maxc, minf, minc;
    cout << "Digita el numero de filas: ";
    cin >> fils;
    cout << "Digita el numero de columnas: ";
    cin >> cols;
    int matriz[fils][cols], max[l][l] = {{0}, {0}}, min[l][l] = {{100}, {100}};
    for (int i = 0; i < fils; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = 0 + rand() % 100;
            if (matriz[i][j] > max[0][0]) {
                max[0][0] = matriz[i][j];
                maxf = i;
                maxc = j;
            }
            if (matriz[i][j] < min[0][0]) {
                min[0][0] = matriz[i][j];
                minf = i;
                minc = j;
            }
        }
    }
    cout << "ARREGLO BASE";
    for (int i = 0; i < fils; i++) {
        cout << endl;
        for (int j = 0; j < cols; j++)
            cout << matriz[i][j] << " ";
    }
    cout << "\n\nEl valor maximo es " << max[0][0] << ", esta en la posicion: [" << maxf << "," << maxc << "]" << endl;
    cout << "El valor minimo es " << min[0][0] << ", esta en la posicion: [" << minf << "," << minc << "]" << endl;

    return 0;
}
