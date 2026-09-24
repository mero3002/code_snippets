#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    cin >> c;


    if (c >= 'a' && c <= 'z') {
            cout << "ALPHA\nIS SMALL";
        }

    else if (c >= 'A' && c <= 'Z'){
        cout << "ALPHA\nIS CAPITAL";
    }

    else {
        cout << "IS DIGIT";
    }

    return 0;
}