#include <iostream>

using namespace std;

int main() {
    int *ptr;
    if (true) {
        int x = 10;
        ptr = &x;
    }
    // ptr is a dangling pointer (x is out of scope)
    cout << *ptr << endl; // prints 10 but is really undefined (x's memory dir. can be used again)
}