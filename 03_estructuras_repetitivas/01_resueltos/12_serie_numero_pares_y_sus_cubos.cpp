/*
12.	Escribir un programa que imprima los 10 primeros números pares comenzando en 2 e imprima también sus respectivos cubos. Por ejemplo: 2 – 8; 4 – 64; 6 – 216 …
*/

#include <iostream>
using namespace std;
int main() {
    for (int i = 2; i <= 20; i += 2) {
        cout << i << "   " << i * i * i << endl;
    }
    return 0;
}
