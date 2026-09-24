#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string model = "codeforces";
        string x;
        cin >> x;
        
        short differs_counter = 0;
        for (int i = 0; i < 10; i++) if (model[i] != x[i]) differs_counter++;

        cout << differs_counter << endl;
    }

    return 0;
}