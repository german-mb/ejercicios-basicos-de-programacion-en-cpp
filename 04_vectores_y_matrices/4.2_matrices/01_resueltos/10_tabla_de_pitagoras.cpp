/*
10.	Crear una matriz que contenga la tabla de multiplicar de 1 a N, N ingresado por el usuario. Tabla de Pitágoras.
*/
#include <iostream>
using namespace std;
int main() {
    int dimension;
    cout << "\tTABLA DE PITAGORAS" << endl;
    cout << "Ingrese un numero: ";
    cin >> dimension;
    dimension++;
    int tabla[dimension][dimension];
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            i == 0   ? tabla[i][j] = j
            : j == 0 ? tabla[i][j] = i
                     : tabla[i][j] = i * j;
        }
    }
    for (int i = 0; i < dimension; i++) {
        cout << endl;
        for (int j = 0; j < dimension; j++) {
            tabla[i][j] < 10    ? cout << tabla[i][j] << "   "
            : tabla[i][j] < 100 ? cout << tabla[i][j] << "  "
                                : cout << tabla[i][j] << " ";
        }
    }
    return 0;
}
