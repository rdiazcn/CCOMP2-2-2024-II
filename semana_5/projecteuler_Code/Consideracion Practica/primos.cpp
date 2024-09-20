#include <iostream>
using namespace std;

int main() {
    int n, i{2};
    cout << "Ingrese n: ";
    cin >> n;
    cout << "Numeros primos antes de n: ";
    if (n==2) cout << "2";
    while (i < n) {
        int divtot{1};
        for (int j=1; j<i; j++) {
            if (i%j == 0) {
                divtot += 1;
            }
        }
        if (divtot >2);
        else {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}