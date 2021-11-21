/*
18.	Se tiene un x monto de dinero por concepto de presupuesto del año de un Instituto, estas serán entregadas de la siguiente forma: Para Sistemas 20%, Administración 30%, contaduría 25% y el resto para Secretariado.
*/
#include <iostream>
using namespace std;
int main()
{
    double presupuesto, sis = 0, admin = 0, conta = 0, secre = 0;
    cout << "Ingrese la cantidad del presupuesto ";
    cin >> presupuesto;
    sis = presupuesto - (presupuesto * .80);
    admin = presupuesto - (presupuesto * .70);
    conta = presupuesto - (presupuesto * .75);
    secre = presupuesto - sis - admin - conta;
    cout << "Sistemas: " << sis << "\nAdministracion: " << admin << "\nContaduria: " << conta << "\nSecretariado: " << secre << endl;
    return 0;
}
