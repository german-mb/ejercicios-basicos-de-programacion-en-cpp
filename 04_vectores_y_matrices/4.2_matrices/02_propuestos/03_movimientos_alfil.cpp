/*
3.	Escribe un programa que, dada una posición en un tablero de ajedrez, nos diga a qué casillas podría moverse un alfil que se encuentra en esa posición. Como se indica en la figura, el alfil se mueve siempre en diagonal. El tablero cuenta con 64 casillas. Las columnas se indican con las letras de la “a” a la “h” y las filas se indican del 1 al 8.
*/
#include <iostream>
using namespace std;
int main() {
    int dimen = 8, f, c, i, j, equival_f;
    int tablero[dimen][dimen];
    for (i = 0; i < dimen; i++) {
        for (j = 0; j < dimen; j++)
            tablero[i][j] = 0;
    }
    cout << "Digita una posicion [1 - 8]" << endl;
    cout << "Fila: ";
    cin >> f;
    f--;
    cout << "Columna: ";
    cin >> c;
    c--;
    if ((f < 0 || f > 7) || (c < 0 || c > 7)) {
        cout << "Los valores ingresados estan fuera de rango" << endl;
    } else {
        cout << "\n\tMOVIMIENTOS DEL ALFIL" << endl;
        cout << "Posicion inicial: ";
        cout << (c == 0 ? "A" : c == 1 ? "B"
                            : c == 2   ? "C"
                            : c == 3   ? "D"
                            : c == 4   ? "E"
                            : c == 5   ? "F"
                            : c == 6   ? "G"
                                       : "H");
        for (int i = 1; i <= dimen; i++)
            if ((dimen - i) == f) equival_f = dimen - f;
        cout << equival_f << endl;
        // Movimientos hacia la derecha y abajo
        for (i = 0; f + i < 8 && c + i < 8; i++)
            tablero[f + i][c + i] = 1;
        // Movimientos hacia la derecha y arriba
        for (i = 0; f - i >= 0 && c + i < 8; i++)
            tablero[f - i][c + i] = 1;
        // Movimientos hacia la izquierda y arriba
        for (i = 0; f - i >= 0 && c - i >= 0; i++)
            tablero[f - i][c - i] = 1;
        // Movimientos hacia la izquierda y abajo
        for (i = 0; f + i < 8 && c - i >= 0; i++)
            tablero[f + i][c - i] = 1;

        cout << "   ";
        for (i = 0; i < 8; i++) {
            cout << (i == 0
                         ? "A "
                     : i == 1 ? "B "
                     : i == 2 ? "C "
                     : i == 3 ? "D "
                     : i == 4 ? "E "
                     : i == 5 ? "F "
                     : i == 6 ? "G "
                              : "H ");
        }
        cout << endl;
        cout << "  ";
        for (i = 1; i < 9; i++) cout << "--";
        for (i = 0; i < dimen; i++) {
            cout << endl;
            cout << (i == 0
                         ? "8| "
                     : i == 1 ? "7| "
                     : i == 2 ? "6| "
                     : i == 3 ? "5| "
                     : i == 4 ? "4| "
                     : i == 5 ? "3| "
                     : i == 6 ? "2| "
                              : "1| ");
            for (j = 0; j < dimen; j++) {
                cout << tablero[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
