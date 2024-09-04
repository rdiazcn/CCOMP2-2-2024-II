// Ejercicio 3.10 Test Clase Invoice
// string numParte, string desc, int itemCant,
// int precioPorItem, double VAT, double tazaDescuento)
    
#include <iostream>
#include "Invoice.h"

using namespace std;

int main() {

    Invoice invoice1{"AW103", "Piston de Gas",
            4, 40, 0.19, 0.12};
    Invoice invoice2{"MT540", "Llave de Mano",
            3, 20, -0.25, -0.12};

    cout << "Recibo 1: Num. de Parte\t\tDescripcion\tCantidad"<< 
            "\tPrecio x Item\tIVA\tDescuento\tTotal\n";
    cout << "\t  " << invoice1.getNumeroParte() << "\t\t\t" << invoice1.getDescripcion() << "\t"
        << invoice1.getItemCant() << "\t\t"  << invoice1.getPrecioPorItem() << "\t\t" << invoice1.getVAT() * 100
        << "%\t" << invoice1.getTazaDescuento()*100 << "%\t\t" << invoice1.getInvoiceAmount()<<"\n";


    cout << "\nRecibo 2: Num. de Parte\t\tDescripcion\tCantidad"<< 
            "\tPrecio x Item\tIVA\tDescuento\tTotal\n";
    cout << "\t  " << invoice2.getNumeroParte() << "\t\t\t" << invoice2.getDescripcion() << "\t"
        << invoice2.getItemCant() << "\t\t"  << invoice2.getPrecioPorItem() << "\t\t" << invoice2.getVAT() * 100
        << "%\t" << invoice2.getTazaDescuento()*100 << "%\t\t" << invoice2.getInvoiceAmount()<<"\n";
    return 0;
}