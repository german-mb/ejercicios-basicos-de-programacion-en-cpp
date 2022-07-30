/*
9.	Realizar un programa para verificar si un número es primo o no.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    bool primo = true;
    cout << "Digite un numero: ";
    cin >> numero;
    if (numero > 1) {
        for (int i = 2; i < numero && primo == true; i++) {
            if (numero % i == 0) {
                primo = false;
            }
        }
        primo ? cout << numero << " es primo" << endl
              : cout << numero << " NO es primo" << endl;
    } else {
        cout << numero << " No es un numero primo." << endl;
    }
    return 0;
}
