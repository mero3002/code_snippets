#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x; 
    bool flag = true;
    while (x--){
        if (flag){
            cout << "I hate ";
            flag = false;
        }
        else {
            cout << "I love ";
            flag = true;
        }
        if (x > 0){
            cout << "that ";
        }
        else cout << "it";
    }
    return 0;
}