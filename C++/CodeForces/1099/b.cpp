#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector<int> v(n);
        bool possible = true;
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 1; i < n; i++){
            if (v[i] <= v[i-1]){
                possible = false;
                break;
            }
        }
    }

    return 0;
}