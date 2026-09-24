#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
 
int main() {
     int t;
    cin >> t;
    while (t--) {
        string word1, word2;
        cin >> word1 >> word2;
 
        char temp;
        temp = word1[0];
        word1[0] = word2[0];
        word2[0] = temp;
 
        cout << word1 << ' ' << word2 << endl;
    }
 
    return 0;
}