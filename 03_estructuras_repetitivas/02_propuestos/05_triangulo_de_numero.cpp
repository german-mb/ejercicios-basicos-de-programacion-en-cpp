/*
5.	Escribir un programa que pida al usuario un número entero y muestre por pantalla un triángulo rectángulo como el siguiente:
1
3 1
5 3 1
7 5 3 1
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese la altura del triangulo: ";
    cin >> numero;
    for (int i = 1; i <= numero; i += 2) {
        cout << endl;
        for (int j = i; j > 0; j -= 2)
            cout << j << " ";
    }
    return 0;
}
