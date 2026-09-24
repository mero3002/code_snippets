#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    int total = 0;
    for (int i = 0; i < n; i++) total += v[i];
    int cut = 0;
    int counter = 0;
    for (int i = 0; i < n; i++){
        if (total >= cut){
            cut += v[i];
            total -= v[i];
            counter++;
        }
        else break;
    }
    cout << counter << endl;

    return 0;
}