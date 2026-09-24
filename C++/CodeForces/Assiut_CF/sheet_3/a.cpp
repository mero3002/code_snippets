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

    // ll sum = accumulate(v.begin(), v.end(), 0); // did not work for some reason

    ll sum = 0;

    for (ll i : v) sum += i;

    cout << abs(sum);

    return 0;
}