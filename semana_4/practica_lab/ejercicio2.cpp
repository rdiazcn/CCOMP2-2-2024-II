// Ejercicio 2: Impares hasta N separados por coma

#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    for (int i = 0; i<=n ; ++i) {
        if (i%2 != 0) {
            cout << i;
            if (i == (n-1) or i == n);
            else {
                cout << ", ";
            }
        }
    }
}