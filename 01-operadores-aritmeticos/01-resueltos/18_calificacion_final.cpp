/*
18.	La calificación final de un estudiante de informática se calcula con base a las calificaciones de cuatro aspectos de su rendimiento académico: participación, primer examen parcial, segundo examen parcial y examen final. Sabiendo que las calificaciones anteriores entran a la calificación final con ponderaciones del 10%, 25%, 25%, y 40%. Hacer un programa que calcule e imprima la calificación final obtenida por un estudiante.

Calificacion de 1 - 100
*/
#include <iostream>
using namespace std;
int main() {
    float participacion, parcial1, parcial2, examen_final, calificacion_final;
    cout << "Nota participacion: ";
    cin >> participacion;
    cout << "Nota parcial 1: ";
    cin >> parcial1;
    cout << "Nota parcial 2: ";
    cin >> parcial2;
    cout << "Nota examen_final: ";
    cin >> examen_final;
    calificacion_final = (participacion * .10) + (parcial1 * .25) + (parcial2 * .25) + (examen_final * .40);
    cout << "La nota final es: " << calificacion_final << endl;
    return 0;
}
