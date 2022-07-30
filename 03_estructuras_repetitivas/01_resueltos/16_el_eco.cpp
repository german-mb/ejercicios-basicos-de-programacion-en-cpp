/*
6.	Crear un programa que muestre el eco de todo lo que el usuario introduzca hasta que el usuario escriba “salir” que terminará.
*/
#include <iostream>
using namespace std;
int main() {
    bool bandera = true;
    char palabra[100];
    string str;
    while (bandera) {
        cout << "Escribe algo: ";
        gets(palabra);
        str = palabra;
        if (str == "salir" || str == "SALIR") {
            bandera = false;
        } else {
            cout << palabra << endl;
            cout << palabra << endl;
        }
    }
    return 0;
}
