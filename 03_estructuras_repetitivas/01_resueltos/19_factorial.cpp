/*
19.	Pedir un número y calcular su factorial. N! = 1*2*3*…*N.
*/
#include <iostream>
using namespace std;
int main() {
    int numero, factorial = 1;
    cout << "Digite un numero: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << numero << " es " << factorial << endl;
    return 0;
}
