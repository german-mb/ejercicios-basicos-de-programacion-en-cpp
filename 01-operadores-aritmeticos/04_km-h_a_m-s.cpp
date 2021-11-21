/* 04. Realizar un programa que lea una determinada velocidad de km / h, luego convierta a m / s.
10/h 
1km = 1000m
1h  = 3600s
10*1000/3600 = 27.78m/s
*/
#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
    double kilometros, resultado;
    cout << "Ingrese el numero de kilometros por hora" << endl;
    cin >> kilometros;
    resultado = (kilometros * 1000) / 3600;
    cout.precision(2);
    cout << "La conversion es: " << resultado << "m/s" << endl;
    return 0;
}
