/* 02. Crear un programa que calcule el resultado de la siguiente expresión:
    a + b
    ------
      c
    ------ =
        e    
    d + --
        f
*/

#include <iostream>
using namespace std;
int main() {
    double a, b, c, d, e, f, resultado;
    cout << "Ingrese valores para: a, b, c, d, e, f" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    resultado = ((a + b) / c) / (d + (e / f));
    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
