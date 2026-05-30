#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const short rows = 8;
    const short cols = 8;
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> v(rows, vector<char>(cols, 0));
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                cin >> v[i][j];
            }
        }

        // short main_row;
        short main_col;
        bool shouldIBreakBro = false;
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                if (v[i][j] != '.') {
                    // main_row = i;
                    main_col = j;
                    shouldIBreakBro = true;
                    break;
                }
            }
            if (shouldIBreakBro) break;
        }

        for (int i = 0; i < rows; i++) {
            if (v[i][main_col] != '.') {
                    cout << v[i][main_col];
                }
        }
        cout << endl;
    }

    return 0;
}