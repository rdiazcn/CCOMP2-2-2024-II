#include <iostream>

using namespace std;
int main() {
    int counter{0}, input, largest{0};
    while (counter != 10) {
        cout << "Ingrese un numero: ";
        cin >> input;
        if (input > largest) largest = input; 
        counter++;
    }
    cout << "\nEl numero más grande es: " << largest;
}

    /*for (; counter < 10; ++counter)  {
        cout << "Ingrese un numero: ";
        cin >> input;
        if (input > largest) largest = input;
    }*/