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

    sort(v.begin(), v.end());

    ll min = v.at(0);

    int i = 1;
    for (i; i < n; i++){
        if (v.at(i) != min) break;
    }

    cout << (i % 2 == 0 ? "Unlucky" : "Lucky");

    return 0;
}