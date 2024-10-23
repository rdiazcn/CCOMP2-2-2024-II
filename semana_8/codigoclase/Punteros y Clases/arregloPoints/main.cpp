#include <iostream>
#include "Point.h"

using namespace std;

void printArray(Point arr[], int sizeOfArray) {
    for (int i{0}; i <sizeOfArray; i++) {
        arr[i].print();
    }
}

void printArray_Pointers (Point *arr, int sizeOfArray ) {
    for (int i{0}; i < sizeOfArray; i++, arr++) {
        arr -> print();
    }
}

int main() {
    Point arr[4];
    
    cout <<"Iteracion: " << endl;
    printArray(arr, 4);

    cout <<"Punteros: " << endl;
    printArray_Pointers(arr, 4);
}