/*
4.	Crear un programa que muestre un triángulo equilátero con dimensión variable.
*/
#include <iostream>
using namespace std;
int main() {
    int altura;
    cout << "Digita la altura del triangulo: ";
    cin >> altura;
    for (int i = 0; i <= altura; i++) {
        for (int j = altura - i; j > 0; j--) cout << " ";
        for (int j = 0; j < i; j++) cout << " *";
        cout << endl;
    }
    return 0;
}
