#include <iostream>
using namespace std;
int main() {
    int horas_ingresadas, semanas, dias, horas;
    cout << "Ingrese el numero de horas: ";
    cin >> horas_ingresadas;
    semanas = horas_ingresadas / 168;
    dias = horas_ingresadas % 168 / 24;
    horas = horas_ingresadas % 24;
    cout << "Semanas: " << semanas;
    cout << "\nDias: " << dias;
    cout << "\nHoras: " << horas << endl;
    return 0;
}