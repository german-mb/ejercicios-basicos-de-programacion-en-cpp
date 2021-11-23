/*
7.	Pedir dos números y decir cuál es el mayor o si son iguales.
*/
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Digite valores para a y b" << endl;
    cin >> a >> b;
    if (a == b) {
        cout << "Los valores ingresados son iguales" << endl;
    } else if (a > b) {
        cout << "El numero mayor es " << a << endl;
    } else {
        cout << "El numero mayor es " << b << endl;
    }
    return 0;
}
