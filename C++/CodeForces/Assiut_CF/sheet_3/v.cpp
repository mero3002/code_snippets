#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // n -> vector size
    // m -> endpoint value (from 1 to m)

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v.at(i);

    sort(v.begin(), v.end());

    int j = 0;

    for (int i = 1; i <= m; i++){
        int total = 0;

        for (j; j < n; j++){

            if (v.at(j) == i) total++;
            else break;

        }
        // j++;

        cout << total << endl;
    }

    return 0;
}