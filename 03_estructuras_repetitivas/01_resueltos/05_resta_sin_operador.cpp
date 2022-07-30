/*
5.	Realizar la resta de dos números enteros sin utilizar el operador de sustracción.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2, resultado = 0;
    cout << "Digite un numero: ";
    cin >> num1;
    cout << "Digite otro numero: ";
    cin >> num2;
    cout << num1 << " - " << num2 << " = ";
    if (num1 > num2) {
        while (num1 > num2) {
            num2++;
            resultado++;
        }
    } else {
        while (num2 > num1) {
            num1++;
            resultado++;
        }
        resultado *= -1;
    }
    cout << resultado << endl;
    return 0;
}
