#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;

        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v.at(i);

        int count = 0;

        for (int i = 0; i < n; i++){

            vector<ll> sub;
            sub.push_back(v.at(i));

            // cout << "CURRENT SUB: ";
            // cout << v.at(i);
            // cout << "\nTRUE" << endl << endl;

            count++;
            
            
            for(int j = i + 1; j < n; j++){    
                ll temp = v.at(i);
                sub.push_back(v.at(j));
                bool stop = false;

                // cout << "CURRENT SUB: ";
                // for (int i = 0; i < sub.size(); i++) cout << sub.at(i) << ' ';
                // cout << endl;

                for (ll x : sub){
                    if (x < temp) {
                        // cout << "SEE TEMP: " << temp << endl;
                        // cout << "SEE CURRENT: " << x << endl;
                        stop = true;
                        break;
                    }
                    temp = x;
                }

                if (stop){
                    // cout << "FALSE" << endl << endl;
                    break;
                } 
                else {
                    // cout << "TRUE" << endl << endl;
                    count++;
                }
            }
        }
        // cout << "COUNT: ";
        cout << count << endl;
    }   

    return 0;
}