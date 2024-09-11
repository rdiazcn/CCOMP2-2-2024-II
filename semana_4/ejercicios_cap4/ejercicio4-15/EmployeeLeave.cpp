#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float horas{0};
    
    cout << setprecision(2) << fixed;
    
    cout<<"Ingrese horas trabajadas (o -1 para salir): ";
    cin >> horas;

    while (horas!=-1) {
        cout<<"El empleado tiene permitidas: " << 2 + (horas * 0.1) << " horas.\n";

        cout<<"\nIngrese horas trabajadas (o -1 para salir): ";
        cin >> horas;
    }
}