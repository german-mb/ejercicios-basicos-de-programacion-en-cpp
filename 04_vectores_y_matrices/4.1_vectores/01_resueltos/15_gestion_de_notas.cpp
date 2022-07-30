/*
15.	Queremos desarrollar una aplicación que nos ayude a gestionar las notas de un centro educativo. Cada grupo está compuesto por 5 estudiantes. Se pide llenar las notas del primer, segundo y tercer trimestre de un grupo. Debemos mostrar al final: la nota media del grupo en cada trimestre, y la media del alumno que se encuentra en la posición N (N se lee por teclado).
notas de 1 al 100
*/
#include <iostream>
using namespace std;
int main() {
    float primer_trim[5], segundo_trim[5], tercer_trim[5], nota, sum_1trim = 0, sum_2trim = 0, sum_3trim = 0, prom_est_n = 0;
    int est_pos;
    cout << "Rango de notas 1 - 100" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nota estudiante " << i + 1 << ", 1er Trim: ";
        cin >> nota;
        primer_trim[i] = nota;
        sum_1trim += nota;
        cout << "Nota estudiante " << i + 1 << ", 2do Trim: ";
        cin >> nota;
        segundo_trim[i] = nota;
        sum_2trim += nota;
        cout << "Nota estudiante " << i + 1 << ", 3er Trim: ";
        cin >> nota;
        tercer_trim[i] = nota;
        sum_3trim += nota;
    }
    cout << "Ingrese un estudiante entre 1 - 5: ";
    cin >> est_pos;
    prom_est_n = (primer_trim[est_pos - 1] + segundo_trim[est_pos - 1] + tercer_trim[est_pos - 1]) / 3;
    cout << "Promedio notas 1er Trim: " << sum_1trim / 5 << endl;
    cout << "Promedio notas 2do Trim: " << sum_2trim / 5 << endl;
    cout << "Promedio notas 3er Trim: " << sum_3trim / 5 << endl;
    cout << "Nota final Est. N: " << prom_est_n << endl;
    return 0;
}
