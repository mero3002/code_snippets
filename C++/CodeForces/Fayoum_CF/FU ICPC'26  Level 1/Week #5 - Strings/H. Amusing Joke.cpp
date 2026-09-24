#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string guest;
    string host;
    string both = "";
    string pile;
    
    cin >> guest >> host >> pile;
    size_t l = pile.length();
    vector<char> vPile(l);

    for (char c : guest) both += c;
    for (char c : host) both += c;

    for (int i = 0; i < l; i++) vPile[i] = pile[i]; 

    bool found;

    for (char c : both){
        found = false;

        for (int i = 0; i < vPile.size(); i++){
            if (c == vPile[i]) {
                vPile.erase(vPile.begin() + i, vPile.begin() + i + 1);

                // cout << "NOW PILE: " << endl;
                // for (char e : vPile) cout << e;
                // cout << endl;

                found = true;
                break;
            } 
        }
        if (!vPile.size()) break;
        if (!found) break;
    }

    cout << (vPile.size() ? "NO" : "YES") << endl;

    return 0;
}