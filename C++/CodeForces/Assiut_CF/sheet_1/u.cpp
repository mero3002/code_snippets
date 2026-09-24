#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n;
    cin >> n;

    if (n == int(n)){
        cout << "int " << int(n);
    }

    else {
        cout << "float " << int(n) << ' ' << n - int(n);
    }

    return 0;
}