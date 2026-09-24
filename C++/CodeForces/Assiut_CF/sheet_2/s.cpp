#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){
        int a, b, sum = 0;

        cin >> a >> b;

        for (int i = min(a, b) + 1; i < max(a, b); i++){
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}