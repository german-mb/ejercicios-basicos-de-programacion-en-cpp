/*
12.	Imprimir un patrón de asteriscos para representar la letra U mayúscula.
*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            (i >= 1 && i <= 5) and (j == 1 or j == 5)
                ? cout << " *"
            : i == 6 and (j >= 2 && j <= 4)
                ? cout << " *"
                : cout << "  ";
        }
        cout << endl;
    }
    return 0;
}