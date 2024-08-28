// Escribe un programa que calcula el area de superficie y volumen de cubos de tamaños 0 a 4 cm
// Usa tabulaciones para imprimir una tabla de valores formateada ordenadamente

#include <iostream>
using namespace std;

int main(){
    // Variable l
    int l{0};

    // Encabezado
    cout << "Longitud\tArea de Superf.\tVolumen\n";
    cout << "del cubo(cm)\tdel cubo(cm^2)\tdel cubo(cm^3)\n";

    // Calculos de Area y Volumen, incrementos de 1, de 0 a 4
    cout << l<<"\t\t"<<6*(l*l)<<"\t\t"<<l*l*l<<"\n"; l+=1;
    cout << l<<"\t\t"<<6*(l*l)<<"\t\t"<<l*l*l<<"\n"; l+=1;
    cout << l<<"\t\t"<<6*(l*l)<<"\t\t"<<l*l*l<<"\n"; l+=1;
    cout << l<<"\t\t"<<6*(l*l)<<"\t\t"<<l*l*l<<"\n"; l+=1;
    cout << l<<"\t\t"<<6*(l*l)<<"\t\t"<<l*l*l<<"\n"; 

    return 0;
}