/*
2.	Realiza un programa que sea capaz de rotar 90° todos los elementos de una matriz en el sentido de las agujas del reloj. La matriz debe tener 12 filas por 12 columnas y debe contener números generados al azar entre 0 y 100. Se debe mostrar tanto la matriz original como la matriz resultante, ambas con los números convenientemente alineados.
*/
#include <time.h>

#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int dimension = 12;
    int matriz[dimension][dimension], matriz_rotada[dimension][dimension];
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++)
            matriz[i][j] = 1 + rand() % 100;
    }
    cout << "\n\tARREGLO BASE";
    for (int i = 0; i < dimension; i++) {
        cout << endl;
        for (int j = 0; j < dimension; j++)
            matriz[i][j] < 10
                ? cout << matriz[i][j] << "   "
            : matriz[i][j] < 100
                ? cout << matriz[i][j] << "  "
                : cout << matriz[i][j] << " ";
    }
    //rotar matriz
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            matriz_rotada[j][dimension - 1 - i] = matriz[i][j];
        }
    }
    cout << "\n\n\tARREGLO RESULTANTE";
    for (int i = 0; i < dimension; i++) {
        cout << endl;
        for (int j = 0; j < dimension; j++)
            matriz_rotada[i][j] < 10
                ? cout << matriz_rotada[i][j] << "   "
            : matriz_rotada[i][j] < 100
                ? cout << matriz_rotada[i][j] << "  "
                : cout << matriz_rotada[i][j] << " ";
    }
    cout << endl;
    return 0;
}
