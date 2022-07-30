/*
17.	Escribir un programa que muestre los números perfectos entre 1 y 1000.
Numero perfecto es igual a la suma de sus divisores.
6 => 1 + 2 + 3 = 6
20 => 1 + 2 + 4 + 7 + 14 = 28
*/
#include <iostream>
using namespace std;
int main() {
    int suma_divs = 0;
    for (int i = 1; i <= 1000; i++) {
        suma_divs = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                suma_divs += j;
            }
        }
        i == suma_divs ? cout << i << " " : cout << "";
    }
    return 0;
}
