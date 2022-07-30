/*
27.	Crear un programa que calcule la descomposición en factores primos de un número entero n. Por ejemplo: 20 = 2*2*5.
*/
#include <iostream>
using namespace std;
int main() {
    int numero, primo;
    cout << "Digite un numero: ";
    cin >> numero;
    primo = 2;
    while (numero > 1) {
        if (numero % primo == 0) {
            cout << primo << " ";
            numero /= primo;
        } else {
            primo++;
        }
    }
    return 0;
}
