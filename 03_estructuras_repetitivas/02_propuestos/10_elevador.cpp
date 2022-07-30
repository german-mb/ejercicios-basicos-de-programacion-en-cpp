/*
10.	Elabora un programa que simule la operación de un elevador de 10 pisos, en donde el piso mínimo es 1 y el máximo el piso 15, al inicio del programa el elevador se debe de trasladar a un piso de manera aleatoria. El programa deberá solicitar al usuario que indique el piso en donde se encuentra, posteriormente el programa deberá indicar los pisos que va recorriendo al llegar al piso donde se encuentra el usuario deberá abrir la puerta, luego pedirá al usuario a que piso se quiere dirigir, una vez ingrese un destino el programa cerrará la puerta y mostrará los pisos que se va recorriendo hasta llegar al piso indicado por el usuario, abrirá las puertas e indicará que ya está en el piso solicitado. El programa deberá continuar al menos que el usuario proporcione el piso 0.
*/
#include <time.h>

#include <iostream>
using namespace std;
int main() {
    int piso, ir_piso;
    cout << "\tEL ELEVADOR ESTA A SU SERVICIO" << endl;
    srand(time(NULL));
    piso = 1 + rand() % 15;
    ir_piso = piso;
    while (piso != 0) {
        cout << "PISO ||> " << piso << endl;
        cout << "Piso donde se encuentra: ";
        cin >> ir_piso;
        if (piso >= ir_piso && ir_piso > 0 && ir_piso <= 15) {
            for (int i = piso; i >= ir_piso; i--) {
                cout << "PISO => " << i << endl;
            }
            cout << "PISO DONDE QUIERES IR: ";
            piso = ir_piso;
            cin >> ir_piso;
            if (piso >= ir_piso && ir_piso > 0 && ir_piso <= 15) {
                for (int i = piso; i >= ir_piso; i--) {
                    cout << "PISO => " << i << endl;
                }
                piso = ir_piso;
                cout << "LLEGASTE AL PISO " << piso << endl;
            } else if (ir_piso <= 15) {
                for (int i = piso; i <= ir_piso; i++) {
                    cout << "PISO => " << i << endl;
                }
                piso = ir_piso;
                cout << "LLEGASTE AL PISO " << piso << endl;
            }

        } else if (ir_piso <= 15 && ir_piso > 0) {
            for (int i = piso; i <= ir_piso; i++) {
                cout << "PISO => " << i << endl;
            }
            cout << "PISO DONDE QUIERES IR: ";
            piso = ir_piso;
            cin >> ir_piso;
            if (piso >= ir_piso && ir_piso > 0 && ir_piso <= 15) {
                for (int i = piso; i >= ir_piso; i--) {
                    cout << "PISO => " << i << endl;
                }
                piso = ir_piso;
                cout << "LLEGASTE AL PISO " << piso << endl;
            } else if (ir_piso <= 15) {
                for (int i = piso; i <= ir_piso; i++) {
                    cout << "PISO => " << i << endl;
                }
                piso = ir_piso;
                cout << "LLEGASTE AL PISO " << piso << endl;
            }
        }
        piso = ir_piso;
    }
    cout << "\tGRACIAS POR USAR EL ELEVADOR" << endl;
    return 0;
}
