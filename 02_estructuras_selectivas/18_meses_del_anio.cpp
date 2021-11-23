/*
18.	Realizar un programa que pida un número entero entre 1 y 7, según el número digitado por el usuario mostrar el día correspondiente.
*/
#include <iostream>
using namespace std;
int main()
{
    int dia;
    string dia_literal;
    cout << "Digite un numero: ";
    cin >> dia;
    switch (dia) {
    case 1:
        dia_literal = "Lunes";
        break;
    case 2:
        dia_literal = "Martes";
        break;
    case 3:
        dia_literal = "Miercoles";
        break;
    case 4:
        dia_literal = "Jueves";
        break;
    case 5:
        dia_literal = "Viernes";
        break;
    case 6:
        dia_literal = "Sabado";
        break;
    case 7:
        dia_literal = "Domingo";
        break;
    default:
        dia_literal = "No valido";
    }
    cout << "Dia: " << dia_literal << endl;
    return 0;
}
