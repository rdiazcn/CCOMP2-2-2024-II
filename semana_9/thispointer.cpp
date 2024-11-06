#include <iostream>
using namespace std;

class Integer {
public:
Integer(int val = 0) {
    this->val = val;
 }
void setVal(int val) {
    this->val = val;
 }
void displayVal() {
    cout << val;
}
private:
    int val;
};


int main() {
    Integer j(3); 
    j.displayVal();
    j.setVal(10);
    j.displayVal();

}
