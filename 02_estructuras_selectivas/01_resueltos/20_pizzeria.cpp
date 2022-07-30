/*
20.	La pizzería Bella Rita ofrece pizzas vegetarianas y no vegetarianas a
sus clientes. Los ingredientes para cada tipo de pizza aparecen a continuación.
•	Ingredientes vegetarianos: Pimiento y tofu.
•	Ingredientes no vegetarianos: Pepperoni, Jamón y Salmón.
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o
no, y en función de su respuesta le muestre un menú con los ingredientes
disponibles para que elija. Solo se puede eligir un ingrediente además de la
mozzarella y el tomate que están en todas las pizzas. Al final se debe mostrar
por pantalla si la pizza elegida es vegetariana o no y todos los ingredientes
que lleva.
*/
#include <iostream>
using namespace std;
int main() {
    int tipo, ingrediente;
    cout << "Bienvenido a la pizzeria Bella Rita.\nTipos de pizza\n\t1- "
            "Vegetariana\n\t2- No vegetariana"
         << endl;
    cout << "Introduzca el numero correspondiente al tipo de pizza que desea: ";
    cin >> tipo;
    if (tipo == 1) {
        cout << "Ingredientes de pizzas vegetarianas\n\t1- Pimiento\n\t2- Tofu\n"
             << endl;
        cout << "Seleccione el ingrediente que desea: ";
        cin >> ingrediente;
        cout << "Pizza vegetariana con mozzarella, tomate y ";
        ingrediente == 1 ? cout << "pimiento"
                         : cout << "tofu\n\n";
    } else {
        cout << "Ingredientes de pizzas no vegetarianas\n\t1- Peperoni\n\t2- "
                "Jamon\n\t3- Salmon\n";
        cout << "Seleccione el ingrediente que desea: ";
        cin >> ingrediente;
        cout << "Pizza no vegetarina con mozarrella, tomate y ";
        ingrediente == 1   ? cout << "pepperoni"
        : ingrediente == 2 ? cout << "jamon"
                           : cout << "salmon\n\n";
    }
    return 0;
}
