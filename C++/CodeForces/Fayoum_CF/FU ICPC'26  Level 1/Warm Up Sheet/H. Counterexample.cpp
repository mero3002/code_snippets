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
        vector<int> d(n);
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> d[i];
        // d1=a1, di=|ai−ai−1| for 2≤i≤n
        a[0] = d[0];
        for (int i = 1; i < n; i++){
            a[i] = d[i] + d[i-1];
        }

        for (int item : a) cout << item << ' ';
    }

    return 0;
}