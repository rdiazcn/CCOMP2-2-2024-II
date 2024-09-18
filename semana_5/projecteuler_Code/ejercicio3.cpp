#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x == 2) {return true;}

    int div = 1;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            div += 1;
        }
    }

    if (div > 1) {return false;}
    else return true;
}

int main() {
    long long num = 600851475143;
    int largestFactor{0};

    for (long long i = 2; i < num; i++) {
        if (isPrime(i) && num%i == 0) {
            if (i > largestFactor) largestFactor = i;
        }
    }
    
    cout << largestFactor;
}