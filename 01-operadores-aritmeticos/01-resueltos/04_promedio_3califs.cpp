/*
04. Crear un programa que calcule el promedio de tres calificaciones de un estudiante.
Escala de calificación de 1 - 100
*/
#include <iostream>
using namespace std;
int main() {
    double nota1, nota2, nota3, promedio;
    cout << "Ingrese las 3 calificaciones: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    promedio = (nota1 + nota2 + nota3) / 3;
    cout.precision(2);
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
