/*
11.	Realizar un programa que pida ingresar una estatura en metros y luego lo convierta a pulgadas y centímetros.
1m = 39.3701 plg
1m = 100cm
*/
#include <iostream>
using namespace std;
int main()
{
    float estatura, est_pulgadas, est_centimetros;
    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;
    est_pulgadas = estatura * 39.3701;
    est_centimetros = estatura * 100;
    cout << "Equivalente en pulgadas: " << est_pulgadas << endl;
    cout << "Equivalente en centimetros: " << est_centimetros << endl;
    return 0;
}
