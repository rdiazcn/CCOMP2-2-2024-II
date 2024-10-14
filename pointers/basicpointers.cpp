#include <iostream>
using namespace std;




int main() {
    
    int array[5] {10, 20, 30, 40 , 50};
    int val{5};
    int *ptr = &val; 
    int *aptr = array; // array == &array[0]
    cout << *aptr;
}