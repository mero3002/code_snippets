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

    ll lowest = v.at(0);
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (v.at(i) < lowest){
            lowest = v.at(i);
            index = i;
        }
    }

    cout << lowest << ' ' << index + 1;

    return 0;
}