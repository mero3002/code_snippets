#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int tt, n;
    cin >> tt;
    while (tt--){
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        bool equal = false;
        int counter = 0;

        sort(v.begin(), v.end());
        int model = v[0];

        while (!equal){
            equal = true;
            for (int i = 1; i < n; i++){
                while (v[i] != model){
                    if (v[i] % 2 == 0) v[i] /= 2;
                    else v[i]++;
                    counter++;
                    cout << model << endl;
                    cout << v[i] << endl;
                }
            }
            for (int i = 1; i < n; i++){
                if (v[i] != v[i-1]){
                    equal = false;
                    break;
                }
            }
        }
    cout << counter << endl;
}
   return 0;
}