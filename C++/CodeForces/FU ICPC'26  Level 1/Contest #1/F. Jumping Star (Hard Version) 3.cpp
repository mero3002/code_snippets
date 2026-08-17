#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, triplets = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        ll left_smaller = 0;
        ll right_smaller = 0;
        for (int j = 0; j < i; j++) if (v[j] < v[i]) left_smaller++;
        for (int k = i + 1; k < n; k++) if (v[k] < v[i]) right_smaller++;

        triplets += left_smaller * right_smaller;
    }
    cout << triplets << endl;
    return 0;
}