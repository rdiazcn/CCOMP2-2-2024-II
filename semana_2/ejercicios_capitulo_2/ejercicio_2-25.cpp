// Escribe un programa que lee tres enteros e imprime si los dos primeros son factores
// del tercero.

#include <iostream>
using namespace std;

int main(){
    int x{0}, y{0}, z{0}; // Define x, y y z
    
    // Pide x, y y z
    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;
    cout << "Ingrese el tercer numero: ";
    cin >> z;

    // Imprime si son factores
    if (z%x==0 && z%y==0) cout << x << " y " << y << " son factores de "<<z;
    else if (z%x==0) cout << "Solo "<< x << " es factor de "<<z;
    else if (z%y==0) cout << "Solo "<< y << " es factor de "<<z;
    else cout << "Ni "<< x << " ni " << y << " son factores de "<<z;
    return 0;
}