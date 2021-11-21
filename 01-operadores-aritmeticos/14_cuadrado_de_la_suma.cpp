// 14. Hacer un programa que calcule el cuadrado de una suma. (a + b)^2 = a^2 + b^2 + 2ab
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, resultado;
    cout << "Ingrese valores para a y b " << endl;
    cin >> a >> b;
    resultado = pow(a, 2) + pow(b, 2) + (2 * a * b);
    cout << "Resultado es: " << resultado << endl;
    return 0;
}
