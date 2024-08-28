// Escribe un programa que pida al usuario ingresar dos enteros, imprime el mas grande con "es mas grande"
// Si son iguales, imprimir "Los numeros son iguales"

#include <iostream>
using namespace std;

int main(){
    int a{0}, b{0}; // Define a y b
    
    // Pide a y b
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Compara ambos
    if (a>b) cout << a << " es mayor";
    else if (b>a) cout << b << " es mayor";
    else cout << "Los numeros son iguales";

    return 0;
}