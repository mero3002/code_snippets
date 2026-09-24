#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string alpha = "abcdefghijklmnopqrstuvwxyz";

    string a, b;
    cin >> a >> b;

    int a_score, b_score;

    for (int i = 0; i < min(a.length(), b.length()); i++){
        for (int j = 0; j < 26; j++){
            if (a[i] == alpha[j]) a_score = j;
            if (b[i] == alpha[j]) b_score = j;
            if (a[i] == alpha[j] && b[i] == alpha[j]) break;
        }
        if (a_score != b_score) break;
    }

    cout << (a_score > b_score ? b : a);

    return 0;
}