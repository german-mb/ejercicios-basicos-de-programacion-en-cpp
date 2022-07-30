/*
20.	Crear un programa que solicite al usuario un número N y calcular N + NN + NNN.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, suma;
    string strNum1, strNum2, strNum3;
    cout << "Ingrese un numero: ";
    cin >> num1;
    strNum1 = to_string(num1);
    strNum2 = strNum1 + strNum1;
    strNum3 = strNum1 + strNum1 + strNum1;
    suma = num1 + stoi(strNum2) + stoi(strNum3);
    cout << strNum1 << " + "; 
    cout<< strNum2 << " + "; 
    cout << strNum3 << " = " << suma << endl;
    return 0;
}
