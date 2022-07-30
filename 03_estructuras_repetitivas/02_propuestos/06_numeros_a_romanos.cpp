/*
16.	Escribir un programa que capture por teclado un número entero entre 1 - 100, para luego lo convierta a números romanos.
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese un numero entero entre 1 - 3999" << endl;
    cin >> numero;
    string romano = "";
    if (numero < 4000) {
        while (numero >= 1000) {
            romano += "M";
            numero -= 1000;
        }
        if (numero >= 900) {
            romano += "CM";
            numero -= 900;
        }
        if (numero >= 500) {
            romano += "D";
            numero -= 500;
        }
        if (numero >= 400) {
            romano += "CD";
            numero -= 400;
        }
        while (numero >= 100) {
            romano += "C";
            numero -= 100;
        }
        if (numero >= 90) {
            romano += "XC";
            numero -= 90;
        }
        if (numero >= 50) {
            romano += "L";
            numero -= 50;
        }
        if (numero >= 40) {
            romano += "XL";
            numero -= 40;
        }
        while (numero >= 10) {
            romano += "X";
            numero -= 10;
        }
        if (numero >= 9) {
            romano += "IX";
            numero -= 9;
        }
        if (numero >= 5) {
            romano += "V";
            numero -= 5;
        }
        if (numero >= 4) {
            romano += "IV";
            numero -= 4;
        }
        while (numero >= 1) {
            romano += "I";
            numero -= 1;
        }
        cout << "Numero romano: " << romano << endl;
    } else {
        cout << "El valor no esta dentro del rango de 1 - 3999" << endl;
    }
    return 0;
}
