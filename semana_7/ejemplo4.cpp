#include <iostream>
using namespace std;

int main() {
    int array [] = {1,2,3,4,5};

    int *ptr = &array[0]; //Direccion de memoria del primer elemento
    cout << ptr << endl; // 0x5ffe50
    cout << *ptr << endl; // array[0] = 1


    // Elementos array[0], array[1], array[2] estan seguidos en memoria 
    // Considerando que cada int ocupa 4 bytes

    // El nombre del arreglo es un puntero al primer elemento
    cout << array << endl;
    cout << *array << endl;


    // Aritmetica de punteros
    int *ini = array;
    cout << ini << "-" << *ini << endl;
    ini++; // El puntero ahora apunta al siguiente elemento
    cout << ini << "-" << *ini << endl;

    int *end = array + 4;
    cout << end << "-" << *end << endl;
    end--;
    cout << end << "-" << *end << endl;

}