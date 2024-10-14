#include <iostream>
#include <array>
using namespace std;

int main() {
    array <int, 5> arr{1,2,3,4,5};
    int *ptr= &arr[0];  

    cout << ptr << endl;
    cout << *ptr << endl;
    

    // cout << arr no es una instruccion valida por la libreria array
    return 0;
}