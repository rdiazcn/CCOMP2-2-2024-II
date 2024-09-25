#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    array<int, 5> n;

    // size_t is an unsigned integer type
    // loop initializes values of array size 5 to 0
    for (size_t i{0}; i < n.size(); ++i) {
        n[i]  = 0;
    }

    // loop prints formatted indexes and values or array "n"
    cout << "Element" << setw(10) << "Value" << endl;
    
    for (size_t j{0}; j < n.size() ; ++j) {
        cout << setw(7) << j << setw(10) << n[j] << endl;
    }
}