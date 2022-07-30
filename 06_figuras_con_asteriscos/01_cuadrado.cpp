/*
1.	Crear un cuadrado de dimensión variable.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Digita un numero: ";
    cin >> numero;
    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++)
            cout << " *";
        cout << endl;
    }
    return 0;
}
