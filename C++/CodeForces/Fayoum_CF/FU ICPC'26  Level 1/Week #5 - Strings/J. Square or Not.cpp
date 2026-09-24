#include <bits/stdc++.h>
using namespace std;
#define lld long double
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        bool equals = true;
        lld n;
        cin >> n;
        string x, model = "";
        cin >> x;
        
        float root = sqrt(n);
        if (root != floor(root)) {
            cout << "NO" << endl;
            continue;
        }

        ll rows = root;
        ll cols = root;

        ll zeros = (sqrt(n) - 2) * (sqrt(n) - 2);

        for (ll i = 0; i < rows; i++) {
            model += "1";
        }

        for (ll i = 0; i < rows - 2; i++) {
            model += "1";
            for (ll z = 0; z < zeros / (rows - 2); z++) {
                model += "0";
            }
            model += "1";
        }

        for (ll i = 0; i < rows; i++) model += "1";

        if (x.length() != model.length()) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < model.length(); i++) {
            if (model[i] != x[i]) {
                equals = false;
                break;
            }
        }

        cout << (equals ? "YES" : "NO") << endl;
    }

    return 0;
}