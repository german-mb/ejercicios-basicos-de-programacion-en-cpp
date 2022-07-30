/*
17.	Pedir una nota entre 0 y 100, mostrarla con las siguientes observaciones: 
•	0 – 50 necesita apoyo, 
•	51 – 60 suficiente, 
•	61 – 75 bueno, 
•	76 – 95 notable, 
•	96 – 100 excelente.

*/
#include <iostream>
using namespace std;
int main() {
    float calificacion;
    string observacion = "Calificacion fuera de rango";
    cout << "Ingrese la calificacion: ";
    cin >> calificacion;
    if (calificacion >= 0 && calificacion <= 50)
        observacion = "Necesita apoyo";
    if (calificacion >= 51 && calificacion <= 60)
        observacion = "Suficiente";
    if (calificacion >= 61 && calificacion <= 75)
        observacion = "Bueno";
    if (calificacion >= 76 && calificacion <= 95)
        observacion = "Notable";
    if (calificacion >= 96 && calificacion <= 100)
        observacion = "Excelente";
    cout << "Observacion: " << observacion << endl;
    return 0;
}
