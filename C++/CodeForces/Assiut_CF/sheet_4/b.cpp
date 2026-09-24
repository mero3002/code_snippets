#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    
    for (char c : s) {
        if (c == '\\') break;
        cout << c;
    }

    return 0;
}