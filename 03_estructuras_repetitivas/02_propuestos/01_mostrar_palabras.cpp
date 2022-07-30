/*
1.	Crear un programa que pida al usuario una palabra y la muestre por pantalla 10 veces.
*/
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    string palabra;
    cout << "Escriba una palabra: ";
    cin >> palabra;
    while (i <= 10) {
        cout << i << ".\t" << palabra << endl;
        i++;
    }
    return 0;
}
