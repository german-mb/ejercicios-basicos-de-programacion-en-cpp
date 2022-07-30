/*
8.	Hacer un programa que simule un cajero automático con saldo inicial de $1000, con el siguiente menú de opciones: 1. Ingresar dinero a la cuenta. 2. Retirar dinero de la cuenta. 3. Salir. El cajero no puede tener menos de $100 en la cuenta.
*/
#include <iostream>
using namespace std;
int main() {
    int saldo = 1000, movimiento, opcion;
    do {
        cout << "\n\t\tCAJERO AUTOMATICO" << endl;
        cout << "\tSALDO ACTUAL $" << saldo << "\n\t1. DEPOSITAR\n\t2. RETIRAR\n\t3. SALIR\n"
             << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        //system("cls");
        switch (opcion) {
            case 1:
                cout << "DIGITE EL MONTO A DEPOSITAR: ";
                cin >> movimiento;
                if (movimiento > 0) {
                    saldo += movimiento;
                    cout << "Deposito exitoso";
                } else {
                    cout << "El monto a depositar tiene que ser mayor a cero" << endl;
                }
                break;
            case 2:
                cout << "DIGITE EL MONTO A RETIRAR: ";
                cin >> movimiento;
                if (movimiento > 0) {
                    if (saldo - movimiento >= 100) {
                        saldo -= movimiento;
                        cout << "Retiro exitoso" << endl;
                    } else {
                        cout << "No tiene suficiente SALDO para completar esta accion" << endl;
                    }
                } else {
                    cout << "El monto a retirar tiene que ser mayor a cero" << endl;
                }
                break;
            case 3:
                break;
            default:
                cout << "OPCION NO VALIDA" << endl;
                break;
        }
    } while (opcion != 3);
    cout << "\tGRACIAS POR SU PREFERENCIA" << endl;
    return 0;
}
