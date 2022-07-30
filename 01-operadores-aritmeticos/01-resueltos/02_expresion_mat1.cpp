/* 02. Realizar un programa para calcular el resultado de la siguiente expresión matemática:
          b
    a + ----- =
        c - d
*/
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, resultado;
    cout << "Ingrese valores para a, b, c y d:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    resultado = a + (b / (c - d));
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
