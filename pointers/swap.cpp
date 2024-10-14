#include <iostream>
using namespace std;

void swapRef(int &a, int &b){
    int temp{a};
    a = b;
    b = temp;
}
void swapPoint(int *a, int *b){
    int temp{*a};
    *a = *b;
    *b = temp;
}
int main() {
    int x{5};
    int y{6};

    swapRef(x, y);
    cout << x << " " << y<<endl;
    int *xptr{&x};
    int *yptr{&y};
    swapPoint(xptr, yptr);
    cout << x << " " << y;
}