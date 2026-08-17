#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, d, o;
    cin >> h >> d >> o;

    if (h % 7 == 0 || (o > 100 && d > 100)) {
        cout << "Advanced" << endl;
        return 0;
    }

    if (d > o && h > 50) {
        cout << "Intermediate" << endl;
        return 0;
    }

    string h_str = to_string(h);
    if (o >= 50 || h_str[h_str.length() - 1] == '5') {
        cout << "Beginners" << endl;
        return 0;
    }

    cout << "Practice" << endl;
    return 0;
}