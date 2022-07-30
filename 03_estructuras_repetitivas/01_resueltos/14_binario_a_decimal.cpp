/*
14.	Realizar un programa para convertir de binario a número decimal.
*/
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    long binario, decimal = 0, i = 0, temp;
    cout << "Ingrese un numero binario: ";
    cin >> binario;
    cout << "Binario: " << binario << endl;
    while (binario != 0) {
        temp = binario % 10;
        binario /= 10;
        decimal += temp * pow(2, i);
        i++;
    }
    cout << "Decimal: " << decimal << endl;
    return 0;
}
