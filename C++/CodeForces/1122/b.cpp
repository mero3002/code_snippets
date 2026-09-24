#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tt;
    cin >> tt;
    
    while (tt--){
        ll a, b, c;
        cin >> a >> b >> c;

        ll cur_dif = abs(a - b);

        if (abs((a + c) - b) <= cur_dif) cout << cur_dif << endl;
        else cout << abs((a + c) - b) << endl;
    }

    return 0;
}