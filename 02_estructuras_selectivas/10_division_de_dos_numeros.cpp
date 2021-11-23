/*
10.	Programa que lea dos números por teclado y muestre el resultado de la división del primero por el segundo. Se debe comprobar que el divisor no puede ser cero.
*/
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Ingrese dos valores " << endl;
    cin >> a >> b;
    if (b == 0) {
        cout << "El divisor tiene que ser distinto de 0" << endl;
    } else {
        cout << "La devision de: " << a << " entre " << b << " es " << a / b << endl;
    }
    return 0;
}
