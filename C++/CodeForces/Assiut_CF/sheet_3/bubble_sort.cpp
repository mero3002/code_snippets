#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void bubble_sort(vector<int>& v){
    int n = v.size();

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            int temp;
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
            
        }
        // cout << "ROUND: " << i << endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    bubble_sort(v);

    cout << "SORTED:\n";

    for (int i : v) cout << i << ' ';

    return 0;
}