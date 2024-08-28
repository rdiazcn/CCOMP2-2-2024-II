// Escribe un programa que pida al usuario tres numeros y calcula la suma, el promedio, el producto, el mas pequeño
// y el numero mas grande

#include <iostream>
using namespace std;

int main(){
    int x{0}, y{0}, z{0}; // Define x, y y z
    
    // Pide x, y y z
    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;
    cout << "Ingrese el segundo numero: ";
    cin >> z;

    // Calculos
    cout << "La suma es: " << x + y + z <<endl;
    cout << "El promedio es: " << (x+y+z)/3 <<endl;
    cout << "El producto es: " << x * y * z <<endl;

    // Mayor y Menor
    if ((x>y) && (x>z)) cout << x <<" es el mayor\n";
    else if ((y>x) && (y>z)) cout << y <<" es el mayor\n";
    else if ((z>x) && (z>x)) cout << z <<" es el mayor\n";

    if ((x<y) && (x<z)) cout << x <<" es el menor";
    else if ((y<x) && (y<z)) cout << y <<" es el menor";
    else if ((z<x) && (z<x)) cout << z <<" es el menor";

    return 0;
}