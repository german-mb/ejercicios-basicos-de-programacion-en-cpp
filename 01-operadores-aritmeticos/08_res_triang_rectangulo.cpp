/*
08. Realizar un programa que lea por teclado los dos catetos de un triángulo rectángulo y muestre la hipotenusa por pantalla.
a^2 + b^2 = c^2
*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Ingrese los dos catetos " << endl;
    cin >> a;
    cin >> b;
    c = sqrt((a * a) + (b * b));
    cout << "La hipotenusa es: " << c << endl;
    return 0;
}
