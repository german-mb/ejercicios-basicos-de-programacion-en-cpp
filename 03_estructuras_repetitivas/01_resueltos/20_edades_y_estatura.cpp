/*
20.	Dadas las edades y alturas de 5 estudiantes, mostrar la edad y la estatura media, la cantidad de estudiantes mayores de 18 años, y la cantidad de estudiantes que miden más de 1.75.
*/
#include <iostream>
using namespace std;
int main() {
    float estatura, suma_est = 0, suma_edad = 0;
    int edad, mayores = 0, altos = 0;
    for (int i = 0; i < 5; i++) {
        cout << "\tEstudiante " << i + 1 << endl;
        cout << "Edad: ";
        cin >> edad;
        cout << "Estatura en metros: ";
        cin >> estatura;
        if (edad > 18) mayores++;
        if (estatura > 1.75) altos++;
        suma_est += estatura;
        suma_edad += edad;
    }
    cout << "\nMedia de estaturas: " << suma_est / 5 << endl;
    cout << "Media de edades: " << suma_edad / 5 << endl;
    cout << "Mayores a 18 a: " << mayores << endl;
    cout << "Mas altos a 1.75 m: " << altos << endl;
    return 0;
}
