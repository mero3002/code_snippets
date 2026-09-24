#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool is_valid(int min, int max, int n){
    int sum = 0;

    while(n){
        sum += n % 10;
        n /= 10;
    }
    // cout << "FUNCTION SUM: " << sum << endl;
    return ((sum >= min && sum <= max) ? true : false);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

// while (true){

    int n, min, max, sum = 0;
    cin >> n >> min >> max;

    for (int i = 1; i <= n; i++){
        if (is_valid(min, max, i)) sum += i;
    }

    cout << sum << flush;

// }

    return 0;
}