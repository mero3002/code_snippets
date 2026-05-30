#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll mishka = 0;
    ll chris = 0;
    ll r;
    cin >> r;

    while (r--){
        ll m, c;
        cin >> m >> c;
        if (m > c) mishka++;
        else if (c > m) chris++;
    }

    if (mishka > chris) cout << "Mishka" << endl;
    else if (mishka < chris) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}