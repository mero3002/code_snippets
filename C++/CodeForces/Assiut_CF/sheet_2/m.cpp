#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool isLucky(ll x){
    string x_str = to_string(x);

    for (char c : x_str) {
        if (c != '4' && c != '7') return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    bool found = false;
    cin >> a >> b;
    
    for (ll i = (a > b ? b : a); i <= (a > b ? a : b); i++){
        if (isLucky(i)){
            cout << i << ' ';
            found = true;
        } 
    }

    if (!found) cout << -1;

    return 0;
}