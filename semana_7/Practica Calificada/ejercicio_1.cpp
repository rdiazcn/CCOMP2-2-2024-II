// Implementar una funcion que escriba un arreglo de enteros y su tamaño y retorne la cantidad
// de numeros primos del arreglo. Debe implementarse la funcion principal para probar su funcion

#include <iostream>
#include <array>
using namespace std;

const size_t arraySize{10};

bool isPrimo(int num);
int cantNumPrimos(array<int, arraySize> arreglo) ;

int main() {
    array<int, arraySize> arreglo{1,2,3,4,5,6,7,8,9,10};
    cout << "En el arreglo: ";
    for (int element : arreglo) {
        cout << element << " ";
    }
    int numPrimos = cantNumPrimos(arreglo);
    cout << "\nSon numeros primos " << numPrimos << " elementos.";
}

bool isPrimo(int num) {
    if (num == 0 or num == 1) return false; 
    if (num == 2) {
        return true;
    }
    for (int i{2}; i < num; i++){
        if (num%i == 0) {
            return false;
        }
    }
    return true;
}

int cantNumPrimos (array<int, arraySize> arreglo) {
    int cant{0};
    for (int element : arreglo) {
        if (isPrimo(element)) {
            ++cant;
        }
    }

    return cant;
}
