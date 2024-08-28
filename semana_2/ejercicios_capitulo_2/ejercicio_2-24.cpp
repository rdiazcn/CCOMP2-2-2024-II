// Escribe un programa que lee 2 numeros e imprime si cada entero y su suma son par o impar
#include <iostream>
using namespace std;

int main(){
    int a{0}, b{0}; // Define a y b
    
    // Pide a y b
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Paridad de a
    if (a%2 == 0) cout << a << " es par\n";
    else cout << a << " es impar\n";
    // Paridad de b
    if (b%2 == 0) cout << b << " es par\n";
    else cout << b << " es impar\n";
    // Paridad de suma
    if ((a+b)%2 == 0) cout <<"La suma: " << a+b << ", es par";
    else cout<<"La suma: " << a+b << ", es impar";

    return 0;
}