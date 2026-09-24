#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool isArrayPalindrom(vector<int>& v1){
    int v1_size = v1.size();

    vector<int> v2;

    for (int i = v1_size - 1; i >= 0 ; i--){
        if (v1.at(i) > 0) v2.push_back(v1.at(i));
    }

    return (v1 == v2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v.at(i);
    }

    cout << (isArrayPalindrom(v) ? "YES" : "NO");

    return 0;
}