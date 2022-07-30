/*
13.	Pedir tres números y mostrar ordenados de mayor a menor.
*/
#include <iostream>
using namespace std;
int main() {
    float a, b, c, mayor, medio, menor;
    cout << "Ingrese valores para a, b y c: " << endl;
    cin >> a >> b >> c;
    (a > b && a > c)   ? mayor = a
    : (b > a && b > c) ? mayor = b
                       : mayor = c;
    (a < b && a < c)   ? menor = a
    : (b < a && b < c) ? menor = b
                       : menor = c;
    medio = (a + b + c) - mayor - menor;
    cout << "De mayor a menor: " << endl;
    cout << mayor << endl;
    cout << medio << endl;
    cout << menor << endl;
    return 0;
}
