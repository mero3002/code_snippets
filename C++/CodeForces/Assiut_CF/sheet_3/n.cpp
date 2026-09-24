#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int before;
    int after;
    cin >> before >> after;
    
    string s;
    cin >> s;

    string pattern = "^\\d{";

    pattern = pattern + to_string(before);
    pattern = pattern + "}-\\d{";
    pattern = pattern + to_string(after);
    pattern = pattern + "}$";

    regex pattern_(pattern);

    cout << (regex_match(s, pattern_) ? "Yes" : "No");
    return 0;
}