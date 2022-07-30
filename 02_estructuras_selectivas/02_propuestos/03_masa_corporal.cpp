/*
3.	Crear un programa para calcular el índice de masa corporal (IMC), ingresar la talla en metros y peso en kilogramos, mostrar el resultado con la correspondiente observación: 
•	Con bajo peso           	< 18.5
•	Con peso saludable	18.5 - 24.9
•	Con sobrepeso         	 25.0 - 29.9
•	Con obesidad I          	30.0 - 34.9
•	Con obesidad II         	35.0 - 39.9
•	Con obesidad III        	> 39.9

imc = peso_kg / (estatura_mts)^2
*/
#include <iostream>
using namespace std;
int main() {
    float peso, talla, imc;
    cout << "Ingrese su talla en metros: ";
    cin >> talla;
    cout << "Ingrese su peso en kilos: ";
    cin >> peso;
    imc = peso / (talla * talla);
    cout.precision(3);
    cout << "\nIMC " << imc << endl;
    if (imc < 18.5) {
        cout << "Con bajo peso" << endl;
    } else if (imc > 18.5 && imc <= 24.9) {
        cout << "Con peso saludable" << endl;
    } else if (imc >= 25 && imc <= 29.9) {
        cout << "Con sobrepeso" << endl;
    } else if (imc >= 30 && imc <= 34.9) {
        cout << "Con obesidad I" << endl;
    } else if (imc >= 35 && imc <= 39.9) {
        cout << "Con obesidad II" << endl;
    } else {
        cout << "Con obesidad III" << endl;
    }
    return 0;
}
