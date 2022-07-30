/*
5.	Crear un rombo de asteriscos con dimension variable.
*/
#include <iostream>
using namespace std;
int main() {
    int lado;
    cout << "Digita el lado del rombo: ";
    cin >> lado;
    for (int i = 0; i <= lado; i++) {
        for (int j = lado - i; j > 0; j--) cout << " ";
        for (int j = 0; j < i; j++) cout << " *";
        cout << endl;
    }
    for (int i = 0; i <= lado; i++) {
        for (int j = 0; j <= i; j++) cout << " ";
        for (int j = lado - i - 1; j > 0; j--) cout << " *";
        cout << endl;
    }
    return 0;
}
