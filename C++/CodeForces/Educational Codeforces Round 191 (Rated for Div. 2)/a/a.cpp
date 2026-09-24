#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

// n -> lines of code
// x -> maxim speed
// y -> nikita speed
// z -> time to set up AI
// y * 10 -> AI speed

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x, y, z, ai;
    cin >> t;
    while (t--){
        cin >> n >> x >> y >> z;

        int without_ai = 0;
        int using_ai = x * z;

        int i = 0;
        for (; without_ai < n; i++){
            without_ai += (x + y);
        }

        // cout << "Without AI: " << i << endl;

        int j = z;
        for (; using_ai < n; j++){
            using_ai += (x + y * 10);
        }

        // cout << "Using AI: " << j << endl;

        if (j < i) cout << j << endl;
        else cout << i << endl;
    }   

    return 0;
}