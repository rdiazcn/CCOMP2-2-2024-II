// Ejercicio 3.11 Test Clase "MotorVehicle"
// string compañiaFab, string tipoCombustible, int añoManuf
// string color, int capacidad motor, funcion displayCarDetails
// Tipos de Combustible: Gasolina, Diesel, Queroseno, Gas Metano y Gas Butano

#include <iostream>
#include "MotorVehicle.h"

int main(){

    MotorVehicle vehiculo1{"Ford", "Gasolina", 2020, "Rojo", 200};
    MotorVehicle vehiculo2{"BMW", "Diesel", 1800, "Rojo", 10};
    
    std::cout << "Vehiculo 1:\n";
    vehiculo1.displayCarDetails();
    std::cout << "Vehiculo 2:\n";
    vehiculo2.displayCarDetails();
    
}