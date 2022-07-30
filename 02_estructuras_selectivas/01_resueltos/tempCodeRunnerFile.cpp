#include <iostream>
using namespace std;
int main() {
    int dia, mes;
    string estacion = "LA FECHA INGRESADA NO ES VALIDA";
    cout << "Digite el dia entre 1 - 30: ";
    cin >> dia;
    cout << "Digite los meses entre 1 - 12: ";
    cin >> mes;
    (dia >= 21 && dia <= 30 && (mes >= 3 && mes < 6)) || (dia < 21 && (mes > 3 && mes <= 6))
        ? estacion = "OTONIO"
    : (dia >= 21 && dia <= 30 && mes >= 6 && mes < 9) || (dia < 21 && (mes > 6 && mes <= 9))
        ? estacion = "INVIERNO"
    : (dia >= 21 && dia <= 30 && (mes >= 9 && mes < 12)) || (dia < 21 && (mes > 9 && mes <= 12))
        ? estacion = "PRIMAVERA"
    : (dia >= 21 && dia <= 30 && mes == 12 && mes == 12) ||
            (dia < 21 && mes <= 3 || dia >= 21 && dia <= 30 && mes < 3)
        ? estacion = "VERANO"
        : "";
    cout << estacion << endl;
    return 0;
}