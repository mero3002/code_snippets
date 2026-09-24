#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    char o;
    cin >> a >> o >> b;

    switch(o) {
        case '>': cout << (a > b ? "Right" : "Wrong"); break;
        case '<': cout << (a < b ? "Right" : "Wrong"); break;
        case '=': cout << (a == b ? "Right" : "Wrong"); break;
    }

    return 0;
}