/*
3.	Crear un programa que pida por teclado 10 sueldos. Mostrar la suma y cuántos hay mayores de $1000.
*/
#include <iostream>
using namespace std;
int main() {
    float salario, suma = 0, mayores = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un salario " << i + 1 << ": $";
        cin >>
            salario;
        suma += salario;
        if (salario > 1000) {
            mayores++;
        }
    }
    cout << "\nSuma de salarios: " << suma << "\nMayores a $1000: " << mayores << endl;
    return 0;
}
