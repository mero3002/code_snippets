#include <iostream>
using namespace std;
int main() {
    cout << "------------ Number Reverser ------------\n";
    cout << "Enter an Integer: ";
    int n;
    cin >> n;
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    
    cout << reversed;
    return 0;
}