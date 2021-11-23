/*
2. Se requiere un programa para verificar si un ciudadano está habilitado para sufragar en las elecciones. Sólo los que tienen 18 años o mayores a 18 años pueden participar.
*/
#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout << "Digite su edad: ";
    cin >> edad;
    if (edad >= 18) {
        cout << "Esta habilitado para sufragar" << endl;
    } else {
        cout << "Dentro de " << 18 - edad << " podra sufragar " << endl;
    }

    return 0;
}
