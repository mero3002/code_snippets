#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;   

    vector<string> v(n);

    for (int i = 0; i < n; i++) cin >> v.at(i);

    for (string s : v) {
        reverse(s.begin(), s.end());
        
        for (char c : s) cout << c << ' ';
        cout << endl;
    }

    return 0;
}