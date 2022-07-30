/*
10.	Escribir un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcular la temperatura media del día, la temperatura más alta y la más baja.
*/
#include <iostream>
using namespace std;
int main() {
    float temperatura, temp_alta, temp_baja, temp_total;
    cout << "Temperatura a Hrs. 4:00 ";
    cin >> temperatura;
    temp_alta = temperatura;
    temp_baja = temperatura;
    for (int i = 8; i <= 24; i += 4) {
        if (temperatura > temp_alta) {
            temp_alta = temperatura;
        }
        if (temperatura < temp_baja) {
            temp_baja = temperatura;
        }
        temp_total += temperatura;
        cout << "Temperatura a Hrs. " << i << ":00 ";
        cin >> temperatura;
    }
    cout << "\nTEMPERATURA ALTA: " << temp_alta << endl;
    cout << "TEMPERATURA BAJA: " << temp_baja << endl;
    cout << "TEMPERATURA MEDIA: " << temp_total / 6 << endl;
    return 0;
}
