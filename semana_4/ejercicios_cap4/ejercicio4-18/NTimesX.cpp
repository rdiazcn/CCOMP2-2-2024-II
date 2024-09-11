#include <iostream>

using namespace std;
int main() {
    int n{1};
    cout << "N" << "\t5*N" << "\t10*N" << "\t15*N" <<endl;
    while (n < 13) {
        cout << n << "\t" << n*5  << "\t" << n*10 << "\t" << n*15 <<endl;
        n++;
    }
}