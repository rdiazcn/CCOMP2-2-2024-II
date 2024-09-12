// Ejercicio 3: Primos menores a n

#include <iostream>

using namespace std;
int main() {
    int n, i{2};
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Son primos antes de "<< n << ": ";

    while (i < n){
        int div{0}, j{1};
        while (j < n){
            if (i%j == 0) {
                div += 1;                 
            }
            j++;
        }

        if (div <= 2) {
            cout << i << " ";
        }
        i++;
    }
}