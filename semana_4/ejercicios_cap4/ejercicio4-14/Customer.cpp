#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int numCuenta;
    float balanceMes, itemsCargado, creditosAplic
        , nuevoBalance, limitCred;

    cout << setprecision(2) << fixed;

    cout << "Ingresa numero de cuenta (o -1 para salir): ";
    cin >> numCuenta;

    while(numCuenta != -1) {
        cout << "Ingresa balance inicial: ";
        cin >> balanceMes;
        cout << "Ingresa cargos totales: ";
        cin >> itemsCargado;
        cout << "Ingresa creditos totales: ";
        cin >> creditosAplic;
        cout << "Ingresa limite de creditos: ";
        cin >> limitCred; 
        nuevoBalance = balanceMes + itemsCargado - creditosAplic;
        cout << "Nuevo Balance es: " << nuevoBalance;

        if (nuevoBalance > limitCred) {
            cout << "\nCuenta: " << numCuenta;
            cout << "\nLimite de Creditos: " << limitCred;
            cout << "\nBalance : " << nuevoBalance;
            cout << "\nLimite excedido."; 
        }
        
        cout << "\n\nIngresa numero de cuenta (o -1 para salir): ";
        cin >> numCuenta;

    }

}