/*
2.	Programa, que dado dos números “a” y “b”, muestre sus valores en orden de menor a mayor.
*/
#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Ingrese dos numeros" << endl;
    cin >> a >> b;
    if (a == b) {
        cout << "Son iguales" << endl;
    } else if (a > b) {
        cout << b << " " << a << endl;
    } else {
        cout << a << " " << b << endl;
    }
    return 0;
}
