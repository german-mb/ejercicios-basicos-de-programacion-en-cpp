/*
9.	Crear un programa para calcular el mínimo común múltiplo de dos números enteros
*/

#include <iostream>
using namespace std;
int main() {
    int num1, num2, mcd = 0, mcm = 0, aux, r;
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
        //cout << "El MCD es: " << mcd << endl;
        mcm = num1 * num2 / mcd;
        cout << "El mcm es: " << mcm << endl;
    }
    return 0;
}
