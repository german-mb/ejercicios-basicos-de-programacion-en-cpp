/*
7.	Construya un programa que, dados tres números, muestre el mensaje “IGUALES” si la suma de los dos primeros es igual al otro número y el mensaje “DISTINTOS” en caso contrario.
*/
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Ingrese tres números" << endl;
    cin >> a >> b >> c;
    (a + b) == c
        ? cout << "IGUALES" << endl
        : cout << "DISTINTOS" << endl;

    return 0;
}
