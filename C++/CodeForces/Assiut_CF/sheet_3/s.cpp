#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, target;
    cin >> a >> b;

    int size = a * b;
    
    vector<ll> v(size);
    
    for (int i = 0; i < size; i++) cin >> v.at(i);

    cin >> target;

    if (find(v.begin(), v.end(), target) != v.end()) {
        cout << "will not take number";
    }
    else {
        cout << "will take number";
    }

    return 0;
}