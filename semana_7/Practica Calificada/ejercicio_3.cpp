// Implementar una funcion que reciba un vector de enteros y eleve al cuadrado cada uno de sus elementos
// Debe implementar la funcion principal para probar su funcion

#include <iostream>
#include <vector>
using namespace std;

void squareElement(vector<int>& vectorCuadrado);

int main() {
    vector<int> vector(8);
    for (int i = 1; i <= 8; i++){
        vector[i-1] = i;
    }
    cout << "Vector antes de funcion: ";
    for (int element : vector) {
        cout << element << " ";
    }

    squareElement(vector);

    cout << "\nVector despues de funcion: ";
    for (int element : vector) {
        cout << element << " ";
    }

}

void squareElement (vector<int>& vectorCuadrado) {
    cout << "\n\nElemento " << "\tElemento al Cuadrado\n";
    for (int& element : vectorCuadrado) {
        cout << element << "\t\t";
        element *= element;
        cout << element << endl;
    }
}