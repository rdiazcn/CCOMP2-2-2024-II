#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float kiloRec{0}, litrosUs{0}, kiloTot{0}, litrosTot{0}; 

     cout << setprecision(6) << fixed;

    cout << "Ingresar kilometros recorridos (-1 para salir): ";
    cin >> kiloRec;

    while(kiloRec != -1) {
        cout << "Ingresar litros usados: ";
        cin >> litrosUs;

        kiloTot += kiloRec;
        litrosTot += litrosUs;

        cout << "Kilometros por litro este viaje: " << kiloRec/litrosUs;
        cout << "\nKms. por litro en total: " <<  kiloTot / litrosTot <<endl;

        cout << "\nIngresar kilometros recorridos (-1 para salir): ";
        cin >> kiloRec;
    }
}