/*
6.	Leer el nombre y sueldo de 5 empleados y mostrar el nombre y sueldo del empleado que más gana.
*/
#include <iostream>
using namespace std;
int main() {
    float sueldo, sueldos[5], sueldo_mayor = 0;
    int pos_mayor = 0;
    string nombre, nombres[5];
    for (int i = 0; i < 5; i++) {
        cout << "Empleado " << i + 1 << " , nombre: ";
        cin >> nombre;
        cout << "Empleado " << i + 1 << " , sueldo: $";
        cin >> sueldo;
        nombres[i] = nombre;
        sueldos[i] = sueldo;
        if (sueldo > sueldo_mayor) {
            sueldo_mayor = sueldo;
            pos_mayor = i;
        }
    }
    cout << "\tMAYOR SALARIO" << endl;
    cout << "NOMBRE: " << nombres[pos_mayor] << endl;
    cout << "SALARIO: $" << sueldos[pos_mayor] << endl;
    return 0;
}
