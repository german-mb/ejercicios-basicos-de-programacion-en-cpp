/*
10.	Realizar un programa que determine si una palabra es palíndroma o no.
*/
#include <string.h>

#include <iostream>
using namespace std;
int main() {
    char palabra[50];
    cout << "Igrese una palabra: ";
    cin >> palabra;
    string str = palabra;
    strrev(palabra);
    cout << str << endl;
    cout << palabra << endl;
    str == palabra
        ? cout << "ES PALINDROMA"
        : cout << "NO ES PALINDROMA" << endl;
    return 0;
}
