#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    char o;

    cin >> a >> o >> b;

    switch(o) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
    }

    return 0;
}