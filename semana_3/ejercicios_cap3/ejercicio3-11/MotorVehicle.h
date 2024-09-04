// Clase MotorVehicle que representa un vehiculo usando
// make (compañia fabricante) (string), tipo de combustible (string), 
// año de manufactura
// (int), color (string) y capacidad de motor (int). Tu clase
// Deberia contener un constructor, un set y get para cada dato y
// Y una funcion displayCarDetails que muestra los 5 datos en 5 lineas distintas
// en la forma "member name: member value"

#include <string>
#include <iostream>

class MotorVehicle {
public:
    MotorVehicle(std::string companiaFab, std::string tipoCombus, int anioManuf,
                 std::string color, int capacidadMotor)
    : cFab(companiaFab), tCombus(tipoCombus), col(color) {
        if (anioManuf >= 1886) aManuf = anioManuf;
        if (capacidadMotor >= 50) capMotor = capacidadMotor;
    }

    void setCompaniaFab (std::string companiaFab) {
        cFab = companiaFab;
    }

    std::string getCompaniaFab() const {
        return cFab;
    }

    void setTipoCombus(std::string tipoCombus) {
        tCombus = tipoCombus;
    }

    std::string getTipoCombus() const {
        return tCombus;
    }

    void setColor (std::string color) {
        col = color;
    }

    std::string getColor () const{
        return col;
    }

    int getAnioManuf () const {
        return aManuf;
    }
    
    int getCapacidadMotor () const {
        return capMotor;
    }

    void displayCarDetails() {
        std::cout<<"Compañia Fabricante: " << cFab
            <<"\nTipo de Combustible: " << tCombus
            <<"\nAño de Manufactura: " << aManuf
            <<"\nColor: " << col
            <<"\nCapacidad de Motor: " << capMotor << " cc\n\n";
    }
private:
    std::string cFab, tCombus, col;
    int aManuf{1886}, capMotor {50};

};