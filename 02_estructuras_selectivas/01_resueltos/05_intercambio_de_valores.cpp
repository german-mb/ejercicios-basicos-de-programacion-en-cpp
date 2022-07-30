/*
5.	Crear un programa que lea por teclado dos números y que haga el intercambio de valores, luego de intercambiar mostrar por pantalla. Ejemplo: a = 10 y b = 15; realizando el cambio a = 15 y b 10.
*/
#include <iostream>
using namespace std;
int main() {
    float numA, numB, aux;
    cout << "Digite un valor para A: ";
    cin >> numA;
    cout << "Digite un valor para B: ";
    cin >> numB;
    aux = numA;
    numA = numB;
    numB = aux;
    cout << "Valor de A: " << numA;
    cout << "\nValor de B: " << numB << endl;
    return 0;
}
