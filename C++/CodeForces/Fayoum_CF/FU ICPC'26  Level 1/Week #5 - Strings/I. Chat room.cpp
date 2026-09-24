#include <bits/stdc++.h>
using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string hlelo;
//     string model = "hello";

//     cin >> hlelo;
//     size_t l = hlelo.length();

//     bool h_key = true;
//     bool e_key = false;
//     bool l1_key = false;
//     bool l2_key = false;
//     bool o_key = false;
//     bool lezgo = false;

//     int j = 0;
//     for (int i = 0; i < l; i++) {
//         if (h_key) {
//             if (hlelo[i] == 'h') {
//                 h_key = false;
//                 e_key = true;
//                 continue;
//             }
//         }

//         if (e_key) {
//             if (hlelo[i] == 'e') {
//                 e_key = false;
//                 l1_key = true;
//                 continue;
//             }
//         }

//         if (l1_key) {
//             if (hlelo[i] == 'l') {
//                 l1_key = false;
//                 l2_key = true;
//                 continue;
//             }
//         }

//         if (l2_key) {
//             if (hlelo[i] == 'l') {
//                 l2_key = false;
//                 o_key = true;
//                 continue;
//             }
//         }

//         if (o_key) {
//             if (hlelo[i] == 'o') {
//                 o_key = false;
//                 lezgo = true;
//                 continue;
//             }
//         }

//         if (lezgo) break;
//     }

//     cout << (lezgo ? "YES" : "NO") << endl;

//     return 0;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string model = "hello";
    string in;
    cin >> in;

    int j = 0;
    for (int i = 0; i < in.length(); i++) {
        if (in[i] == model[j]) j++;
        if (j == 5) break;
    }

    cout << (j == 5 ? "YES" : "NO") << endl;
    
    return 0;
}