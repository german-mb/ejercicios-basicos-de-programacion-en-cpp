/*
14.	Imprimir un patrón de asteriscos para representar la letra Z mayúscula.
*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            (i == 0 or i == 6) and (j >= 1 && j <= 7)
                ? cout << " *"
            : i == 1 and j == 6
                ? cout << " *"
            : i == 2 and j == 5
                ? cout << " *"
            : i == 3 and j == 4
                ? cout << " *"
            : i == 4 and j == 3
                ? cout << " *"
            : i == 5 and j == 2
                ? cout << " *"
                : cout << "  ";
        }
        cout << endl;
    }
    return 0;
}