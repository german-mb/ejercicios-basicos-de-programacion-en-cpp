/*
23.	Escriba un programa que muestre todas las posibles combinaciones al momento de lanzar 2 dados de 6 caras.
*/
#include <iostream>
using namespace std;
int main() {
    cout << "\nPOSIBLES COMBINACIONES" << endl;
    int combinaciones = 0;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            combinaciones++;
            cout << "Combinacion " << combinaciones << ": " << i << " " << j << endl;
        }
    }
    return 0;
}
