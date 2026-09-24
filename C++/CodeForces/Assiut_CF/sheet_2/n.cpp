#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void prtin_it(char s, int t){
    for (int i = 0; i < t; i++) cout << s;
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    int n;
    cin >> c >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v.at(i);

    for (int x : v) prtin_it(c, x);

    return 0;
}