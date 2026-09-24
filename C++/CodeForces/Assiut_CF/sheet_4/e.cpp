#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string num_str;
    cin >> num_str;

    ll total = num_str[0] - '0';

    for (int i = 1; i < num_str.length(); i++){
        total += (num_str[i] - '0');
    }

    cout << total;   

    return 0;
}