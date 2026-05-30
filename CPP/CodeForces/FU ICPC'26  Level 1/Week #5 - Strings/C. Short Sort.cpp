#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        bool ynf3;
        if (
            str == "abc"
            || str == "acb"
            || str == "bac"
            || str == "cba"
        ) ynf3 = true;
        
        else ynf3 = false;

        cout << (ynf3 ? "YES" : "NO") << endl;
    }
    return 0;
}