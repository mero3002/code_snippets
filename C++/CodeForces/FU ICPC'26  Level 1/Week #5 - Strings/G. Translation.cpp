#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word1, word2;
    cin >> word1 >> word2;
    reverse(word1.begin(), word1.end());

    // cout << "word1: " << word1 << endl;
    // cout << "word2: " << word2 << endl;

    if (word1 == word2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}