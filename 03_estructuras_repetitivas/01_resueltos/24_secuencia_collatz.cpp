/*
24.	Desarrolle un programa que grafique los largos y sus respectivos valores de la secuencia de Collatz de un número n.
Si un numero es par, lo dividimos entre dos, 
si es impar lo multiplicamos por 3 y le sumamos 1.
*/
#include <iostream>
using namespace std;
int main() {
    int num, pasos = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num != 1) {
        pasos++;
        for (int i = 0; i < num; i++) cout << "*";
        cout << " " << num << endl;
        num % 2 == 0 ? num /= 2 : num = (num * 3) + 1;
        num == 1 ? cout << "*" << num : cout << "";
    }
    return 0;
}
