#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Ai + Aj + j - i
    // {1, 100, 100, 100, 100, 100, 2, 100, 3, 4}
    // {1, 2} => 3 + 6 = 9
    // {3, 4} => 7 + 1 = 8

    int tt;
    cin >> tt;
    while (tt--){
        
        int n;
        cin >> n;
        
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v.at(i);

        ll lowest = v.at(0) + v.at(1) + 1;

        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if ((v.at(i) + v.at(j) + (j - i)) < lowest){
                    lowest = v.at(i) + v.at(j) + (j - i);
                }
            }
        }

        cout << lowest << endl; 

    }
    return 0;
}