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
        ll dec;
        cin >> dec;

        int result = 0;
        while (dec){
            if (dec & 1){
                result = (result << 1) | 1;
            }
            dec >>= 1;
        }

        cout << result << endl;

    }

    return 0;
}