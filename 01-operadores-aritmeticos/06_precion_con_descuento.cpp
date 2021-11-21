/*
06. Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y muestre el precio con descuento. Por ejemplo, si el precio que introduce el usuario es 300 y el descuento 20, el programa mostrará el precio final con descuento es de 240.
*/
#include <iostream>
using namespace std;
int main()
{
    double precio, descuento, precio_final;
    cout << "Ingrese el precio => ";
    cin >> precio;
    cout << "Ingrese el descuento => ";
    cin >> descuento;
    precio_final = precio - (precio * (descuento / 100));
    cout << "El precio con descuento es: " << precio_final << endl;
    return 0;
}
