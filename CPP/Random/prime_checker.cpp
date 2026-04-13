#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i;
    if (n <= 1) {
        cout << "1 and below cannot be prime.";
        return 0;
    }
    else {
        for (i = 2; i <= n; i++) {
            if (n % i == 0)
                break;
        }
    }
    if (i == n) {
        cout << "Prime.";
    }
    else {
        cout << "Not prime.";
    }
    return 0;
}