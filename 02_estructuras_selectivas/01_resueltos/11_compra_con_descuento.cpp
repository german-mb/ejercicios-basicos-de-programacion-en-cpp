/*
11.	DimSport realiza un 20% de descuento a los clientes cuya compra supere los $300. ¿Cuál será la cantidad que pagará una persona por su compra?
*/
#include <iostream>
using namespace std;
int main() {
    float valor_compra, precio_final;
    cout << "Ingrese el total de la compra: ";
    cin >> valor_compra;
    valor_compra > 300 ? precio_final = valor_compra - valor_compra* .20 : precio_final = valor_compra;
    cout << "Monto a cancelar: $" << precio_final << endl;
    return 0;
}
