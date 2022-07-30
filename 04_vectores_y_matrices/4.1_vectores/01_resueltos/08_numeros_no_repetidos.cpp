/*
8.	Escribir un programa que pida 5 números enteros y en caso de que se introduzca un número repetido se advierta al usuario y vuelva a pedir al usuario un nuevo número, después mostrar los elementos por pantalla.
*/
#include <iostream>
using namespace std;
int main() {
    int numero, numeros[5];
    bool existe = false;
    cout << "\tINGRESE VALORES AL ARREGLO" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i << ": ";
        cin >> numero;
        do {
            for (int j = 0; j <= i; j++) {
                if (numero == numeros[j]) {
                    existe = true;
                    cout << "Digite otro numero: ";
                    cin >> numero;
                    break;
                } else {
                    existe = false;
                }
            }
        } while (existe);
        numeros[i] = numero;
        existe = false;
    }
    cout << "\n\tARREGLO SIN VALORES REPETIDOS" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << "" << endl;
    return 0;
}
