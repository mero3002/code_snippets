#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long res = ((a % 100) * (b % 100) % 100) * (c % 100) % 100;
    res = res * (d % 100) % 100;

    cout << setw(2) << setfill('0') << res;

    return 0;
}