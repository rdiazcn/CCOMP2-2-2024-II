// Ejercicio 3.12 Test Clase Date

#include <iostream>
#include "Date.h"

using namespace std;

int main() {

    Date fecha1{10,2,2004};
    Date fecha2{20,16,2000};
    Date fecha3{11, -29, 2010};

    cout << "Fecha 1: "; fecha1.displayDate();
    cout << "Fecha 2: "; fecha2.displayDate();
    cout << "Fecha 3: "; fecha3.displayDate();
    
}