/*
1.	Crear un programa que pida ingresar un carácter y comprobar si es mayúscula o minúscula.
*/
#include <iostream>
using namespace std;
int main() {
    char caracter;
    cout << "Digite un caracter: ";
    cin >> caracter;
    if (isupper(caracter)) {
        cout << "El caracter ingresado es mayuscula";
    } else {
        cout << "El caracter ingresado es minuscula";
    }
    return 0;
}
