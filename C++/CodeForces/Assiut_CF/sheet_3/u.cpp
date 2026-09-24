#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a_len, b_len;
    cin >> a_len >> b_len;

    vector<ll> a(a_len);
    for (int i = 0; i < a_len; i++) cin >> a.at(i);

    vector<ll> b(b_len);
    for (int i = 0; i < b_len; i++) cin >> b.at(i);

    int j = 0;
    bool sub = true;

    for (int i = 0; i < b_len; i++){

        for (j; j < a_len; j++){

            if (b.at(i) == a.at(j)){
                break;
            }
        }

        if ((i != b_len) && (j == a_len)) {
            sub = false;
            break;
        }
        j++;
        
    }

    cout << (sub ? "YES" : "NO");
    return 0;

}