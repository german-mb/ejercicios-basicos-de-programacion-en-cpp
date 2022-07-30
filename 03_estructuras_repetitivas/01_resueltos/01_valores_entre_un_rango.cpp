/*
1.	Realizar un programa que lea dos números enteros por teclado y muestre todos los números que hay entre el primer y el segundo número
*/
#include <iostream>
using namespace std;
int main() {
    int valor1, valor2;
    cout << "Digite dos valores: " << endl;
    cin >> valor1 >> valor2;
    if (valor1 > valor2) {
        cout << "" << endl;
        while (valor2 <= valor1) {
            cout << valor2 << endl;
            valor2++;
        }
    } else {
        cout << "" << endl;
        while (valor1 <= valor2) {
            cout << valor1 << endl;
            valor1++;
        }
    }
    return 0;
}
