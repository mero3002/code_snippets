#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void print_spaces(int n){
    for (int i = 0; i < n; i++) cout << ' ';
}

void print_stars(int n){
    for (int i = 0; i < n; i++) cout << '*';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, space, star;
    cin >> n;

    space = n - 1;
    star = 1;
    
    for (int i = 0; i < n; i++){
        print_spaces(space);
        print_stars(star);
        cout << endl;

        space--;
        star += 2;
    }

    return 0;
}