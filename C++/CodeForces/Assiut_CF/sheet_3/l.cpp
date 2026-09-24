#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector<ll> v(n);

        for (int i = 0; i < n; i++) cin >> v.at(i);

        for (int i = 0; i < n; i++){
            vector<ll> item;
            item.push_back(v.at(i));

            cout << v.at(i) << ' ';
            // {
            //     cout << "ITEMS:\n";
            //     for (ll thing : item) cout << thing << ' ';
            //     cout << endl;
            // }

            for (int j = i + 1; j < n; j++){
                   
                item.push_back(v.at(j));

                ll max = *max_element(item.begin(), item.end());
                cout << max << ' ';
                // {
                //     cout << "ITEMS:\n";
                //     for (ll thing : item) cout << thing << ' ';
                //     cout << endl;
                // }
            }
            
        }

        cout << endl;
    }   

    return 0;
}