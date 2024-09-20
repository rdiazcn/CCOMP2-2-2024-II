#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if (n == 2) return true;
    for (int i=2; i < n; i++){
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    int count{1};
    int n{2};

    while (count < 10001) {
        n++;
        if (isPrime(n)) {
            count++;
        }
    }

    cout << n;
}