/*
4. Determinar si un triángulo es equilátero, isósceles o escaleno.
*/
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Ingrese valores para los lados a, b y c: " << endl;
    cin >> a >> b >> c;
    if (a == b && a == c) {
        cout << "Es un triangulo Equilatero" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Es un triangulo Isosceles" << endl;
    } else {
        cout << "Es un triangulo Escaleno" << endl;
    }
    return 0;
}
