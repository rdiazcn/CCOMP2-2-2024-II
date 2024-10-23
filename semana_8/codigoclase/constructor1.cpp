#include <iostream>

using namespace std;

class Integer {
public:
    Integer() {
        val = 0; 
        cout << "Integer default constructor" << endl;
    }   // Constructor: Metodo que se invoca cuando se crea una instancia
    int getVal() const {
        return val;
    }
    void setVal(int v) {
        val = v;
    }
private:
    int val{0};
};

class IntegerWrapper {
public:
    Integer val;
    IntegerWrapper() {
        cout << "IntegerWrapper default constructor" << endl;
    } // IntegerWrapper contiene el objeto Integer, es una relacion de 
};

int main() {
    IntegerWrapper i;
}