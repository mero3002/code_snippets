#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << ((b * log(a)) > (d * log(c)) ? "YES" : "NO");

    return 0;
}