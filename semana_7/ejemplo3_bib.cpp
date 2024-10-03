#include <iostream>
#include <array>

using namespace std;

void duplicateElems(array<int,9> arr) {
    for (int i = 0; i < 9; i++) {
        arr[i] *= 2;
    }
    printArray(arr);
}

void printArray (const array<int,9> arr) {
    cout << "[ ";
    for (int i = 0; i < 9 ; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}
int main() {
    array<int,9> arr {1,2,3,4,5,6,7,8,9};
    duplicateElems(arr);
    printArray(arr);
}