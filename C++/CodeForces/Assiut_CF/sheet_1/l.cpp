#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string f1, l1, f2, l2;
    cin >> f1 >> l1 >> f2 >> l2;

    if (l1 == l2){
        cout << "ARE Brothers";
    }

    else {
        cout << "NOT";
    }

    return 0;
}