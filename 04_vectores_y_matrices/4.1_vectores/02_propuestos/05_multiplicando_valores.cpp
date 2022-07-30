/*
5.	Realizar un programa que pida crear un arreglo de números enteros de n posiciones, luego ingresar los datos de forma manual. El programa debe multiplicar por 2 si el valor es número impar y si el valor es número par multiplicará por 3. Mostrar el arreglo base y el arreglo resultante.
*/
#include <iostream>
using namespace std;
int main() {
    int dimension;
    cout << "Digite la dimension del arreglo: ";
    cin >> dimension;
    int arreglo[dimension];
    for (int i = 0; i < dimension; i++) {
        cout << "Posicion " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    cout << "ARREGLO BASE" << endl;
    for (int i = 0; i < dimension; i++) cout << arreglo[i] << " ";
    for (int i = 0; i < dimension; i++) {
        arreglo[i] % 2 == 0
            ? arreglo[i] *= 3
            : arreglo[i] *= 2;
    }
    cout << "\nARREGLO RESULTANTE" << endl;
    for (int i = 0; i < dimension; i++) cout << arreglo[i] << " ";
    return 0;
}
