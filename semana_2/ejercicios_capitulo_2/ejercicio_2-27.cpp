// Escribe un programa que imprima el equivalente en entero de un caracter ingresado por teclado

#include <iostream>
using namespace std;

int main(){
    // Declaracion de variables
    char c;
    int val{0};

    // Pide un caracter
    cout << "Ingrese un caracter: ";
    cin >> c;

    // Transforma el caracter a su equivalente entero y lo imprime
    val = static_cast<int>(c);
    cout <<"El equivalente del caracter "<< c << " es: "<<val; 

    return 0;
}