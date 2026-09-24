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

    v.at(0) = 0;
    if (n > 1){
        v.at(1) = 1;
    }

    for (int i = 2; i < n; i++){
        v.at(i) = v.at(i - 1) + v.at(i - 2);
    }

    for (int i = 0; i < n; i++) cout << v.at(i) << ' ';

    return 0;
}