#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll* arr = new ll[n];
    
    for (int i = 0; i < n; i++) cin >> arr[i];

    int indexa = 0;
    for (int i = 0; i < n; i++) {
        // cout << "WE ARE AT " << arr[i] << endl;
        bool second_key = false;
        bool search_biggest = true;
        int biggest = 0;

        for (int j = i + 1; j < n; j++) {
            if (search_biggest && arr[j] > arr[i]) {
                biggest = arr[j];
                // cout << "WE FOUND " << biggest << " AS THE FIRST BIGGER ELEMENT" << endl;
                search_biggest = false;
                second_key = true;
                continue;
            }
            if (second_key) {
                if (second_key && (arr[j] < biggest)) {
                    // cout << "WE FOUND " << arr[j] << " AS THE FIRST SMALLER ELEMENT" << endl;
                    indexa += i + 1;
                    // cout << "INDEXA: " << indexa << endl;
                    break;
                }
            }
        }
    }

    cout << indexa << endl;
    return 0;
}