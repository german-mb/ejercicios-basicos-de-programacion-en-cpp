/*
10.	Realizar un programa que calcule el valor que toma la siguiente función para valores dados de x, y: 
                √x
    f(x,y) = -------
             y^2 - 1
*/
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    float x, y, resultado;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
    resultado = (sqrt(x)) / (pow(y, 2) - 1);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
