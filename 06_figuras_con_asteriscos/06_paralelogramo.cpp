/*
6.	Crear un paralelogramo
*/
#include <iostream>
using namespace std;
int main() {
    int base, altura;
    cout << "Digita la base del paralelogramo: ";
    cin >> base;
    cout << "Digita la altura del paralelogramo: ";
    cin >> altura;
    for (int i = 0; i < altura; i++) {
        for (int j = altura - i; j > 0; j--) cout << " ";
        for (int j = 0; j < base; j++) cout << " *";
        cout << endl;
    }
    return 0;
}