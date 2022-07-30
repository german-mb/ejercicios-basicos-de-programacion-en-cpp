/*
4.	Leer por teclado la nota de N cantidad de estudiantes de una clase; calcular y mostrar la nota media del grupo y las notas superiores a la media.
*/
#include <iostream>
using namespace std;
int main() {
    int estudiantes;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> estudiantes;
    float arreglo[estudiantes], nota, media = 0;
    for (int i = 0; i < estudiantes; i++) {
        cout << "Nota, estudiante " << i + 1 << ": ";
        cin >> nota;
        arreglo[i] = nota;
        media += arreglo[i];
    }
    media /= estudiantes;
    cout << "Media de calificaciones: " << media << endl;
    cout << "Mayores a la media: ";
    for (int i = 0; i < estudiantes; i++) {
        if (arreglo[i] > media)
            cout << arreglo[i] << " ";
    }
    return 0;
}
