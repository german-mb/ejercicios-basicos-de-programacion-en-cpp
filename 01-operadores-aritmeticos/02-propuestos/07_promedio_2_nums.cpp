/*
7.	Elaborar un programa que solicite 2 números y muestre el promedio de ambos.
*/
#include <iostream>
using namespace std;
int main() {
    float a, b, promedio;
    cout << "Ingrese dos numeros: " << endl;
    cin >> a >> b;
    promedio = (a + b) / 2;
    cout << "EL promedio es: " << promedio << endl;
    return 0;
}
