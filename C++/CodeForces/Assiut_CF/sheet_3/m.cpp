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

    ll min = v.at(0);
    ll max = v.at(0);
    int min_ind = 0;
    int max_ind = 0;

    for (int i = 0; i < n; i++){
        if (v.at(i) > max) {
            max = v.at(i);
            max_ind = i;
        }
        if (v.at(i) < min){
            min = v.at(i);
            min_ind = i;
        }
    }

    v.at(max_ind) = min;
    v.at(min_ind) = max;

    for (ll i : v) cout << i << ' ';
    return 0;
}