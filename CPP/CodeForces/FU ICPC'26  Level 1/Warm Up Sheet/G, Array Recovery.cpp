#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> p(n);  // processed
        vector<int> r(n);  // recovery
 
        for (int i = 0; i < n; i++) cin >> p[i];
        r[0] = p[0];
 
        bool only_one = true;
        int targ;
        for (int i = 1; i < n; i++) {
            r[i] = p[i] + r[i - 1];
            for (int j = 0; j < r[i - 1]; j++) {
                targ = abs(j - r[i - 1]);
                // cout << j << " - " << r[i - 1] << " = " << targ << endl;
                if (targ == p[i]) {
                    only_one = false;
                    break;
                }
            }
            if (!only_one) break;
        }
 
        if (only_one) {
            for (int i = 0; i < n; i++) cout << r[i] << ' ';
            cout << endl;
        }
 
        else cout << -1 << endl;
    }
    return 0;
}