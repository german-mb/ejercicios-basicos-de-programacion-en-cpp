/*
8.	Crear un programa para mostrar cuáles y cuántos son los números primos comprendidos entre 1 y 1000. Un número es primo cuando es solo divisible por 1 y por sí mismo.
*/
#include <iostream>
using namespace std;
int main() {
    int primos = 0;
    bool bandera = true;
    for (int i = 2; i <= 1000; i++) {
        for (int j = 2; j <= i / 2 && bandera == true; j++) {
            if (i % j == 0) bandera = false;
        }
        if (bandera) {
            primos++;
            cout << i << " ";
        }
        bandera = true;
    }
    cout << "\nPrimos: " << primos << endl;
    return 0;
}
