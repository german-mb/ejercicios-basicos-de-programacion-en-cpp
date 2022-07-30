/*
18.	Realizar un programa que ingrese un número por teclado para mostrar la serie de Fibonacci. 
0 + 1 = 1
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
5 + 8 = 13
*/
#include <iostream>
using namespace std;
int main() {
    int numero, a = 0, b = 1, result = 0;
    cout << "Ingrese numero de elementos a mostrar: ";
    cin >> numero;
    for (int i = 0; i < numero; i++) {
        cout << a << " ";
        result = a + b;
        a = b;
        b = result;
    }
    return 0;
}
