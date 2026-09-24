#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

string word;

void changeCase(){
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) word[i] = tolower(word[i]);
        else word[i] = toupper(word[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> word;
    bool change = true;

    for (int i = 1; i < word.length(); i++) {
        if (islower(word[i])) {
            change = false;
            break;
        }
    }

    if (change) changeCase();

    cout << word << endl;
    
    return 0;
}