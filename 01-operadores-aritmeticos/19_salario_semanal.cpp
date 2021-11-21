/*
19.	Hacer un programa que calcule e imprima el salario semanal de un empleado a partir de sus horas semanales trabajadas y de su salario por hora.
1 hora trabajada = Bs 25
*/
#include <iostream>
using namespace std;
int main()
{
    const int SALARIO_HORA = 25;
    float horas_semanal, salario_semanal = 0;
    cout << "Ingrese las horas trajadas: ";
    cin >> horas_semanal;
    salario_semanal = horas_semanal * SALARIO_HORA;
    cout << "El salario es: " << salario_semanal << endl;
    return 0;
}
