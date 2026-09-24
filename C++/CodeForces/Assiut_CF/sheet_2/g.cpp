#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

ll get_fact(int x){
    ll result = 1;
    for (int i = 1; i <= x; i++){
        result *= i;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> v(n);
    vector<ll> v_fact(n);

    for (int i = 0; i < n; i++){ 
        int in;
        cin >> in;

        v.at(i) = in;
        v_fact.at(i) = get_fact(in);
    }

    for (ll i : v_fact) cout << i << endl;

    return 0;
}