/*
2.	Crear solo los bordes de un cuadrado con dimensión variable.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Digita un numero: ";
    cin >> numero;
    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++)
            i == 0 || i == numero - 1 || j == 0 || j == numero - 1
                ? cout << " *"
                : cout << "  ";
        cout << endl;
    }
    return 0;
}
