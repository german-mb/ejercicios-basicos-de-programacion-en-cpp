/*
15.	Crear un programa para comprobar si un número entero es capicúa.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    string num_to_string = "";
    cout << "Ingrese un numero: ";
    cin >> numero;
    num_to_string = to_string(numero);
    string reverse(num_to_string.rbegin(), num_to_string.rend());
    if (num_to_string == reverse) {
        cout << numero << " es CAPICUA" << endl;
    } else {
        cout << numero << " NO es CAPICUA" << endl;
    }
    return 0;
}
