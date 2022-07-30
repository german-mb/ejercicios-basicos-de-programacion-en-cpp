/*
7.	Crear un programa para leer números hasta que se introduzca un 0. Para cada uno indicar si es para o impar.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Digite un numero: ";
    cin >> numero;
    while (numero != 0) {
        numero % 2 == 0 ? cout << "PAR\n" : cout << "IMPAR" << endl;
        cout << "Digite un numero: ";
        cin >> numero;
    }
    return 0;
}
