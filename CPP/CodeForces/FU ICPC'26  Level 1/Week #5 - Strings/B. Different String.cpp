#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str, strr;
        cin >> str;
        bool different = false;

            for (int i = 1; i < str.length(); i++) {
                if (str[i] != str[i - 1]) {
                    different = true;
                    char temp = str[i];
                    str[i] = str[i - 1];
                    str[i - 1] = temp;
                    break;
                }
            }

        if (different) cout << "YES\n" << str << endl;
        else cout << "NO" << endl;
    }

    return 0;
}