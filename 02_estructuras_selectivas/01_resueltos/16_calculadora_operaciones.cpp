/*
16.	Construir un programa que simule el funcionamiento de una calculadora que puede realizar las cuatro operaciones aritméticas básicas (suma, resta, multiplicación y división) con valores numéricos enteros. El usuario debe especificar la operación con el primer carácter de primer parámetro de la línea de comandos: S o s para la suma, R o r para la resta, M o m para la multiplicación y D o d para la división.
*/
#include <iostream>
using namespace std;
int main() {
    int a, b;
    char operacion;
    cout << "Digite dos valores: " << endl;
    cin >> a >> b;
    cout << "Digite la opcion: \n\ts o S: Sumar\n\tr o R: Restar\n\tm o M: Multiplicar\n\td o D: Dividir" << endl;
    cin >> operacion;
    switch (tolower(operacion)) {
        case 's':
            cout << "Suma: " << a << " + " << b << " = " << a + b << endl;
            break;
        case 'r':
            cout << "Resta: " << a << " - " << b << " = " << a - b << endl;
            break;
        case 'm':
            cout << "Multiplicacion: " << a << " * " << b << " = " << a * b << endl;
            break;
        case 'd':
            if (b == 0) {
                cout << "No se pudo efectuar la division" << endl;
            } else {
                cout << "Division: " << a << " / " << b << " = " << a / b << endl;
            }
            break;
        default:
            cout << "Opcion NO valida" << endl;
            break;
    }
    return 0;
}
