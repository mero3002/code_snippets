#include <iostream>
using namespace std;

int main() {
    long long n, m, last_n, last_m;
    cin >> n >> m;

    last_n = n % 10;
    last_m = m % 10;

    cout << last_m + last_n;

    return 0;
}