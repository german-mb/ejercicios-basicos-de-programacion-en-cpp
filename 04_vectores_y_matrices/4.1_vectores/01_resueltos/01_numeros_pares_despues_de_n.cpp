/*
1.	Ingresar un número N y guardar en un array los 20 primeros números pares después de N.
*/
#include <iostream>
using namespace std;
int main() {
    int numero, array[20];
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        for (int i = 0; i < 20; i++) {
            array[i] = numero;
            numero += 2;
        }
    } else {
        numero++;
        for (int i = 0; i < 20; i++) {
            array[i] = numero;
            numero += 2;
        }
    }
    for (int i = 0; i < 20; i++) cout << array[i] << " ";
    return 0;
}
