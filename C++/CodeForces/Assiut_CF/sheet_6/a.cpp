#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ld n;
    cin >> n;
    
    bool power = true;

    while (n != 1) {
        n /= 2;
        if (n < 1) {
            power = false;
            break;
        }
    }

    cout << (power ? "YES" : "NO");

    return 0;
}