#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int laps{0};
    float sponsorRate{0}, total{0};
    
    cout << setprecision(2) << fixed;

    cout << "Vueltas recorridas(-1 para salir): ";
    cin >> laps;
    
    while (laps != -1) {
        cout << "Tasa de patrocinio: ";
        cin>> sponsorRate;

        if (laps > 40) {
            
            cout << "El estudiante contribuyo con: " << 
            (sponsorRate * 40) + ((sponsorRate * 1.5)* (laps-40))<< endl;   
            total +=  (sponsorRate * 40) + ((sponsorRate * 1.5) * (laps-40));
        }
        else {
            cout << "El estudiante contribuyo con: " << sponsorRate * laps << endl;
            total += sponsorRate * laps;
        }


        cout << "\nVueltas recorridas(-1 para salir): ";
        cin >> laps;
    }

    cout << "Total contribuido: "<< total;
}