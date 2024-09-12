// Ejercicio 4: Clase Date, funcion displayDate, mes correcto e incorrecto

#include <iostream>

class Date{
public:
    explicit Date (int dd, int mm, int aaaa)
    : dia{dd}, anio{aaaa} {
        setMes(mm);
    }

   void setDia(int d){
        dia = d;
    }

    int getDia() const{
        return dia;
    }

    void setMes(int m) {
        if (m>=1 and m<=12){
            mes = m;
        }
    }

    int getMes () const{
        return mes;
    }

    void setAnio(int a){
        anio = a;
    }

    int getAnio() const{
        return anio;
    }

    void displayDate() {
        std::cout << dia << "/" << mes << "/" << anio << std::endl;
    }

private:
    int dia, mes{1}, anio;
};

int main(){
    Date fecha1{19,04,2012};
    Date fecha2{11,-45,2023};

    std::cout<< "Fecha 1: ";
    fecha1.displayDate();
    std::cout<< "Fecha 2: ";
    fecha2.displayDate();
}