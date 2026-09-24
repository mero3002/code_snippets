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
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        long long max = v[0];
        long long min = v[0];
        for (int i = 1; i < n; i++){
            if (v[i] > max){
                max = v[i];
            }
            if (v[i] < min){
                min = v[i];
            }
        }
        cout << max - min << endl;
    }
    return 0;
}