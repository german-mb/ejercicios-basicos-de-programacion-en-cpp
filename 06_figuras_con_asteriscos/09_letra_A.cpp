/*
9.	Imprimir un patrón de asteriscos para representar la letra A mayúscula.
*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            i == 0 && (j >= 2 && j <= 4)
                ? cout << " *"
            : (i == 1 || i == 2 || i >= 4) && (j == 1 || j == 5)
                ? cout << " *"
            : i == 3 && (j >= 1 && j <= 5)
                ? cout << " *"
                : cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
