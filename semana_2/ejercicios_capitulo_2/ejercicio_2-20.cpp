// Escribe un programa que lee el radio de un circulo como un entero e imprime el diametro
// circunferencia y area. Valor constante de pi= 3.14159. Realiza todos los calculos en un enunciado
// de salida.


#include <iostream>
using namespace std;

int main(){
    // Declaracion de Variables
    const float pi{3.14159};
    int rad;

    // Pide el radio
    cout << "Ingresa el radio: ";
    cin >> rad;

    // Calculos
    cout <<"Diametro: "<< rad*2 <<endl;
    cout <<"Circunferencia: "<< 2*pi*rad <<endl;
    cout <<"Area: "<< pi*rad*rad <<endl;
    return 0;
}