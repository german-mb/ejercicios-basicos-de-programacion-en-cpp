/*
7.	Crear un programa que pida al usuario un número entero y muestre por pantalla un triángulo rectángulo. Si se ingresa el número 9 debe mostrar la siguiente figura:

1
3 1
5 3 1
7 5 3 1
9 7 5 3 1
*/
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Digita un numero impar: ";
    cin >> num;
    if (num % 2 != 0) {
        for (int i = 1; i <= num; i += 2) {
            for (int j = i; j >= 1; j -= 2) {
                cout << j << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Debe ingrsar un numero impar" << endl;
    }
    return 0;
}
