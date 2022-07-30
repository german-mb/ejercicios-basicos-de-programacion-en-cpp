/*
9. Leer tres números enteros, si el primero de ellos es negativo, calcular el producto de los tres, en caso contrario calcular la suma de ellos.
*/
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Ingrese valores para a, b y c: " << endl;
    cin >> a >> b >> c;
    if (a < 0) {
        cout << "El producto es: " << a * b * c << endl;
    } else {
        cout << "La suma es: " << a + b + c << endl;
    }
    return 0;
}
