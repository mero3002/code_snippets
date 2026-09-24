#include <iostream>
// #include <cctype>

using namespace std;

int main() {

    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z'){
        c -= 32;
    }
    else {
        c += 32;
    }

    cout << c;

    return 0;
}