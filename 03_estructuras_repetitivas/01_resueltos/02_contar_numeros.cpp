/*
2.	Pedir números hasta que se teclee uno negativo, y mostrar cuántos números se ha introducido.
*/
#include <iostream>
using namespace std;
int main() {
    float numero, contador = 0;
    cout << "Digite un numero: ";
    cin >> numero;
    while (numero >= 0) {
        contador++;
        cout << "Digite un numero: ";
        cin >> numero;
    }
    cout << "\nNumeros digitados: " << contador << endl;
    return 0;
}
