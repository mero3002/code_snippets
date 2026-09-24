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

    int n;
    cin >> n;
    
    for (int i = 2; i <= n; i++){
        if (isPrime(i)) cout << i << ' ';
    }

    return 0;
}