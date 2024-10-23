#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p;
    Point *ptr = &p; //ptr tiene la direccion de memoria d p
    
    ptr -> print(); //Invoco metodo de p usando sintaxis "->"

    ptr -> setX(10); 
    ptr -> setY(20); 

    // Pseudo "print()"
    cout << "{"<<ptr -> getX() << ", "<< ptr -> getY()  << "}" <<endl;

}