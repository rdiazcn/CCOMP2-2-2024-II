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

    void setItemCant(int itemCant) {
        if (itemCant > 0) iC = itemCant;
    }


    int getItemCant() const {
        return iC;
    }

    void setPrecioPorItem(int precioPorItem){
        if (precioPorItem > 0) pPI = precioPorItem;
    }

    int getPrecioPorItem() const {
        return pPI;
    }

    void setVAT(int VAT) {
        if (VAT > 0) v = VAT;
    }

    double getVAT() const{
        return v;
    }

    void setTazaDescuento(int tazaDescuento) {
        if (tazaDescuento > 0)  tD = tazaDescuento;
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

