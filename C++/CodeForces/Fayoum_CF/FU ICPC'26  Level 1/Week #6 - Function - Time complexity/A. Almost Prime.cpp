#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool isPrime(int &n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool hasTwoPrimeDivisors(int &n){
    int divisors = 0;
    for (int i = 2; i < n; i++){
        if (isPrime(i) && n % i == 0) divisors++;
        if (divisors > 2) return false;                     // time complexity savior
    }
    if (divisors != 2) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, almost_prime = 0;
    cin >> x;
    for (int i = 2; i <= x; i++){
        if (hasTwoPrimeDivisors(i)) almost_prime++;
    }

    cout << almost_prime << endl;

    return 0;
}