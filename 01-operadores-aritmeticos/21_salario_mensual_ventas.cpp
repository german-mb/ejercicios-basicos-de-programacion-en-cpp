/*
21.	Una compañía de venta de carros usados, paga a su personal de ventas un salario de $1000 mensuales, más una comisión de $150 por cada carro vendido. Hacer un programa que calcule e imprima el salario mensual de un vendedor.
*/
#include <iostream>
using namespace std;
int main()
{
    const int SALARIO = 1000;
    int carros_vendidos, salario_mensual;
    cout << "Ingrese la cantidad de carros vendidos: ";
    cin >> carros_vendidos;
    salario_mensual = SALARIO + (carros_vendidos * 150);
    cout << "El salario mensual es: $" << salario_mensual << endl;
    return 0;
}
