/*
19.	Escribir un programa que emule un inicio de sesión de un sistema,
almacenando usuario y contraseña.
*/
#include <unistd.h>
#include <iostream>
using namespace std;
int main() {
    const string USERNAME = "lilian", PASSWORD = "li#4pwd";
    string user, pwd;
    cout << "\tINICIO DE SESION" << endl;
    cout << "Ingrese el nombre: ";
    cin >> user;
    cout << "Ingrese la clave: ";
    cin >> pwd;
    if (user != USERNAME) {
        cout << "Usuario incorrecto" << endl;
    } else if (pwd != PASSWORD) {
        cout << "Clave incorrecto" << endl;
    } else {
        cout << "Iniciando sesion... " << endl;
        sleep(2);
        cout << "Bienvenido al programa...\n"
             << endl;
    }
    return 0;
}
