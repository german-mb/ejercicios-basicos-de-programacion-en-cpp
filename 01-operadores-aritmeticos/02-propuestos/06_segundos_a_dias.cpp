/*
06.	Escriba un programa que pida al usuario que introduzca n segundos, y éste calcule el número de días, horas, minutos y segundos que son.
*/
#include <iostream>
using namespace std;
int main() {
    int segundos_totales, dias, horas, minutos, segundos;
    cout << "Ingrese el total de segundos: ";
    cin >> segundos_totales;
    dias = segundos_totales / 86400;
    horas = segundos_totales % 86400 / 3600;
    minutos = segundos_totales % 86400 % 3600 / 60;
    segundos = segundos_totales % 86400 % 3600 % 60;
    cout << "Dias: " << dias << "\nHoras: " << horas << "\nMinutos: " << minutos << "\nSegundos: " << segundos << endl;
    return 0;
}
