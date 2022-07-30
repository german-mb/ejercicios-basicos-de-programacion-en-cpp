/*
4.	Crear un programa que muestre la tabla de multiplicar del 1 al 10.
*/
#include <iostream>
using namespace std;
int main(int) {
    for (int i = 1; i <= 10; i++) {
        cout << "\n\tTABLA DEL " << i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
    return 0;
}
