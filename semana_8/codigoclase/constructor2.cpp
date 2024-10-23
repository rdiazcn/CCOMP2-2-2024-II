#include <iostream>
using namespace std;
// Para constructores con parametros:
// - Crear dos constructores, uno sin paramentros: Integer() e Integer(int v) 
// - Usar argumentos por defecto Integer(int v=0)


class Integer {
public: 
    int val;
    Integer(int v = 0) {
        val = v;
        cout << "constructor with arg: " << v << endl;
    } // El metodo de constructor puede recibir los parametros

    int getVal() const {
        return val;
    }
    void setVal(int v) {
        val = v;
    }
};

int main() {
    Integer i(3); // == Integer i{3} == Integer i = 3 SI no hay "Explicit"
    Integer j; // Integer j(0)

    // Arreglos:
    Integer a[] = {Integer(2), Integer(5)}; // Parametros
    Integer b[2]; // Argumentos por defecto
    // b = {Integer(0), Integer(0)} 
}