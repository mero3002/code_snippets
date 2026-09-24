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

void print_pyramid(int rows){
    int space, star;

    space = rows - 1;
    star = 1;
    
    for (int i = 0; i < rows; i++){
        print_spaces(space);
        print_stars(star);
        cout << endl;

        space--;
        star += 2;
    }
}

void print_pyramid_r(int rows){
    int space, star;

    space = 0;
    star = rows * 2 - 1;

    for (int i = 0; i < rows; i++){
        print_spaces(space);
        print_stars(star);
        cout << endl;

        space++;
        star -= 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    print_pyramid(n);
    print_pyramid_r(n);

    return 0;
}