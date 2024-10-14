#include <iostream>
using namespace std;

int sumArray(int array[], int sizeofArray) {
    int total{0};
    for (int i{0}; i < sizeofArray ; i++) {
        total += array[i];
    }   
    return total;
}

int sumArrayPointers (int array[], int sizeofArray) {
    int *ptr;
    int total {0};

    for (int i{0}; i <sizeofArray; i++) {
        ptr = array + i;
        total += *ptr;
    }
    return total;
}

int main() {
    int array[10]{1,2,3,4,5,6,7,8,9,10};
    cout << sumArray(array,10) << endl;
    cout << sumArrayPointers(array, 10) << endl;

}