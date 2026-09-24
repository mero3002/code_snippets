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

    ll processes = 0;

    int i = 0;

    while (true){
        if (v.at(i) % 2 != 0){
            break;
        }

        v.at(i) /= 2;
        i++;

        if (i == n - 1){
            processes++;
            i = 0;
        }
    }

    cout << processes;

    return 0;
}