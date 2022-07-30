/*
28.	Realizar un programa para calcular el máximo común divisor de dos números.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2, mcd = 0, aux, r;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    if (num1 < 0 && num2 < 0) {
        cout << "No se completo la operacion" << endl;
    } else {
        mcd = num1;
        aux = num2;
        do {
            r = mcd % aux;
            mcd = aux;
            aux = r;
        } while (r != 0);
        cout << "El MCD es: " << mcd << endl;
    }
    return 0;
}
