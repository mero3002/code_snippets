#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool divisible;
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (long long item : v){
            divisible = false;
            while (item > 1){
                if (item % 2 != 0){
                    divisible = true;
                    break;
                }
                item /= 2;
            }
        cout << (divisible ? "YES" : "NO") << endl;
    }
    return 0;
}