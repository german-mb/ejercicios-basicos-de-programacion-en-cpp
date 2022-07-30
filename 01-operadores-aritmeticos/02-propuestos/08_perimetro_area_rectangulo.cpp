/*
8.	Construya un programa tal que, dado como datos la base y la altura de un rectángulo, calcule el perímetro y la superficie de este.
*/
#include <iostream>
using namespace std;
int main() {
    float base, altura, perimetro, superficie;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    perimetro = 2 * (base + altura);
    superficie = base * altura;
    cout << "Perimetro: " << perimetro << "\nSubficie: " << superficie << endl;
    return 0;
}
