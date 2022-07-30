/*
8.	Crear un programa para calcular el mayor y el menor de tres números enteros.
*/
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Ingrese valores para a, b y c: " << endl;
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << "El numero mayor es: " << a << endl;
    } else if (b > a && b > c) {
        cout << "El numero mayor es: " << b << endl;
    } else {
        cout << "El numero mayor es: " << c << endl;
    }
    if (a < b && a < c) {
        cout << "El numero menor es: " << a << endl;
    } else if (b < a && b < c) {
        cout << "El numero menor es: " << b << endl;
    } else {
        cout << "El numero menor es: " << c << endl;
    }
    return 0;
}
