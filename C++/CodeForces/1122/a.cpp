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

        int arr[3];
        for (int i = 0; i < 3; i++) cin >> arr[i];

        int lowest = min(arr[0], arr[1]);
        lowest = min(lowest, arr[2]);

        cout << n - lowest << endl;
    }

    return 0;
}