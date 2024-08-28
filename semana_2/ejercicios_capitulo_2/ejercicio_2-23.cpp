// Escriba un programa que lea 5 enteros e imprima el mayor y el menor del grupo
// Utilize solo tecnicas del capitulo 2 (No bucles)

#include <iostream>
using namespace std;

int main(){

    // Declaracion de Variables
    int x{0}, y{0}, z{0}, w{0}, t{0};

    // Pide los valores de las variables
    cout << "Ingrese cinco numeros enteros: ";
    cin >> x >> y >> z >> w >> t;

    // Mayor
    if (x>y && x>z && x>w && x>t) cout << x << " es el mayor.\n";
    else if(y>x && y>z && y>w && y>t) cout << y << " es el mayor.\n";
    else if(z>x && z>y && z>w && z>t) cout << z << " es el mayor.\n";
    else if(w>x && w>y && w>z && w>t) cout << w << " es el mayor.\n";
    else if(t>x && t>y && t>z && t>w) cout << t << " es el mayor.\n";

    // Menor
    if (x<y && x<z && x<w && x<t) cout << x << " es el menor.";
    else if(y<x && y<z && y<w && y<t) cout << y << " es el menor.";
    else if(z<x && z<y && z<w && z<t) cout << z << " es el menor.";
    else if(w<x && w<y && w<z && w<t) cout << w << " es el menor.";
    else if(t<x && t<y && t<z && t<w) cout << t << " es el menor.";

    return 0;
}