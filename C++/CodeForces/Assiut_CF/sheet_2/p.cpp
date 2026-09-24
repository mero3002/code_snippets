#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void print_stars_r(int t){
    for (int i = t; i > 0; i--){
        cout << '*';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    for (int i = t; i > 0; i--){
        print_stars_r(i);
        cout << endl;
    }

    return 0;
}