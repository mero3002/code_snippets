#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int i = 2;
    for (; i <= n; i += 2) cout << i << endl;

    if (i == 2) cout << -1;

    return 0;
}