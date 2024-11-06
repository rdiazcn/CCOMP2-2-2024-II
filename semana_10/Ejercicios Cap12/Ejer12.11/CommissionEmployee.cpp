#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string& first, 
   const string& last, const string& ssn, double sales, double rate, 
   int month, int day, int year)
   : Employee(first, last, ssn, month, day, year) {
   setGrossSales(sales);
   setCommissionRate(rate);
}

void CommissionEmployee::setGrossSales(double sales) {
   if (sales < 0.0) {
      throw invalid_argument( "Gross sales must be >= 0.0" );
   }

   grossSales = sales;
}
double CommissionEmployee::getGrossSales() const {return grossSales;}

void CommissionEmployee::setCommissionRate(double rate) {
   if (rate <= 0.0 || rate > 1.0) {
      throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
   }

   commissionRate = rate;
}

double CommissionEmployee::getCommissionRate() const {
   return commissionRate;
}

double CommissionEmployee::earnings() const {
   return getCommissionRate() * getGrossSales();
}

string CommissionEmployee::toString() const {
   ostringstream output;
   output << fixed << setprecision(2)
      << "commission employee: " << Employee::toString()
      << "\ngross sales: " << getGrossSales()
      << "; commission rate: " << getCommissionRate();
   return output.str();
}