// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ld long double

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string song, org = "";
//     cin >> song;
//     bool add_space;

//     for (int i = 0; i < song.length(); i++) {
//         cout << "i : " << song[i] << endl;
//         if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
//             i += 2;
//             add_space = true;
//         }

//         else {
//             if (add_space) org += ' ';
//             add_space = false;
//             org += song[i];
//         } 
//     }
//     org.erase(org.begin(), org.begin() + 1);
//     org += ' ';
//     cout << org << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string song;
    cin >> song;
    size_t size = song.length();
    vector<char> v;
    bool add_space;

    for (int i = 0; i < size; i++) {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
            i += 2;
            add_space = true;
        }

        else {
            if (add_space) v.push_back(' ');
            add_space = false;
            v.push_back(song[i]);
        }
    }

    v.erase(v.begin(), v.begin() + 1);
    for (char c : v) cout << c;
    cout << endl;

    return 0;
}