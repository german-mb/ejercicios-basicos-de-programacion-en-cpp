/*
16.	Elaborar un programa que permita ingresar el número de partidos ganados, perdidos y empatados, por el club Bolívar en el torneo apertura, se debe de mostrar su puntaje total, teniendo en cuenta que por cada partido ganado obtendrá 3 puntos, empatado 1 punto y perdido 0 puntos.
*/
#include <iostream>
using namespace std;
int main()
{
    int ganados, perdidos, empatados, total_partidos, puntaje;
    cout << "Ingrese partidos ganados: ";
    cin >> ganados;
    cout << "Ingrese partidos empatados: ";
    cin >> empatados;
    cout << "Ingrese partidos perdidos: ";
    cin >> perdidos;
    puntaje = (ganados * 3) + empatados;
    total_partidos = ganados + empatados + perdidos;
    cout << "Puntaje: " << puntaje << endl;
    cout << "Total partidos: " << total_partidos << endl;
    cout << "Ganados: " << ganados << endl;
    cout << "Empatados: " << empatados << endl;
    cout << "Perdidos: " << perdidos << endl;
    return 0;
}
