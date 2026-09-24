#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ld a, b, c;
    cin >> a >> b;
    
    c = a / b;

    cout << "floor " << a << " / " << b << " = " << floor(c) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(c) << endl;
    cout << "round " << a << " / " << b << " = " << round(c);

    return 0;
}