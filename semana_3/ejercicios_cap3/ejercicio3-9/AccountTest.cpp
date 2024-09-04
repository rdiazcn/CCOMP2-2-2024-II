// Modificar AccountTest (fig 3.9) para testear funcion withdrawal

// AccountTest.cpp modificado
// Ejercicio 3.9 y traduccion de mensajes en cout

#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "Cuenta 1: " << account1.getName() << " tiene de balance: $"
        << account1.getBalance();
    cout << "\nCuenta 2: " << account2.getName() << " tiene de balance: $"
        << account2.getBalance();

    cout << "\n\nIngresar deposito para la cuenta 1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Añadiendo " << depositAmount << " al balance de la cuenta 1";
    account1.deposit(depositAmount);

    // cout << "\n\naccount1: " << account1.getName() << " balance is $"
    //     << account1.getBalance();
    // cout << "\naccount2: " << account2.getName() << " balance is $"
    //     << account2.getBalance();

    cout << "\nIngresar deposito para la cuenta 2: ";
    cin >> depositAmount;
    cout << "Añadiendo " << depositAmount << " al balance de la cuenta 2";
    account2.deposit(depositAmount);

    cout << "\n\nCuenta 1: " << account1.getName() << " tiene de balance: $"
        << account1.getBalance();
    cout << "\nCuenta 2: " << account2.getName() << " tiene de balance: $"
        << account2.getBalance();

    cout << "\n\nIngresa el monto a retirar para cuenta 1: ";
    int withdrawalAmount;
    cin >> withdrawalAmount;
    account1.withdraw(withdrawalAmount);

    cout << "\nIngresa el monto a retirar para cuenta 2: ";
    cin >> withdrawalAmount;
    account2.withdraw(withdrawalAmount);
    
    cout << "\n\nCuenta 1: " << account1.getName() << " tiene de balance: $"
        << account1.getBalance();
    cout << "\nCuenta 2: " << account2.getName() << " tiene de balance: $"
        << account2.getBalance();

    

    return 0;
}