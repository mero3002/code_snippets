#include <iostream>
using namespace std;

int main() {
    long long x, first;
    cin >> x;

    while (x > 0){
        first = x % 10;
        x /= 10;
    }

    cout << (first % 2 == 0 ? "EVEN" : "ODD");

    return 0;
}