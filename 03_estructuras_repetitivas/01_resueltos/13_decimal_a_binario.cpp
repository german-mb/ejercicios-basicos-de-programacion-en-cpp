/*
13.	Crear un programa para convertir un número decimal a binario.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    string binario = "";
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    if (numero > 0) {
        cout << "Decimal: " << numero << endl;
        while (numero != 0) {
            binario = (numero % 2 == 0 ? "0" : "1") + binario;
            numero /= 2;
        }
        cout << "Binario: " << binario << endl;
    } else {
        cout << "Ingrese un numero positivo" << endl;
    }
    return 0;
}
