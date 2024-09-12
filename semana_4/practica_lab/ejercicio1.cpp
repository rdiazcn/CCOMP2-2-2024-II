// Ejercicio 1: Suma de multiplos de 3 o 5 hasta 1,000,000

#include <iostream>

using namespace std;
int main(){
    int x{0}, total{0};
    for (;x<1000000;++x) {
        if (x%3==0 or x%5==0) {
            total += x; 
        }
    }
    cout <<"La suma de los numeros naturales multiplos de 3 o 5, menores a un millon es: "<< total;   
}