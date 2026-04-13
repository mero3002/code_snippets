#include <iostream>
using namespace std;
int main() {
    int n, i = 10;
    for (;i<100;) {
        cout << "<< Even - Odd Checker >>\nEnter the number: "; cin >> n;
        if (n % 2 == 0 && n != 0) {
            cout << "The number " << n << " is even.";
        }
        else if (n % 2 != 0 && n != 0) {
            cout << "The number " << n << " is odd.";
        }
        else { cout << "The number is zero."; }
        return 0;
    }
}
