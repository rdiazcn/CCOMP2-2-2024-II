// Implementar una funcion que reciba una cadena y retorne la cantidad de letras
// Que contenga dicha cadena. Debe implementar la funcion principal para probar su funcion

#include <iostream>
#include <string>
using namespace std;

int cantLetras(string cad);
bool isLetra(char let);

int main() {
    string cadena{"as24] [*#$&%^]ds%$/DD*"};
    cout << "La cadena: " << cadena; 
    cout << "\nTiene " << cantLetras(cadena) << " letras.";
}

int cantLetras(string cad) {
    int cantLetras{0};
    for (char letra : cad) {
        if (isLetra(letra)) {
            ++cantLetras;
        }
    }
    return cantLetras;
}

bool isLetra(char let) {
    int val = static_cast<int>(let);

    if (val >= 97 && val <= 122) {
        return true;
    }
    else if (val >= 65 && val <= 90) {
        return true;
    }
    else {
        return false;
    }
}