// Programa que pide dos numeros e imprime suma, producto, diferencia y cociente
#include <iostream>
using namespace std;

int main(){
    int a{0}, b{0}; // Define a y b
    
    // Pide a y b
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Operaciones con a y b:
    cout <<"\nSuma: "<< a + b << endl;
    cout <<"Resta: "<< a - b << endl;
    cout <<"Producto: "<< a * b << endl;
    cout <<"Cociente: "<< a / b << endl;

    return 0;
}