#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void print_stars(int t){
    for (int i = 0; i < t; i++){
        cout << '*';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        print_stars(i);
        cout << endl;
    }

    return 0;
}