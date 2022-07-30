/*
12.	Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera: Si trabaja 40 horas o menos se le paga $16 por hora, Si trabaja más de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.
*/
#include <iostream>
using namespace std;
int main() {
    int horas_semanales, pago_semanal;
    cout << "Digite las horas semanales trabajadas: ";
    cin >> horas_semanales;
    if (horas_semanales <= 40) {
        pago_semanal = horas_semanales * 16;
    } else {
        pago_semanal = 640 + ((horas_semanales - 40) * 20);
    }
    cout << "Salario semanal: $" << pago_semanal << endl;
    return 0;
}
