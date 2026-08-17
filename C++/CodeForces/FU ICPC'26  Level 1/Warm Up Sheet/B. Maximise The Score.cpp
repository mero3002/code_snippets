#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--){
        int n, score = 0;
        cin >> n;
        int size = n * 2;
        vector<long long> v(size);
        for (int i = 0; i < size; i++) cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 1; i < size; i += 2) score += v[i - 1];

        cout << score << endl;
    }

    return 0;
}