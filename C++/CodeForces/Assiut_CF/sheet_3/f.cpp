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

    for (int i = v.size() - 1; i >= 0; i--) cout << v.at(i) << ' ';

    return 0;
}