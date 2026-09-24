#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, triplets = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        // bool search_bigger = true;
        // bool search_smaller = false;
        // ll big = 0;
        // int big_index;

        for (int j = i + 1; j < n; j++) {
            // if (j == n - 1) break;
            if (v[j] > v[i]) {
                // big = v[j];
                // big_index = j;
                // search_bigger = false;
                // search_smaller = true;
                // cout << v[j] << " IS BIGGER THAN " << v[i] << endl;
                
                for (int k = j + 1; k < n; k++) {
                    if (v[k] < v[j]) {
                        // cout << v[k] << " IS SMALLER THAN " << v[j] << endl;
                        triplets++;
                        // j = big_index;
                        // cout << "SO NOW WE'RE ON " << v[j] << endl;
                        // search_smaller = false;
                        // search_bigger = true;
                        // cout << "TRIPLET: (" << v[i] << ", " << v[j] << ", " << v[k] << ")" << endl;
                        // cout << "NOW TRIPLETS " << triplets << endl;
                        // break;
                    }
                }
            }
        }
        // cout << endl << "ITERATION COMPLETED" << endl;
    }
    cout << triplets << endl;
    return 0;
}