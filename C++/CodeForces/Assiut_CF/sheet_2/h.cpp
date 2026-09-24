#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool isPrime(ll n){
    if (n <= 1) return false;

    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

// while (true){
    ll n;
    cin >> n;
    
    cout << (isPrime(n) ? "YES" : "NO") << endl;
// }

    return 0;
}