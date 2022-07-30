/*
11.	Realizar un programa que calcule el valor de: 2^1+2^2+2^3+…+2^n.
*/
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    int numero, total = 0;
    cout << "Digite el limite de la serie: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++) {
        total += pow(2, i);
    }
    cout << "La suma de la serie es: " << total << endl;
    return 0;
}
