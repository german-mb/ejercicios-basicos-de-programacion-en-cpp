/*
09. Escribir un programa para convertir grados Centígrados (°C) a grados Fahrenheit (°F). F=(C*1.8) +32.
*/
#include <iostream>
using namespace std;
int main()
{
    float grados_centigrados, grados_fahrenheit;
    cout << "Ingrese el valor en centigrados" << endl;
    cin >> grados_centigrados;
    grados_fahrenheit = (grados_centigrados * 1.8) + 32;
    cout << "Grados fahrenheit: " << grados_fahrenheit << endl;
    return 0;
}
