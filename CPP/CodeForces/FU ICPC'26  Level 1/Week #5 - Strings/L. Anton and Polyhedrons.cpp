#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, faces = 0;
    cin >> n;
    while (n--) {
        string shape;
        cin >> shape;

        
        if (shape == "Tetrahedron") {
            faces += 4;
        }
        else if (shape == "Cube") {
            faces += 6;
        }
        else if (shape == "Octahedron") {
            faces += 8;
        }
        else if (shape == "Dodecahedron") {
            faces += 12;
        }
        else {
            faces += 20;
        }
    }
    cout << faces << endl;

    return 0;
}