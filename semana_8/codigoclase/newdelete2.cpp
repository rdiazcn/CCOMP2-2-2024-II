#include <iostream>

using namespace std;

int* getPtrToFive() {
    int *x = new int;
    *x = 5;
    return x; // x is not out of scope, dir is now in heap
}

int main() {
    int *ptr = getPtrToFive(); 
    cout << *ptr << endl;
    delete ptr; // always delete "new" variables
}
