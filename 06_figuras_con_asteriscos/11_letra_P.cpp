/*
11.	Imprimir un patrón de asteriscos para representar la letra P mayúscula.
*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            (i == 0 || i == 3) && (j >= 1 && j <= 4)
                ? cout << " *"
            : (i == 1 || i == 2) && (j == 1 || j == 5)
                ? cout << " *"
            : (i >= 4 && i <= 6) && j == 1
                ? cout << " *"
                : cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
