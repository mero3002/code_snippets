#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v.at(i);

    cin >> x;

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (v.at(i) == x) {
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}