/*
15.	Se les dará un bono por antigüedad a los empleados de una tienda. Si tiene 1 año se beneficiará de $100, si tiene 2 años $200 y así sucesivamente hasta 5 años. Para los que tengan más de 5 años el bono será de $1000. Realice un algoritmo que permita determinar el bono que recibirá un trabajador.
*/
#include <iostream>
using namespace std;
int main() {
    int antiguedad, bono = 100;
    cout << "Ingrese la antiguedad: ";
    cin >> antiguedad;
    if (antiguedad >= 1) {
        if (antiguedad < 6) {
            bono *= antiguedad;
        } else {
            bono = 1000;
        }
        cout << "Bono segun antiguedad: $" << bono << endl;
    } else {
        cout << "No es benificiario del bono" << endl;
    }
    return 0;
}
