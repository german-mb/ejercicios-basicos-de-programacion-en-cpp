// 6. Hacer un programa que lea un número entero y muestre si el número es múltiplo de 10. %=0
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Digite un numero" << endl;
    cin >> numero;
    if (numero % 10 == 0) {
        cout << numero << " es multiplo de 10" << endl;
    } else {
        cout << numero << " NO es multiplo de 10" << endl;
    }
    return 0;
}
