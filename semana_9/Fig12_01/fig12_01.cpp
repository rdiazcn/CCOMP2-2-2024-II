#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
    CommissionEmployee commissionEmployee {
        "Sue", "Jones", "222-22-2222", 10000, .06};
    BasePlusCommissionEmployee basePlusCommissionEmployee {
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300};
    
    cout << fixed << setprecision(2);

    cout << "DISPLAY BASE CLASS AND DERIVED CLASS OBJECTS:\n"
        << commissionEmployee.toString() 
        << "\n\n"
        << basePlusCommissionEmployee.toString();
    
    CommissionEmployee* commissionEmployeePtr{&commissionEmployee};
    cout << "\n\nCALLING TOSTRING WITH BASE-CLASS POINTER TO "
        << "\nBASE-CLASS OBJECT INVOKES BASE-CLASS TOSTRING FUNCTION:\n"
        << commissionEmployeePtr -> toString();
    
    BasePlusCommissionEmployee* basePlusCommissionEployeePtr{
        &basePlusCommissionEmployee};
    cout << "\n\nCALLING TOSTRING WITH DERIVED-CLASS POINTER TO "
        << "\n DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS "
        << basePlusCommissionEmployeePtr->toString();
    
    commissionEmployeePtr = &basePlusCommissionEmployee;

    cout << "\n\nCALLING TOSTRING WITH BASE-CLASS POINTER TO "
        << "DERIVED-CLASS OBJECT\nINVOKES BASE-CLASS TOSTRING "
        << "FUNCTION ON THAT DERIVED-CLASS OBJECT: \n"
        << commissionEmployeePtr->tostring() 
        << endl;
    }
}