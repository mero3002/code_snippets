#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool isPalindrom(ll x){
    string reversed, x_str = to_string(x);

    ll size = x_str.length();

    for (ll i = size - 1; i >= 0; i--){
        reversed = reversed + x_str[i];
    }

    long long reversed_int = stoll(reversed);
    cout << reversed_int << endl;

    if (reversed_int == x) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    cout << (isPalindrom(n) ? "YES" : "NO");

    return 0;
}