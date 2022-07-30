/*
01.	Escribir un programa que muestre por pantalla el resultado 
    de la siguiente operación aritmética ((3+2)/(2.5))^2=.
*/
#include <iostream>
using namespace std;
int main() {
    float resultado;
    resultado = ((3 + 2) / 2.5) * ((3 + 2) / 2.5);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
