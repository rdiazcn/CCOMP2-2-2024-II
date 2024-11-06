#include <iostream>

using namespace std;

int* getPtrToFive() {
    int x = 5;
    return &x; // x is out of scope, invalid content
}

int main() {
    int *ptr = getPtrToFive(); 
    cout << *ptr << endl;
}

// int *ptr = new x; 
// int *ptr = int x;

// if using int x, values are stored in stack
// stack variables are managed by exe. system

// if using new x, values are stored in heap
// user must allocate or de-allocate variables in heap