

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "Cuenta 1: " << account1.getName() << " tiene de balance: $"
        << account1.getBalance();
    cout << "\nCuenta 2: " << account2.getName() << " tiene de balance: $"
        << account2.getBalance();

    cout << "\n\nIngrese nombre de la cuenta 1: ";
    string nombre;
    getline(cin, nombre);
    account1.setName(nombre);

    cout << "Nombre de la Cuenta 1: " << account1.getName() << endl;
    cout << "Nombre de la Cuenta 2: " << account2.getName() << endl;
}