#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool isPrime(int x){
    for (int i = 2; i <= x / 2; i++){
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--){
        int x;
        cin >> x;
        cout << (isPrime(x) ? "YES" : "NO") << endl;
    }

    return 0;
}