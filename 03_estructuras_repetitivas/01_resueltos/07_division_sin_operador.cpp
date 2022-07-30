/*
7.	Realizar la división de dos números enteros sin utilizar dicho operador.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2, resultado = 0;
    cout << "Digite un numero: ";
    cin >> num1;
    cout << "Digite otro numero: ";
    cin >> num2;
    cout << num1 << " / " << num2 << " = ";
    if (num2 != 0) {
        while (num1 >= num2) {
            resultado++;
            num1 -= num2;
        }
        cout << resultado << endl;
    } else {
        cout << "No puede dividir por 0" << endl;
    }
    return 0;
}
