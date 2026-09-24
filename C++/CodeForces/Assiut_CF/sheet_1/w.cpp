#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    char o, eq;

    cin >> a >> o >> b >> eq >> c;
    
    switch(o) {
        case '+':
            if (a + b == c){
                cout << "Yes";
            }
            else {
                cout << a + b;
            }
          break;
        
        case '-': 
            if (a - b == c){
                cout << "Yes";
            }
            else {
                cout << a - b;
            }
            break;
        
        case '*': 
            if (a * b == c){
                cout << "Yes";
            }
            else {
                cout << a * b;
            }
            break;

        default:
            cout << "a3o3o3o3o3oo3";
    }

    return 0;
}