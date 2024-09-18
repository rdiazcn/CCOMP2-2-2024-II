// Pares antes de 4 millones

#include <iostream>
using namespace std;

bool isEven(int num) {
    if (num%2 == 0){
        return true;
    } 
    else {
        return false;
    }
}

int sumOfEvenFibo(int num) {
    int a{1}, b{2}, aux, sumaPares{0};
    for (; b < num; ) {
        if (isEven(a)) { sumaPares += a; }
        aux = b; 
        b = a +b; 
        a = aux; 
    }
    return sumaPares;
}

// b -> a + b, a -> b;
int main() {
    int sumaPares{sumOfEvenFibo(4000000)};
    cout <<"La Suma de Pares antes de 4M es: "<< sumaPares;
}