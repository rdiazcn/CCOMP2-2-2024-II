// Largest 998001
// Smallest 10000

#include <iostream>
using namespace std;

bool isSixDigitPalindrome(int num) {
    cout << num / 100000 << endl;
} 

int main() {
    int largestFactor{0};
    int x{100}, y{100};
    if ((x * y) > 100000) {
        isSixDigitPalindrome(x*y);
    }   
}