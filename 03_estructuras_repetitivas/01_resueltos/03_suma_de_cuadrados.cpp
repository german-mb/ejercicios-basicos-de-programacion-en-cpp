/*
3.	Escribir un programa que calcule y muestre la suma de los cuadrados de los 10 primeros números enteros mayores a cero.
*/
#include <iostream>
using namespace std;
int main() {
    int total = 0, iterador = 1;
    while (iterador <= 10) {
        total += iterador * iterador;
        iterador++;
    }
    cout << "La suma es: " << total << endl;
    return 0;
}
