/*
06. Se necesita elaborar un programa que solicite el número de respuestas correctas, incorrectas y en blanco de un estudiante, y muestre su puntaje final considerando que por cada respuesta correcta tendrá 3 puntos, respuestas incorrectas tendrá -1 y respuestas en blanco tendrá 0.
*/
#include <iostream>
using namespace std;
int main() {
    int resp_correctas, resp_incorrectas, resp_blanco;
    double puntaje_final;
    cout << "Ingrese el numero de respuestas correctas: ";
    cin >> resp_correctas;
    cout << "Ingrese el numero de respuestas incorrectas: ";
    cin >> resp_incorrectas;
    cout << "Ingrese el numero de respuestas en blanco: ";
    cin >> resp_blanco;
    puntaje_final = (resp_correctas * 3) - resp_incorrectas;
    cout << "La calificacion final es: " << puntaje_final << endl;
    return 0;
}
