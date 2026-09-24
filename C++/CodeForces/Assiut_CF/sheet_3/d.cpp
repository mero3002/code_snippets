#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v.at(i);

    for (int i = 0; i < n; i++) {
        if (v.at(i) <= 10) cout << "A[" << i << "] = " << v.at(i) << endl;
    }

    return 0;
}