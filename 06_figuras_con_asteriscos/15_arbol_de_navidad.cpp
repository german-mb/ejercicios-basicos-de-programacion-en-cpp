/*
15.	Crear un programa para mostrar por consola un árbol de navidad.
*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 3; i++) {
        cout << endl;
        for (int j = 15 - i; j > 0; j--) cout << " ";
        for (int j = 0; j < i; j++) cout << " *";
    }
    for (int i = 0; i <= 15; i++) {
        for (int j = 15 - i; j > 0; j--) cout << " ";
        for (int j = 0; j < i; j++) cout << " *";
        cout << endl;
    }
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j < 15; j++) {
            j >= 6 && j <= 8
                ? cout << " *"
                : cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
