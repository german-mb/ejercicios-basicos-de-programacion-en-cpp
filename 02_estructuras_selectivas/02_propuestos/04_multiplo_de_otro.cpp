/*
4.	Crear un programa para comprobar si un número es múltiplo de otro.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Ingrese dos numeros enteros" << endl;
    cin >> num1 >> num2;
    num1 % num2 == 0 ? cout << num1 << " es multiplo de " << num2 << endl : cout << "No es multiplo" << endl;
    return 0;
}