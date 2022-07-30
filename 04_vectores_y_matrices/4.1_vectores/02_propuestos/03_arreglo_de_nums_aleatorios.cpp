/*
3.	Hacer un programa que inicialice un vector de n posiciones con número aleatorios. Ordenar los elementos de menor a mayor.
*/
#include <time.h>

#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int dimension;
    cout << "Digite la dimension del arreglo: ";
    cin >> dimension;
    int arreglo[dimension], aux;
    for (int i = 0; i < dimension; i++)
        arreglo[i] = 1 + rand() % 100;
    cout << "\nARREGLO BASE" << endl;
    for (int i = 0; i < dimension; i++) cout << arreglo[i] << " ";

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (arreglo[j + 1] < arreglo[j]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    cout << "\nARREGLO ORDENADO" << endl;
    for (int i = 0; i < dimension; i++) cout << arreglo[i] << " ";
    return 0;
}
