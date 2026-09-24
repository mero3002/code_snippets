#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    vector<ll> b(n);
    for (int i = 0; i < n; i++) cin >> b.at(i);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool perm = true;
    for (int i = 0; i < n; i++){
        if (a.at(i) != b.at(i)) {
            perm = false;
            break;
        }
    }

    cout << (perm ? "yes" : "no");

    return 0;
}