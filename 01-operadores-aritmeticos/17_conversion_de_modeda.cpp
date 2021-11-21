/*
17. Juana viajará a EEUU y luego a Europa, por tanto, requiere un programa que convierta x cantidad de Bs a dólares y a euros.
$1 = Bs. 6.90 
1 euro = Bs. 7.79
*/
#include <iostream>
using namespace std;
int main()
{
    float bolivianos, dolares, euros;
    cout << "Ingrese la moneda boliviana: ";
    cin >> bolivianos;
    dolares = bolivianos / 6.90;
    euros = bolivianos / 7.79;
    cout << "En dolares: " << dolares << endl;
    cout << "En euros: " << euros << endl;
    return 0;
}
