/*
23.	Dado un número total de horas, devuelve el número de semanas, días y horas equivalentes. Por ejemplo, dado un total de 1000 horas debe mostrar 5 semanas, 6 días y 16 horas.
*/
#include <iostream>
using namespace std;
int main()
{
    int horas_ingresadas, semanas, dias, horas;
    cout << "Ingrese el numero de horas: ";
    cin >> horas_ingresadas;
    semanas = horas_ingresadas / 168;
    dias = horas_ingresadas % 168 / 24;
    horas = horas_ingresadas % 24;
    cout << "Semanas: " << semanas << "\nDias: " << dias << "\nHoras: " << horas << endl;

    return 0;
}
