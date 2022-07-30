/*
2.	Pedir números hasta que se introduzca un negativo, y calcular la media de todos los números ingresados.
*/
#include <iostream>
using namespace std;
int main() {
    float numero, suma = 0, cantidad;
    cout << "Digite un numero: ";
    cin >> numero;
    while (numero > -1) {
        suma += numero;
        cantidad++;
        cout << "Digite un numero: ";
        cin >> numero;
    }
    cout << "El promedio es: " << suma / cantidad << endl;
    return 0;
}
