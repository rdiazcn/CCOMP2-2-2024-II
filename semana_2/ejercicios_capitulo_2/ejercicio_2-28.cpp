// Escribe un programa que ingrese un entero de cuatro digitos, separa los digitos 
// e imprime los digitos en orden reverso separado por dos espacios
#include <iostream>
using namespace std;

int main(){
    // Declaracion de la variable num
    int num{0};

    // Pide el numero
    cout << "Introduce el numero: ";
    cin >> num;

    // Imprime los digitos en reversa:
    cout <<"Digitos en reversa: "<< num%10 << "  ";  // Unidad
    cout << (num/10)%10<< "  "; // Decena
    cout << (num /100)%10<<"  "; // Centena
    cout << num / 1000; // Unidad de Millar
    return 0;
}