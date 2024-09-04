// Account.h (fig3.8) Modificado para incluir funcion withdraw
// withdraw no puede exceder el balance de "Account"
// si lo excede, no cambiar e indicar "monto de retiro excede balance"

// Account.h Modificado

#include <string>
#include <iostream>

class Account {
public:

    Account(std::string accountName, int initialBalance)
    : name{accountName} {
        if (initialBalance>0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount){
        if(depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    void withdraw (int withdrawalAmount) {
        if (withdrawalAmount > balance)
            std::cout << "El monto a retirar excede el balance";
        else {
            std::cout << "Retirando "<< withdrawalAmount << " del balance.";
            balance -= withdrawalAmount;
        }
    }
    
    int getBalance() const {
        return balance;
    }

    void setName (std::string accountName) {
        name = accountName;
    }


    std::string getName() const {
        return name;
    }
private:
    std::string name;
    int balance{0};
};