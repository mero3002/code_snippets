#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    string unvowled_x = "";
    cin >> x;

    for (char c : x) {
        c = tolower(c);
        if (
            c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u' ||
            c == 'y'
        ) continue;
        unvowled_x += '.';
        unvowled_x += c;
    }

    cout << unvowled_x << endl;

    return 0;
}