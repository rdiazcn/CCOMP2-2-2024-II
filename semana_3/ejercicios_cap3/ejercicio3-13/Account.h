// Account.h
// As per fig. 3.8

#include <string>

class Account {
public: // Atributos publicos

    Account(std::string accountName, int initialBalance)
        : name{accountName} {    
        if (initialBalance>0) {
            balance = initialBalance;
        }
    } // Constructor e inicializador de balance en 0


    void deposit(int depositAmount){
        if(depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }


    void setBalance(int initialBalance){
        if (initialBalance>0) {
            balance = initialBalance;
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