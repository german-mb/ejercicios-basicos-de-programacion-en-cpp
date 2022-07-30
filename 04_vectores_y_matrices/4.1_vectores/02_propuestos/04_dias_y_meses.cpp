/*
4.	Crea un programa que pida un número de 1 a 12. Según el número que se ingrese debe mostrar el nombre y los días que tiene dicho mes.
*/
#include <iostream>
using namespace std;
int main() {
    string meses[] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre"};
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, numero;
    cout << "Digite un numero entre [1 - 12]: ";
    cin >> numero;
    if (numero < 1 || numero > 12) {
        cout << "Valor fuera de rango" << endl;
    } else {
        cout << "Mes: " << meses[numero - 1] << endl;
        cout << "Dias: " << dias[numero - 1] << endl;
    }
    return 0;
}
