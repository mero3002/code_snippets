#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rec1, rec2;
    cin >> rec1 >> rec2;

    int result = rec1 * rec2;
    int x = 0;
    int i = 1;
    for (; x <= result; i++){
        x = i * 2;
    }
    cout << i - 2 << endl;

    return 0;
}