// Largest 998001
// Smallest 10000

#include <iostream>
#include <cmath>
using namespace std;

bool isSixD_Palindrome(int num) {
    int u{0};
    int m = num / pow(10,5); 

    for (int i = 6; i >= 1; i--){
        num = num % (static_cast<int>(pow(10, i)));
    }
    u = num;

    if (m == u) {
        return true;
    }
    else return false;
} 

int largestUsingDifferent() {
    int largestFactor{0};
    for (int x = 100; x <= 999; x++){
        for (int y = 100; y <= 999; y++){ 
            if ((x * y) > 100000 && isSixD_Palindrome(x*y) && x!=y) {
                if ((x*y)>largestFactor) largestFactor = x*y;
            }
        }
    }
    return largestFactor;
}

int largestUsingSame() {
    int largestFactor{0};
    for (int x = 100; x <= 999; x++){
        for (int y = 100; y <= 999; y++){ 
            if ((x * y) > 100000 && isSixD_Palindrome(x*y)) {
                if ((x*y)>largestFactor) largestFactor = x*y;
            }
        }
    }
    return largestFactor;
}

int main() {
    cout << "El numero más grande usando numeros distintos es: "<< largestUsingDifferent() <<endl;
    cout << "El numero más grande usando numeros iguales es: "<< largestUsingSame() << endl;

}