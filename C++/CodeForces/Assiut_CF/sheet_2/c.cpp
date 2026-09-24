#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, positive = 0, negative = 0, even = 0, odd = 0;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v.at(i);
    }

    for (int i : v){
        if (i > 0) positive++;
        else if (i < 0) negative++;

        if (i % 2 == 0) even++;
        else odd++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative;

    return 0;
}