// Programa que multiplica 3 numeros dados por teclado

#include <iostream>
using namespace std;

int main(){
    int x{0}, y{0}, z{0}; // Declara las variables x, y, z
    int result{0}; // Declara result

    // Pide al usuario los tres numeros
    cout << "Ingrese tres numeros enteros: ";
    cin >> x >> y >> z;

    // Multiplica e imprime los tres numeros
    result = x*y*z;
    cout << "El producto es: " << result << endl;
    return 0;
}