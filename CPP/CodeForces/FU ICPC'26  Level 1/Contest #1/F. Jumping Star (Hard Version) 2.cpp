#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, triplets = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int index_X = 0, index_Y = 1, index_Z = 2; 
    // (1, 5, 2)
    // (X, Y, Z)

    while (true) {
        // cout << "X: " << v[index_X] << endl;
        // cout << "Y: " << v[index_Y] << endl;
        // cout << "Z: " << v[index_Z] << endl << endl;

        if (index_X == n - 2) break; // job finished

        if (index_Y == n - 1) { // a full vector loop occurred
            index_X++;
            index_Y = index_X + 1;
            index_Z = index_Y + 1;
            continue;
        }

        if (index_Z == n) {
            index_Y++;
            index_Z = index_Y + 1;
            continue;
        }

        if (!(v[index_Y] > v[index_X])) {
            index_Y++;
            index_Z++;
            continue;
        }

        if (!(v[index_Y] > v[index_Z])) {
            index_Z++;
            continue;
        }

        else {
            // cout << "TRIPLET WAS FOUND: (" << v[index_X] << ", " << v[index_Y] << ", " << v[index_Z] << ")" << endl;
            triplets++;
            index_Z++;
            continue;
        }
        
        index_Y++;
        
    }
    cout << triplets << endl;
    return 0;
}