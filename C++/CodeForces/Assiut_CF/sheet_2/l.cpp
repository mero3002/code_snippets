#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int gcd;

    for (int i = 1; i <= (a > b ? b : a); i++){
        if (a % i == 0 && b % i == 0) gcd = i;
    }

    cout << gcd;

    return 0;
}