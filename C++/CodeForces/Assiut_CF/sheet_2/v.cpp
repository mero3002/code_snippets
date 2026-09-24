#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

// while (true){

    int n;
    cin >> n;
    

    int i = 1;
    while (i < (n * 4)){
        cout << i++ << ' ' << i++ << ' ' << i << " PUM" << endl;
        i += 2;
    }
// }
    return 0;
}