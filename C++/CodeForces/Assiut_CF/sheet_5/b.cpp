#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    
    for (int i = 1; i <= x; i++) {
        cout << i;
        if (i != x) cout << ' ';
    }

    return 0;
}