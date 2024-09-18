#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x) {
    if (x == 2) {return true;}

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long num = 600851475143;
    int largestFactor{0};

    for (long long i = 2; i < sqrt(num); i++) {
        if (isPrime(i) && num%i == 0) {
            if (i > largestFactor) largestFactor = i;
        }
    }
    
    cout << largestFactor;
}