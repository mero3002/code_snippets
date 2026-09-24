#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int size = n * n;

    vector<int> v(size);
    for (int i = 0; i < size; i++) cin >> v.at(i);

    int main_sum = v.at(0);
    int main_hops = n + 1;
    for (int i = main_hops; i < size; i += main_hops){
        main_sum += v.at(i);
    }

    // cout << "MAIN SUM: " << main_sum << endl;

    int sec_sum = v.at(n - 1);
    int sec_hops = n - 1;
    for (int i = sec_hops * 2; i < size - 1; i += sec_hops){
        // cout << "INDEX: " << i << endl;
        sec_sum += v.at(i);
    }

    // cout << "SEC SUM: " << sec_sum << endl;


    cout << abs(main_sum - sec_sum);

    return 0;
}