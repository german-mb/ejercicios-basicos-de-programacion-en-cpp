#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese un numero entre 1 - 10" << endl;
    cin >> numero;
    if (numero > 0 && numero <= 10) {
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    } else {
        cout << "Numero fuera de rango" << endl;
    }
    return 0;
}