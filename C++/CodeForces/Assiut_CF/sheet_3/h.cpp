#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void bubble_sort(vector<int>& v){
    int n = v.size();
    int temp;

    for (int i = 0; i < n; i++){
        for (int i = 0; i < n - 1 - i; i++){
            if (v.at(i) > v.at(i + 1)){
                temp = v.at(i);
                v.at(i) = v.at(i + 1);
                v.at(i + 1) = temp;
            }
        }
    }
    
    for (int x : v) cout << x << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v.at(i);

    bubble_sort(v);

    return 0;
}