// Ejercicio 3.10 (Clase Invoice)

#include <string>

class Invoice {

public:
    Invoice(std::string numParte, std::string desc, int itemCant,
            int precioPorItem, double VAT, double tazaDescuento)
    : num(numParte), d(desc) {
        if (itemCant > 0) iC = itemCant;
        if (precioPorItem > 0) pPI = precioPorItem;
        if (VAT > 0) v = VAT;
        if (tazaDescuento > 0)  tD = tazaDescuento;
    }   

    void setNumeroParte(std::string numParte) {
        num = numParte;
    }

    std::string getNumeroParte() const{
        return num;
    }

    void setDescripcion(std::string desc) {
        d = desc;
    }

    std::string getDescripcion() const{
        return d;
    }

    int getItemCant() const {
        return iC;
    }
    
    int getPrecioPorItem() const {
        return pPI;
    }

    double getVAT() const{
        return v;
    }
    double getTazaDescuento() const{
        return tD;
    }

    double getInvoiceAmount(){
        invoiceAmount = ((iC * pPI) * (1+v)) * (1-tD) ;
        return invoiceAmount;
    }
private:
    std::string num,  d;
    int iC{0}, pPI{0};
    double v{0.20}, tD{0}, invoiceAmount;
};

