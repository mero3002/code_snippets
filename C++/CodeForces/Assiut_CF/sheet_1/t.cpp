#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> v(3);
    vector<ll> v_(3);

    for (int i = 0; i < 3; i++){
        cin >> v.at(i);
        v_.at(i) = v.at(i);
    }
    
    sort(v_.begin(), v_.end());

    for (ll n : v_){
        cout << n << '\n';
    }
    
    cout << '\n';

    for (ll n : v){
        cout << n << '\n';
    }

    return 0;
}