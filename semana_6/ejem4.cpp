#include <iostream>
using namespace std;

bool isalpha (char car) {
    int val = static_cast<int>(car);

    if ( val >= 65 && val <= 90 ) {
        return true;
    }
    else if ( val >= 97 && val <= 122) {
        return true;
    }
    else {
        return false;
    }
}

bool isupper(char car) {
    int val = static_cast<int>(car);

    if ( val >= 65 && val <= 90 ) {
        return true;
    }
    else {
        return false;
    }
}

char tolower (char car) {
    int val = static_cast<int>(car);
    val += 32;
    car = static_cast<char>(val);

    return car;
}

bool ispunct (char car) {
    if (car == '.') {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    char cadenaDesordenada[] = "e6s0T9e&.eS.99u9n5a.CADENA";
    char actual = cadenaDesordenada[0];
    for (int i = 0; actual != '\0'; actual = cadenaDesordenada [++i]) {
        if (isalpha(actual)) 
            cout << (char)( isupper(actual) ? tolower(actual) : actual);
        else if (ispunct(actual))
            cout << ' ';
    }
    cout << endl;
    return 0;
}