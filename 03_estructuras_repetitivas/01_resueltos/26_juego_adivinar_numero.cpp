/*
26.	Realizar un programa que solicite al usuario un número entero entre 1 – 100. El programa debe generar un número aleatorio en ese mismo rango, e indicarle al usuario si el número que digitó es menor o mayor al número aleatorio, así hasta que lo adivine; y por último mostrar el número de intentos.
*/
#include <time.h>
#include <iostream>
using namespace std;
int main() {
    string titulo = "\n\tADIVINA EL NUMERO ENTRE 1 - 100\n";
    int aleatorio, numero, intentos = 0;
    cout << titulo << endl;
    srand(time(NULL));
    aleatorio = 1 + rand() % 100;
    while (numero != aleatorio) {
        intentos++;
        cout << "Digita un numero: ";
        cin >> numero;
        if (numero == aleatorio) {
            cout << "\nFELICIDADES LOGRASTE ADIVINAR!!" << endl;
            cout << "INTENTOS: " << intentos << endl;
        } else if (numero > aleatorio) {
            cout << "Es menor" << endl;
        } else {
            cout << "Es mayor" << endl;
        }
    }
    return 0;
}
