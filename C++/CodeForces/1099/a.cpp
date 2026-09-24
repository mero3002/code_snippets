#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt, n;
    cin >> tt;
    while (tt--){
        cin >> n;
        vector<int> v(n);
        v[0] = 1;
        for (int i = 1; i < n; i++){
            v[i] = v[i-1] + 2;
        }
        for (int i = 0; i < n; i++) cout << v[i] << ' ' << flush;
        cout << endl;
    }

    return 0;
}