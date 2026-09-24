#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true){
        int a, b;
        cin >> a >> b;

        if (a <= 0 || b <= 0) break;

        int sum = 0;
        for (int i = min(a, b); i <= max(a, b); i++){
            cout << i << ' ';
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}