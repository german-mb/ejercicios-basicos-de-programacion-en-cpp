/*
15. Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma: ax^2+bx+c = 0
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, x1 = 0, x2 = 0;
    cout << "Ingrese valores para a, b y c " << endl;
    cin >> a >> b >> c;
    x1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}
