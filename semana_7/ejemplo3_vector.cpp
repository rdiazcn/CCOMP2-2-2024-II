#include <iostream>
#include <vector>
using namespace std;

void duplicateElems(vector<int>& vec, int tam) {
    for (int i = 0; i < tam; i++) {
        vec[i] *= 2;
    }
}

void printArray (const vector<int> vec, const int size) {
    cout << "[ ";
    for (int i = 0; i < size ; i++) {
        cout << vec[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> vector1(6); 
    vector1 = {1,2,3,4,5,6};
    //cout << sizeof(array) << endl;
    int tam = sizeof(vector1) / sizeof(vector1[0]);
    duplicateElems(vector1, tam);
    printArray(vector1, tam);

}