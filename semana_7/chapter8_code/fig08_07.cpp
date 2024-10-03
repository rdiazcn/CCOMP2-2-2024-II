#include <iostream>
using namespace std;

void cubeByReference(int*);

int main() {
    int number{5};
    
    cout << "The original value of number is " << number;
    cubeByReference(&number); // Direccion de Memoria "0x5ffe9c"
    cout << "\nThe new value of number is " << number << endl;

}

void cubeByReference (int* nPtr) { // Recibe "0x5ffe9c"
    *nPtr = *nPtr * *nPtr * *nPtr; 
}