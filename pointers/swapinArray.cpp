#include <iostream>
using namespace std;

void swapArray(int array[], int sizeofArray) {
    int i, j;
    for (i=0, j=sizeofArray-1; i<=j ; i++, j--){
        int temp = array[i];
        array [i] = array [j];
        array [j] = temp;
    }
}
void swapArrayPointers(int array[], int sizeofArray){

    int *i, *j;
    for (i = array, j = array + (sizeofArray - 1); i<=j ; i++, j--){
        int temp = *i;
        *i = *j;
        *j = temp;
    }
}


int main() {
    int array[10]{1,2,3,4,5,6,7,8,9,10};
    for (int i{0}; i < 10; i++) {
        cout << array[i]<< " ";
    }
    cout << endl;
    swapArray(array, 10);
    for (int i{0}; i < 10; i++) {
        cout << array[i] << " ";
    }
    
    cout << endl;
    swapArrayPointers(array, 10);
    for (int i{0}; i < 10; i++) {
        cout << array[i] << " ";
    }
}   