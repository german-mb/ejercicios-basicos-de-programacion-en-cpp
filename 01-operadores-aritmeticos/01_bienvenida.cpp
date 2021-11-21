// 01. Crear un programa que pida un nombre y muestre por pantalla: “Hola 'nombre', bienvenido al curso”.
#include <iostream>
using namespace std;
int main()
{
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Hola " << nombre << ", bienvenido al curso" << endl;
    return 0;
}
