// Ejercicio 3.12 (Clase Date)

#include <iostream>

class Date {

public:
    Date(int dia, int mes, int anio)
    : dd(dia), aaaa(anio) {
        if (mes >= 1 && mes <=12) mm = mes;
    }

    void setDia(int dia) {
        dd = dia;
    }

    int getDia() const {
        return dd;
    }

    void setAnio(int anio) {
        aaaa = anio;
    }
    
    int getAnio() const {
        return aaaa;
    }

    void setMes(int mes) {
        if (mes >= 1 && mes <=12) mm = mes;
    }

    int getMes() const{
        return mm;
    }

    void displayDate() {
        std::cout << dd << "/" << mm << "/" << aaaa <<"\n";
    }


private:
    int dd, aaaa, mm{1};
};