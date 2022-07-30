/*
30.	Crear un programa que pida al usuario un número entero positivo; luego el programa debe mostrar el número de líneas que ingresó el usuario, cada línea debe contener un número aleatorio de asteriscos con el rango de 1 al numero ingresado por el usuario. Vea la siguiente imagen:
*/
#include <time.h>
#include <iostream>
using namespace std;
int main() {
    int aleatorio, numero;
    cout << "Digite un numero entero positivo: ";
    cin >> numero;
    if (numero > 0) {
        srand(time(NULL));
        for (int i = 0; i < numero; i++) {
            aleatorio = 1 + rand() % numero;
            for (int j = 0; j < aleatorio; j++) {
                cout << "*";
            }
            cout << " " << aleatorio << endl;
        }
    } else {
        cout << "Numero no valido" << endl;
    }
    return 0;
}
