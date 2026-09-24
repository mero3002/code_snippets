#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a1, a2, b1, b2;

    cin >> a1 >> a2 >> b1 >> b2;

    if (b2 >= a1 && b2 <= a2){
        if (b1 <= a1){
            cout << a1 << ' ' << b2;
        }
        else cout << b1 << ' ' << b2;
    }

    else if (a2 >= b1 && a2 <= b2){
        if (b1 <= a1){
            cout << a1 << ' ' << a2;
        }
        else cout << b1 << ' ' << a2;
    }

    else cout << -1;

    return 0;
}