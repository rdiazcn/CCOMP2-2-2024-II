// AccountTest.cpp
// As per fig 3.9
#include <iostream>
#include "Account.h"

using namespace std;

void displayAccount (Account accountToDisplay){
    cout << "\nCuenta: " << accountToDisplay.getName() << ", tiene balance $"
    << accountToDisplay.getBalance();
}

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    displayAccount(account1);
    displayAccount(account2);


    cout << "\n\nIngrese monto de deposito para la cuenta 1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Añadiendo " << depositAmount << " al balance de la cuenta 1\n";
    account1.deposit(depositAmount);


    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nIngrese monto de deposito para la cuenta 2: ";
    cin >> depositAmount;
    cout << "Añadiendo " << depositAmount << " al balance de la cuenta 2\n";
    account2.deposit(depositAmount);


    displayAccount(account1);
    displayAccount(account2);

    return 0;
}