/*
12. Crear un programa que pida ingresar el radio de un círculo y que calcule su área. A=πr^2
*/
#include <iostream>
using namespace std;
int main()
{
    float radio, area;
    cout << "Ingrese el radio del circulo ";
    cin >> radio;
    area = 3.1416 * (radio * radio);
    cout << "El area del circulo es: " << area << endl;
    return 0;
}
