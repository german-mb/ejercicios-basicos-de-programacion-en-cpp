/*
7.	Leer N números, almacenar en un arreglo de N posiciones y realizar la media de los números positivos, la media de los negativos y contar los números ceros.
*/
#include <iostream>
using namespace std;
int main() {
    float numero, positivos = 0, cont_pos = 0, cont_neg = 0, negativos = 0, ceros = 0;
    int dimension;
    cout << "Digite la dimesion del arreglo: ";
    cin >> dimension;
    float arreglo[dimension];
    for (int i = 0; i < dimension; i++) {
        cout << "Posicion " << i << ": ";
        cin >> numero;
        arreglo[i] = numero;
        if (numero == 0) ceros++;
        if (numero < 0) {
            negativos += numero;
            cont_neg++;
        }
        if (numero > 0) {
            positivos += numero;
            cont_pos++;
        }
    }
    cout << "\n\tARREGLO" << endl;
    for (int i = 0; i < dimension; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\nMedia positivos: " << positivos / cont_pos << endl;
    cout << "Media negativos: " << negativos / cont_neg << endl;
    cout << "Cantidad ceros: " << ceros << endl;
    return 0;
}
